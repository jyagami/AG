#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

//Definimos variables

GLint ancho=800;
GLint alto=600;
int perspectiva = 0;

void punto(float x, float y)
{

	glPointSize(25);
	glBegin(GL_POINTS);
	glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f(  x, y, 0.0); 
	glEnd();
	
}
  
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
}
	//Creaamos la funcion menu y su contenido
void menu(int valor)
{

	if(valor==1)
	{
	glutWireTorus(0.5, 1.0, 20, 20);
	glFlush();
    glutSwapBuffers();
	}

	else if(valor==2)
	{
	punto(0.5, 0.5);
	glFlush();
    glutSwapBuffers();
	}

	else if(valor==3)
	{
	glutWireTeapot(1.0);;
	glFlush();
    glutSwapBuffers();
	}

	else if(valor==4)
	{
	exit(0);
	}
 glutPostRedisplay();
 glFlush();
    
}
	//Llamamos a la funcion menu 
void menu_opciones(void)
{
	glutCreateMenu(menu);
	glutAddMenuEntry("Dibujo 1", 1);
	glutAddMenuEntry("Dibujo 2", 2);
	glutAddMenuEntry("Tetera 3", 3);
	glutAddMenuEntry("Salir", 4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);

}

void reshape(int w, int h)
{
   glViewport(0, 0, w,h);
    glMatrixMode(GL_PROJECTION);
     
     menu_opciones();
    
    glLoadIdentity();
    glOrtho(-2, 2, -2, 2, -2, 2);
	//glFrustum (-1.0, 1.0, -1.0, 1.0, 2.0, 200.0);
    glMatrixMode(GL_MODELVIEW);
 
}

void init()
{
    glClearColor(0,0,0,0);
    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);
    
}

int main(int argc, char* argv[])
{
	//  Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc,argv);
    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (1300, 700);
    glutInitWindowSize(ancho, alto);
    // Crear ventana
    glutCreateWindow("Menu-figuras");
	init();
    // Funciones de retrollamada
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    // Pasar el control de eventos a GLUT
    glutMainLoop();
	// Regresar al sistema operativo
    return 0;
}
