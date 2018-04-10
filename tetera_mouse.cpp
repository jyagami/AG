#include <GL/gl.h>
#include <GL/glut.h>

//iNICIALIZAMOS VARIABLES
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;

void init(void)
{
    GLfloat punto_luz[] = {1.0, 1.0, 1.0};
    GLfloat luz_ambiental[] = {0.5, 0.5, 0.5};
	
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0); //Activamos las luces en 0
    glDepthFunc(GL_LESS); //comparación de profundidad
    glEnable(GL_DEPTH_TEST); //activa GL_DEPTH_TES
  	// Queremos que se dibujen las caras frontales
  	// y con un color solido de relleno.
  	
  	 //~ glLightModelfv (GL_LIGHT_MODEL_AMBIENT, luz_ambiental);
    //glLightfv (GL_LIGHT0, GL_POSITION, punto_luz);
    //~ glLightModeli (GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);
  	
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}

void reshape(int w, int h)
{
    glViewport(0, 0,  (GLsizei) w, (GLsizei) h);
  // Activamos la matriz de proyeccion.
    glMatrixMode(GL_PROJECTION);
  // "limpiamos" esta con la matriz identidad.
    glLoadIdentity();
  // Usamos proyeccion ortogonal
    glOrtho(-300, 300, -300, 300, -300, 300);
  // Activamos la matriz de modelado/visionado.
    glMatrixMode(GL_MODELVIEW);
  // "Limpiamos" la matriz
    glLoadIdentity();
}

void display(void)
{
	
	
	 
	
// Propiedades del material

    GLfloat mat_ambient[] = { 0.329412f, 0.223529f, 0.027451f};
    GLfloat mat_diffuse[] = { 0.780392f, 0.568627f, 0.113725f};
    GLfloat mat_specular[] = { 0.992157f, 0.941176f, 0.807843f};
    GLfloat shine[] = {27.8974f};

	//Ruby
	//~ GLfloat mat_ambient[] = { 0.1745f, 0.01175f, 0.01175f};
    //~ GLfloat mat_diffuse[] = { 0.61424f, 0.04136f, 0.04136f};
    //~ GLfloat mat_specular[] = { 0.727811f, 0.626959f, 0.626959f};
    //~ GLfloat shine[] = {0.6f};

// "Limpiamos" el frame buffer con el color de "Clear", en este
// caso negro.
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_MODELVIEW_MATRIX );
    glLoadIdentity();
    
    // Rotar en el eje X,Y y Z
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );

// Rotacion de 25 grados en torno al eje x
    glRotated(25.0, 1.0, 0.0, 0.0);
// Rotacion de -30 grados en torno al eje y
    glRotated(-50.0, 0.0, 1.0, 0.0);
// Dibujamos una "Tetera" y le aplico el material
    
    glPushMatrix();
//setMaterial
	
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
	glutSolidTeapot(125.0);
    
    glFlush();
}

// Función para controlar teclas especiales
void specialKeys( int key, int x, int y )
{

    //  Flecha derecha: aumentar rotación 7 grados
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 7;

    //  Flecha izquierda: rotación en eje Y negativo 7 grados
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 7;
    //  Flecha arriba: rotación en eje X positivo 7 grados
    else if (key == GLUT_KEY_UP)
        rotate_x += 7;
    //  Flecha abajo: rotación en eje X negativo 7 grados
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 7;
   
    //  Solicitar actualización de visualización
    glutPostRedisplay();

}

//Funcion que controla las teclas del mouse

void mouse(int button, int state, int x, int y)
{
	switch (button)

	{
	case GLUT_LEFT_BUTTON:
		rotate_z += 7;
		break;
	case GLUT_RIGHT_BUTTON:
		rotate_z -= 7;
	break;
	}
	glutPostRedisplay();	
}

int main(int argc, char **argv)
{
// Inicializo OpenGL
    glutInit(&argc, argv);
// Activamos buffer simple y colores del tipo RGB
    glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH);
// Definimos una ventana de medidas 800 x 600 como ventana
// de visualizacion en pixels
    glutInitWindowSize (800, 600);
// Posicionamos la ventana en la esquina superior izquierda de
// la pantalla.
    glutInitWindowPosition (0, 0);
// Creamos literalmente la ventana y le adjudicamos el nombre que se
// observara en su barra de titulo.
    glutCreateWindow ("Tetera");
// Inicializamos el sistema
    init();
    glutDisplayFunc(display);
     
    glutReshapeFunc(reshape);
    
    glutSpecialFunc(specialKeys);
    glutMouseFunc(mouse);
    glutMainLoop();

    return 0;
}

