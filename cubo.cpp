#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


void display(void)
{


	

    //glPointSize(5);
   
    glBegin(GL_LINES);
    
    //glColor3f(0.0f,1.0f,0.0f);
    
    glVertex3f(9.0f, 9.0f, 0.0f);
    glVertex3f(-9.0f, 9.0f, 0.0f);
    
    glVertex3f(-9.0f, 9.0f, 0.0f);
    glVertex3f(-9.0f, -9.0f, 0.0f);
    
    
    glVertex3f(-9.0f, -9.0f, 0.0f);
    glVertex3f(9.0f, -9.0f, 0.0f);
    
    glVertex3f(9.0f, -9.0f, 0.0f);
    glVertex3f(9.0f, 9.0f, 0.0f);
    
    glVertex3f(0.0f, 9.0f, 0.0f);
    glVertex3f(0.0f, -9.0f, 0.0f);
    
   //--------------- porteria izquierda
   
    //porteria cuadro pequeño
    glVertex3f(-9.0f, 3.0f, 0.0f);
    glVertex3f(-7.0f, 3.0f, 0.0f);
    
    glVertex3f(-7.0f, 3.0f, 0.0f);
    glVertex3f(-7.0f, -3.0f, 0.0f);
    
    glVertex3f(-7.0f, -3.0f, 0.0f);
    glVertex3f(-9.0f, -3.0f, 0.0f);
    
    
    //cuadro grande 
    
    glVertex3f(-9.0f, 5.0f, 0.0f);
    glVertex3f(-5.0f, 5.0f, 0.0f);
    
    glVertex3f(-5.0f, 5.0f, 0.0f);
    glVertex3f(-5.0f, -5.0f, 0.0f);
    
    glVertex3f(-5.0f, -5.0f, 0.0f);
    glVertex3f(-9.0f, -5.0f, 0.0f);
    
   //----------- porterilla derecha
   
   
   // cuadro pequeño
    glVertex3f(9.0f, -3.0f, 0.0f);
    glVertex3f(7.0f, -3.0f, 0.0f);
    
    glVertex3f(7.0f, -3.0f, 0.0f);
    glVertex3f(7.0f, 3.0f, 0.0f);
    
    glVertex3f(7.0f, 3.0f, 0.0f);
    glVertex3f(9.0f, 3.0f, 0.0f);
    
    
    //cuadro grande
    
    glVertex3f(9.0f, -5.0f, 0.0f);
    glVertex3f(5.0f, -5.0f, 0.0f);
    
    glVertex3f(5.0f, -5.0f, 0.0f);
    glVertex3f(5.0f, 5.0f, 0.0f);
    
    glVertex3f(5.0f, 5.0f, 0.0f);
    glVertex3f(9.0f, 5.0f, 0.0f);
    
    glEnd();
    glFlush();

	//punto central

	 glBegin(GL_POINTS);
	 glPointSize(0.01);
	

	GLfloat angulo;
    int i;
   
    glBegin(GL_POINTS);
	for (i=0; i<360;i+=1)
	{
		angulo =i*M_PI/180.0f;//grados a radianes
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(2*cos(angulo),  2.5*sin(angulo), 0.0f);
	}
    
    glEnd();
    glFlush ();

	

	//Esquinas1

	glBegin(GL_POINTS);
	 glPointSize(0.01);
	

	GLfloat angulo2;
    int j;
   
    glBegin(GL_POINTS);
	for (j=270; j<360;j+=1)
	{
		angulo2 =j*M_PI/180.0f;//grados a radianes
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(1*cos(angulo2)-9,  1*sin(angulo2)+9, 0.0f);
	}
    
    glEnd();
    glFlush ();

	
	//esquina2
	
	glBegin(GL_POINTS);
	 glPointSize(0.01);
	 
   
    glBegin(GL_POINTS);
	for (j=180; j<270;j+=1)
	{
		angulo2 =j*M_PI/180.0f;//grados a radianes
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(1*cos(angulo2)+9,  1*sin(angulo2)+9, 0.0f);
	}
    
    glEnd();
    glFlush ();
	
	//esquina3
	
	glBegin(GL_POINTS);
	 glPointSize(0.01);
	 
   
    glBegin(GL_POINTS);
	for (j=0; j<90;j+=1)
	{
		angulo2 =j*M_PI/180.0f;//grados a radianes
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(1*cos(angulo2)-9,  1*sin(angulo2)-9, 0.0f);
	}
    
    glEnd();
    glFlush ();

	//esquina4
	
	glBegin(GL_POINTS);
	 glPointSize(0.01);
	 
   
    glBegin(GL_POINTS);
	for (j=90; j<180;j+=1)
	{
		angulo2 =j*M_PI/180.0f;//grados a radianes
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(1*cos(angulo2)+9,  1*sin(angulo2)-9, 0.0f);
	}
    
    glEnd();
    glFlush ();


	//medio circulo1
	
	glBegin(GL_POINTS);
	 glPointSize(0.01);
	 
   
    glBegin(GL_POINTS);
	for (j=270; j<450;j+=1)
	{
		angulo2 =j*M_PI/180.0f;//grados a radianes
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(1*cos(angulo2)-5,  2.5*sin(angulo2), 0.0f);
	}
    
    glEnd();
    glFlush ();
	
	
	//medio circulo2


	glBegin(GL_POINTS);
	 glPointSize(0.01);
	 
   
    glBegin(GL_POINTS);
	for (j=90; j<270;j+=1)
	{
		angulo2 =j*M_PI/180.0f;//grados a radianes
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(1*cos(angulo2)+5,  2.5*sin(angulo2), 0.0f);
	}
    
    glEnd();
    glFlush ();
    
    //puntos
    glPointSize(5);
    glBegin(GL_POINTS);
	

	glVertex3f(-6.0, 0.0, 0.0);
	glVertex3f(6.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	
	glEnd();
	glFlush();
	

}

 void init()
{
   glClearColor(0.0, 1.0, 0.0, 0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
   
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}

int main(int argc, char* argv[])
{

	glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);//funcion que inicializa glut
    glutInitWindowSize (800, 600);//funcion que indica el tamaño de la ventana
    glutInitWindowPosition (100, 100);//funcion que define la posicion de la ventana
    glutCreateWindow ("Ejemplo Puntos");//funcion que crea la ventana y define el nombre que tendra el ejecutable
    init ();//inicializa todos los metodos init creados
    glutDisplayFunc(display);//se llama la funciuon que muestra la ventana o el monitor
    glutMainLoop();//se llama a la funcion que muestra el dibujo
    return 0;//fin del programa reinicia el programa

}
