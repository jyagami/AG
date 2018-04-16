#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

//variables
GLfloat tetX=350, tetY=-350;//variables para el traslado de la figura
int figAct;//parametro para determinar que figura se mostrara 
 
//funcion tetera_material=====================================================================================
 
 void tetera_Emerald(float tX, float tY)
 {

	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0215, 0.1745f, 0.0215f};
	GLfloat mat_diffuse[] = { 0.07568f, 0.61424f, 0.07568f};
	GLfloat mat_specular[] = { 0.633f, 0.727811f, 0.633f};
	GLfloat shine[] = {0.6f};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
	
		
	glutSolidTeapot(100);
	glFlush();
    glutSwapBuffers();
 }
//funcion esfera_material=================================================================================
 
 void esfera_Pearl(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.25, 0.20725, 0.20725};
	GLfloat mat_diffuse[] = { 1, 0.829, 0.829};
	GLfloat mat_specular[] = { 0.296648, 0.296648, 0.296648};
	GLfloat shine[] = {0.088};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidSphere(100, 60.0, 60.0);
	glFlush();
    glutSwapBuffers();
 }
 
 
//funcon cubo_material==========================================================================================================


 
  void cubo_Rubi(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.1745, 0.01175, 0.01175};
	GLfloat mat_diffuse[] = { 0.61424, 0.04136, 0.04136};
	GLfloat mat_specular[] = { 0.727811, 0.626959, 0.626959};
	GLfloat shine[] = {0.6};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo
	glFlush();
    glutSwapBuffers();
 }
 

//funcion toroide_material==========================================================================================================
  

void toro_Gold(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.24725, 0.1995, 0.0745};
	GLfloat mat_diffuse[] = { 0.75164, 0.60648, 0.22648};
	GLfloat mat_specular[] = { 0.628281, 0.555802, 0.366065};
	GLfloat shine[] = {0.4};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidTorus(50, 100.0, 50, 50);//Dona xd
	glFlush();
    glutSwapBuffers();
 }
 
  
//funcion cono_material==========================================================================================================
 
 void cono_Bronce(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.2125, 0.1275, 0.054};
	GLfloat mat_diffuse[] = { 0.714, 0.4284, 0.18144};
	GLfloat mat_specular[] = { 0.393548, 0.271906, 0.166721};
	GLfloat shine[] = {0.2};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(80, 150, 50, 50);//Cono
	glFlush();
    glutSwapBuffers();
 }
//Dodecaedron =========================================================================================
 void dodecahedron_Jade(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	
	GLfloat mat_ambient[] = { 0.135f, 0.2225f, 0.1575};
	GLfloat mat_diffuse[] = { 0.54, 0.89, 0.63};
	GLfloat mat_specular[] = { 0.316228, 0.316228, 0.316228};
	GLfloat shine[] = {0.1f};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    	
	glScalef(40, 40, 40);
	glutSolidDodecahedron();
	glFlush();
    glutSwapBuffers();
 }
 // Isocaedron==========================================================================================
 void isocaedron_Obsidian(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05375, 0.05, 0.06625};
	GLfloat mat_diffuse[] = { 0.18275, 0.17, 0.22525};
	GLfloat mat_specular[] = { 0.332741, 0.328634, 0.346435};
	GLfloat shine[] = {0.3f};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    	
	glScalef(40, 40, 40);
	glutSolidIcosahedron();
	glFlush();
    glutSwapBuffers();
 }
  // Tetrahedron==========================================================================================
 void tetrahedron_Turquoise(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.1, 0.18725, 0.1745};
	GLfloat mat_diffuse[] = { 0.396, 0.74151, 0.69102};
	GLfloat mat_specular[] = { 0.297254, 0.30829, 0.306678};
	GLfloat shine[] = {0.1};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    	
	glScalef(40, 40, 40);
	glutSolidTetrahedron();
	glFlush();
    glutSwapBuffers();
 }
 
//funcion para determinar la figura y material que se mostrara
void figura(int fig)
{
	//Materiales para tetera
	if(fig==1)
	{
		tetera_Emerald(tetX, tetY);
	}
	else if(fig==2)
	{
		esfera_Pearl(tetX, tetY);
	}
	else if(fig==3)
	{
		cubo_Rubi(tetX, tetY);
	}
	else if(fig==4)
	{
		toro_Gold(tetX, tetY);
	}
	else if(fig==5)
	{
		cono_Bronce(tetX, tetY);
	}
	else if(fig==6)
	{
		dodecahedron_Jade(tetX, tetY);
	}
	else if(fig==7)
	{
		isocaedron_Obsidian(tetX, tetY);
	}
	else if(fig==8)
	{
		tetrahedron_Turquoise(tetX, tetY);
	}
	
}	

	//dibujamos la figura mediante la funcion figura() 
void display()
{	
	//"Limpiamos" el frame buffer con el color de "Clear", en este
	//caso negro.
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_MODELVIEW_MATRIX );
    glLoadIdentity();
	//llamamos a la funcion figura para "dibujarla" segun sea el parametro
	figura(figAct);
	
}

	//Creaamos la funcion menu con sus valores
void menu(int valor)
{
	switch (valor)
    {
    case 1:
    figAct=1;
        break;
    case 2:
    figAct=2;
        break;
    case 3:
    figAct=3;
        break;
    case 4:
    figAct=4;
        break;
    case 5:
    figAct=5;
        break;
    case 6:
    figAct=6;
        break;
    case 7:
    figAct=7;
        break;
    case 8:
    figAct=8;
        break;
    
    
    }
    glutPostRedisplay();
 
}    
	
	//Llamamos a la funcion menu y le añadimos contenido
void createMenu(void){     
	glutCreateMenu(menu);
    glutAddMenuEntry("Tetera", 1);
    glutAddMenuEntry("Esfera", 2);
    glutAddMenuEntry("Cubo", 3);
    glutAddMenuEntry("Toroide", 4);
    glutAddMenuEntry("Cono", 5);
    glutAddMenuEntry("Dodecaedron", 6);
    glutAddMenuEntry("Icosahedron", 7);
    glutAddMenuEntry("Tetrahedron", 8);
    
    glutAttachMenu(GLUT_RIGHT_BUTTON);
} 

void reshape(int w, int h)
{
	glViewport(0, 0, w,h);
    glMatrixMode(GL_PROJECTION);
    //llamamos al menu 
    createMenu();
    glLoadIdentity();
    glOrtho(0, 700, -700, 0, -100, 100);
    glMatrixMode(GL_MODELVIEW);
}

void init()
{
    //creamos el punto de luz y la luz del ambiente
    GLfloat punto_luz[] = {-1.0, -1.0, -1.0};
    GLfloat luz_ambiental[] = {1.0, 1.0, 1.0};
    
    //acctivamos el ambiente
	glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0); //Activamos las luces en 0
    glDepthFunc(GL_LESS); //comparación de profundidad
    glEnable(GL_DEPTH_TEST); //activa GL_DEPTH_TES
  	
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    
}

	//funcion para determinar la pisicion del mouse y trasladar el objeto
void moveMouse(int button, int state, int x, int y) 
{
	//Si se presiona clic izquierdo la posicion delmouse se envia a
	//los parametros de traslacion de la figura(tetX, tetY)
	if((button==GLUT_RIGHT_BUTTON)&(state==GLUT_DOWN))
		{
			tetX=x;
			tetY=y*-1;
		}
}
	//funcion para redibujar el objeto mientras el mouse se mueve al 
	//mantener presionado clic izquierdo
void mouseMotion(int x, int y) 
{
		tetX=x;
		tetY=y*-1;
	glutPostRedisplay();
}

int main(int argc, char* argv[])
{
	//  Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc,argv);
    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (700, 700);
    // Crear ventana
    glutCreateWindow("Menu-figuras");
	init();
    // Funciones de retrollamada
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
   //llamamos a las funciones glut para controlar el mouse
    glutMouseFunc(moveMouse);
	glutMotionFunc(mouseMotion);
    // Pasar el control de eventos a GLUT
    glutMainLoop();
	// Regresar al sistema operativo
    return 0;
}
