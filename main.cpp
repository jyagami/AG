#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

//Definimos variables
double rotate_z1=0;
double rotate_z2=0;
double rotate_z3=0;


//funcion circunferencia------
void circunferencia(void)
{
	
    glColor3f(0.0,0.0,0.0);//negro
    
    GLfloat angulo;
    float i, x, y, r;
  
    //Circulo del reloj 
	glPointSize(5);
	glBegin(GL_POINTS);
  for(i=0 ; i<(7*M_PI/2) ; i+=0.01)//circulo exterior
	{
		for(r=0.9 ;r<1; r+=0.01)
		{
		x = r*cos(i);
		y = r*sin(i);
		glColor3f(0.0,0.0,0.0);//negro
		glVertex2f(x,  y);
		}
	}
	glEnd();
	

}

//funcion puntos--------------
void puntos(void)
{
	//puntos (horas,  minutos)------
	
	glPointSize(40);
	glBegin(GL_POINTS);
	
	glVertex2f(0, 0.8);
	glVertex2f(-0.8, 0);
	glVertex2f(0, -0.8);
	glVertex2f(0.8, 0);
	
	
	glEnd();
	
	glLineWidth(20);
	glBegin(GL_LINES);
	
	
	glVertex2f(-2.8, 1.8);
	glVertex2f(-3.2, 2.2);
	
	glVertex2f(-2.8, -1.8);
	glVertex2f(-3.2, -2.2);
	
	glVertex2f(2.8, -1.8);
	glVertex2f(3.2, -2.2);
	
	glVertex2f(2.8, 1.8);
	glVertex2f(3.2, 2.2);
	
	glEnd();
	
	//-----
	glPointSize(20);
	glBegin(GL_POINTS);
	
	glVertex2f(-0.6, 0.4);
	glVertex2f(-0.6, -0.4);
	glVertex2f(0.6, -0.4);
	glVertex2f(0.6, 0.4);
	
	glVertex2f(-0.4, 0.6);
	glVertex2f(-0.4, -0.6);
	glVertex2f(0.4, -0.6);
	glVertex2f(0.4, 0.6);
	
	glEnd();
	
}

//funcion manecillas-minutos---
void manMin(float rot_z2)//recibe comoparametro los grados a rotar
{
	
	glRotatef( rot_z2, 0.0, 0.0, 1.0 );
	
    glColor3f(0.0,0.0,0.0);//negro
    
    glBegin(GL_POLYGON);
    
    glVertex2f(-0.05, 0);
    glVertex2f(-0.05, 0.65);
    glVertex2f(0.05, 0.65);
    glVertex2f(0.05, 0);
    
	glEnd();
	glFlush();
}


//funcion manecillas-horas---
void manHor(float rot_z1)//recibe comoparametro los grados a rotar
{
	glRotatef( rot_z1, 0.0, 0.0, 1.0 );
	
    glColor3f(0.0,0.0,0.0);//negro
    
    glBegin(GL_POLYGON);
    
    glVertex2f(0, -0.1);
    glVertex2f(0.5, -0.1);
    glVertex2f(0.5, 0.1);
    glVertex2f(0, 0.1);
    
	glEnd();
	glFlush();
	
	 
}


//funcion manecillas-horas---
void manSeg(float rot_z3)//recibe comoparametro los grados a rotar
{
	glRotatef( rot_z3, 0.0, 0.0, 1.0 );
    glColor3f(0.0,0.0,0.0);//negro
    
    glBegin(GL_POLYGON);
    
    glVertex2f(0.0, -0.02);
    glVertex2f(-0.65, -0.02);
    glVertex2f(-0.65, 0.02);
    glVertex2f(0, 0.02);
    
	glEnd();
	glFlush();
	
}

//dibujamos la figura
void display(void)
{
      glClearColor(1.0,1.0,1.0,1.0);
     //  Borrar pantalla 
    glClear(GL_COLOR_BUFFER_BIT);

    // Resetear transformaciones
    glLoadIdentity();
    // Rotar en el eje X,Y y Z
   
   
   
//Dibujamos la figura
    //llamamos a la circunferencia
    circunferencia();
	//llamamos a los puntos
	puntos();
	
	//LLamamos a las manecillas--
		//minutos
	manMin(rotate_z2);
	
		//horas
	manHor(rotate_z1);
	
		//segundos
	manSeg(rotate_z3);

}



// Función para controlar teclas normales del teclado.
void keyboard(unsigned char key, int x, int y)
{
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {
    case '1':
        rotate_z1 -= 2;
        rotate_z3 += 2;
        glFlush();
    
        break;
    case '2':
        rotate_z2 -= 2;
        rotate_z1 += 2;
        glFlush();
    
        break;
   
   case '3':
        rotate_z3 -= 2;
        glFlush();
    
        break;
   
   case '4':
        
        rotate_z3 = 330;
        rotate_z1 = 300;
        rotate_z2 = 0;
        
        
        
        glFlush();
    
        break;
   
    case 27:
        exit(0);			// exit
    }
   glutPostRedisplay();
}

void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (700, 700);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Figura 4");
    init ();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
   
    glutMainLoop();
    return 0;
}
