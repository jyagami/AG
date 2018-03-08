#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
  
  
    
     glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(1);
    glColor3f(1.0,0.0,0.0);
    
    GLfloat angulo, x, y;
    float i, j;
   
    glBegin(GL_POINTS);
	for (i=0; i<360;i=i+0.1)
	{
		angulo =i*M_PI/180.0f;//grados a radianes
		//glVertex3f(0.0, 0.0, 0.0);
		x =2*cos(3*angulo)*cos(angulo);
		y =2*cos(3*angulo)*sin(angulo);
		glVertex3f(x, y, 0.0f);
	}
    
   
	glEnd();
    glFlush ();
	
	
	
	
	
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-4.0, 4.0, -4.0, 4.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (650, 650);
    glutInitWindowPosition (550, 192);
    glutCreateWindow ("FIGURA X");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
