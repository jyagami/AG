#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

//variables
GLfloat tetX=350, tetY=-350;//variables para el traslado de la figura
int figAct;//parametro para determinar que figura se mostrara 
//variables para el menu
int static submenu_id, submenu_id1, submenu_id2, submenu_id3, submenu_id4; 
int static menu_id, menu_id1, menu_id2, menu_id3, menu_id4;

 
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
void tetera_Jade(float tX, float tY)
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
		
	glutSolidTeapot(100);
	glFlush();
    glutSwapBuffers();
 
 }
 void tetera_Obsidian(float tX, float tY)
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
		
	glutSolidTeapot(100);
	glFlush();
    glutSwapBuffers();
 
 }
 void tetera_Pearl(float tX, float tY)
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
		
	glutSolidTeapot(100);
	glFlush();
    glutSwapBuffers();
 }
 
  void tetera_Ruby(float tX, float tY)
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
		
	glutSolidTeapot(100);
	glFlush();
    glutSwapBuffers();
 }
  void tetera_Turquoise(float tX, float tY)
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
		
	glutSolidTeapot(100);
	glFlush();
    glutSwapBuffers();
 }
 void tetera_Bronce(float tX, float tY)
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
		
	glutSolidTeapot(100);
	glFlush();
    glutSwapBuffers();
 }
void tetera_Chrome(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.25, 0.25, 0.25};
	GLfloat mat_diffuse[] = { 0.04, 0.04, 0.04};
	GLfloat mat_specular[] = { 0.774597, 0.774597, 0.774597};
	GLfloat shine[] = {0.6};
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
void tetera_Copper(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.19125, 0.0735, 0.0225};
	GLfloat mat_diffuse[] = { 0.7038, 0.27048, 0.0828};
	GLfloat mat_specular[] = { 0.256777, 0.137622, 0.086014};
	GLfloat shine[] = {0.1};
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
 
void tetera_Gold(float tX, float tY)
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
		
	glutSolidTeapot(100);
	glFlush();
    glutSwapBuffers();
 }
  
void tetera_Silver(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.19225, 0.19225, 0.19225};
	GLfloat mat_diffuse[] = { 0.50754, 0.50754, 0.50754};
	GLfloat mat_specular[] = { 0.508273, 0.508273, 0.508273};
	GLfloat shine[] = {0.4};
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
void tetera_Black_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.01, 0.01, 0.01};
	GLfloat mat_specular[] = { 0.50, 0.50, 0.50};
	GLfloat shine[] = {0.25};
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
void tetera_Cyan_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.1, 0.06};
	GLfloat mat_diffuse[] = { 0.0, 0.50980392, 0.50980392};
	GLfloat mat_specular[] = { 0.50196078, 0.50196078, 0.50196078};
	GLfloat shine[] = {0.25};
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
void tetera_Green_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.1, 0.35, 0.1};
	GLfloat mat_specular[] = { 0.45, 0.55, 0.45};
	GLfloat shine[] = {0.25};
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
void tetera_Red_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.0, 0.0};
	GLfloat mat_specular[] = { 0.7, 0.6, 0.6};
	GLfloat shine[] = {0.25};
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
void tetera_White_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.55, 0.55, 0.55};
	GLfloat mat_specular[] = { 0.70, 0.70, 0.70};
	GLfloat shine[] = {0.25};
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
void tetera_Yellow_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.0};
	GLfloat mat_specular[] = { 0.60, 0.60, 0.50};
	GLfloat shine[] = {0.25};
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
void tetera_Black_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.02, 0.02, 0.02};
	GLfloat mat_diffuse[] = { 0.01, 0.01, 0.01};
	GLfloat mat_specular[] = { 0.4, 0.4, 0.4};
	GLfloat shine[] = {0.078125};
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
  void tetera_Cyan_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.05, 0.05};
	GLfloat mat_diffuse[] = { 0.4, 0.5, 0.5};
	GLfloat mat_specular[] = { 0.04, 0.4, 0.4};
	GLfloat shine[] = {0.078125};
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
 void tetera_Green_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.05, 0.0};
	GLfloat mat_diffuse[] = { 0.4, 0.5, 0.4};
	GLfloat mat_specular[] = { 0.04, 0.7, 0.04};
	GLfloat shine[] = {0.078125};
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
 void tetera_Red_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.4, 0.4};
	GLfloat mat_specular[] = { 0.7, 0.04, 0.04};
	GLfloat shine[] = {0.07812};
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
 void tetera_White_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.05, 0.05};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.5};
	GLfloat mat_specular[] = { 0.7, 0.7, 0.7};
	GLfloat shine[] = {0.07812};
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
 
 void tetera_Yellow_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.05, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.4};
	GLfloat mat_specular[] = { 0.7, 0.7, 0.04};
	GLfloat shine[] = {0.07812};
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
 
void esfera_Emerald(float tX, float tY)
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
	
		
	glutSolidSphere(100, 60.0, 60.0);
	glFlush();
    glutSwapBuffers();
 
 }
void esfera_Jade(float tX, float tY)
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
		
	glutSolidSphere(100, 60.0, 60.0);
	glFlush();
    glutSwapBuffers();
 
 }
 void esfera_Obsidian(float tX, float tY)
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
		
	glutSolidSphere(100, 60.0, 60.0);
	glFlush();
    glutSwapBuffers();
 
 }
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
 
  void esfera_Rubi(float tX, float tY)
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
		
	glutSolidSphere(100, 60.0, 60.0);
	glFlush();
    glutSwapBuffers();
 }
  void esfera_Turquoise(float tX, float tY)
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
		
	glutSolidSphere(100, 60.0, 60.0);
	glFlush();
    glutSwapBuffers();
 }
 void esfera_Bronce(float tX, float tY)
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
		
	glutSolidSphere(100, 60.0, 60.0);
	glFlush();
    glutSwapBuffers();
 }
void esfera_Chrome(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.25, 0.25, 0.25};
	GLfloat mat_diffuse[] = { 0.04, 0.04, 0.04};
	GLfloat mat_specular[] = { 0.774597, 0.774597, 0.774597};
	GLfloat shine[] = {0.6};
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
void esfera_Copper(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.19125, 0.0735, 0.0225};
	GLfloat mat_diffuse[] = { 0.7038, 0.27048, 0.0828};
	GLfloat mat_specular[] = { 0.256777, 0.137622, 0.086014};
	GLfloat shine[] = {0.1};
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
 
void esfera_Gold(float tX, float tY)
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
		
	glutSolidSphere(100, 60.0, 60.0);
	glFlush();
    glutSwapBuffers();
 }
  
void esfera_Silver(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.19225, 0.19225, 0.19225};
	GLfloat mat_diffuse[] = { 0.50754, 0.50754, 0.50754};
	GLfloat mat_specular[] = { 0.508273, 0.508273, 0.508273};
	GLfloat shine[] = {0.4};
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
void esfera_Black_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.01, 0.01, 0.01};
	GLfloat mat_specular[] = { 0.50, 0.50, 0.50};
	GLfloat shine[] = {0.25};
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
void esfera_Cyan_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.1, 0.06};
	GLfloat mat_diffuse[] = { 0.0, 0.50980392, 0.50980392};
	GLfloat mat_specular[] = { 0.50196078, 0.50196078, 0.50196078};
	GLfloat shine[] = {0.25};
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
void esfera_Green_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.1, 0.35, 0.1};
	GLfloat mat_specular[] = { 0.45, 0.55, 0.45};
	GLfloat shine[] = {0.25};
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
void esfera_Red_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.0, 0.0};
	GLfloat mat_specular[] = { 0.7, 0.6, 0.6};
	GLfloat shine[] = {0.25};
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
void esfera_White_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.55, 0.55, 0.55};
	GLfloat mat_specular[] = { 0.70, 0.70, 0.70};
	GLfloat shine[] = {0.25};
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
void esfera_Yellow_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.0};
	GLfloat mat_specular[] = { 0.60, 0.60, 0.50};
	GLfloat shine[] = {0.25};
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
void esfera_Black_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.02, 0.02, 0.02};
	GLfloat mat_diffuse[] = { 0.01, 0.01, 0.01};
	GLfloat mat_specular[] = { 0.4, 0.4, 0.4};
	GLfloat shine[] = {0.078125};
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
  void esfera_Cyan_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.05, 0.05};
	GLfloat mat_diffuse[] = { 0.4, 0.5, 0.5};
	GLfloat mat_specular[] = { 0.04, 0.4, 0.4};
	GLfloat shine[] = {0.078125};
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
 void esfera_Green_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.05, 0.0};
	GLfloat mat_diffuse[] = { 0.4, 0.5, 0.4};
	GLfloat mat_specular[] = { 0.04, 0.7, 0.04};
	GLfloat shine[] = {0.078125};
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
 void esfera_Red_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.4, 0.4};
	GLfloat mat_specular[] = { 0.7, 0.04, 0.04};
	GLfloat shine[] = {0.07812};
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
 void esfera_White_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.05, 0.05};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.5};
	GLfloat mat_specular[] = { 0.7, 0.7, 0.7};
	GLfloat shine[] = {0.07812};
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
 
 void esfera_Yellow_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.05, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.4};
	GLfloat mat_specular[] = { 0.7, 0.7, 0.04};
	GLfloat shine[] = {0.07812};
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


void cubo_Emerald(float tX, float tY)
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
	
		
	glutSolidCube(95.0f);//Cubo
	glFlush();
    glutSwapBuffers();
 
 }
void cubo_Jade(float tX, float tY)
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
		
	glutSolidCube(95.0f);//Cubo
	glFlush();
    glutSwapBuffers();
 
 }
 void cubo_Obsidian(float tX, float tY)
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
		
	glutSolidCube(95.0f);//Cubo
	glFlush();
    glutSwapBuffers();
 
 }
 void cubo_Pearl(float tX, float tY)
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
		
	glutSolidCube(95.0f);//Cubo
	glFlush();
    glutSwapBuffers();
 }
 
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
  void cubo_Turquoise(float tX, float tY)
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
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
 void cubo_Bronce(float tX, float tY)
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
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
void cubo_Chrome(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.25, 0.25, 0.25};
	GLfloat mat_diffuse[] = { 0.04, 0.04, 0.04};
	GLfloat mat_specular[] = { 0.774597, 0.774597, 0.774597};
	GLfloat shine[] = {0.6};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
void cubo_Copper(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.19125, 0.0735, 0.0225};
	GLfloat mat_diffuse[] = { 0.7038, 0.27048, 0.0828};
	GLfloat mat_specular[] = { 0.256777, 0.137622, 0.086014};
	GLfloat shine[] = {0.1};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
 
void cubo_Gold(float tX, float tY)
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
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
  
void cubo_Silver(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.19225, 0.19225, 0.19225};
	GLfloat mat_diffuse[] = { 0.50754, 0.50754, 0.50754};
	GLfloat mat_specular[] = { 0.508273, 0.508273, 0.508273};
	GLfloat shine[] = {0.4};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
void cubo_Black_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.01, 0.01, 0.01};
	GLfloat mat_specular[] = { 0.50, 0.50, 0.50};
	GLfloat shine[] = {0.25};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
void cubo_Cyan_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.1, 0.06};
	GLfloat mat_diffuse[] = { 0.0, 0.50980392, 0.50980392};
	GLfloat mat_specular[] = { 0.50196078, 0.50196078, 0.50196078};
	GLfloat shine[] = {0.25};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
void cubo_Green_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.1, 0.35, 0.1};
	GLfloat mat_specular[] = { 0.45, 0.55, 0.45};
	GLfloat shine[] = {0.25};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
void cubo_Red_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.0, 0.0};
	GLfloat mat_specular[] = { 0.7, 0.6, 0.6};
	GLfloat shine[] = {0.25};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
void cubo_White_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.55, 0.55, 0.55};
	GLfloat mat_specular[] = { 0.70, 0.70, 0.70};
	GLfloat shine[] = {0.25};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
void cubo_Yellow_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.0};
	GLfloat mat_specular[] = { 0.60, 0.60, 0.50};
	GLfloat shine[] = {0.25};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
void cubo_Black_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.02, 0.02, 0.02};
	GLfloat mat_diffuse[] = { 0.01, 0.01, 0.01};
	GLfloat mat_specular[] = { 0.4, 0.4, 0.4};
	GLfloat shine[] = {0.078125};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
  void cubo_Cyan_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.05, 0.05};
	GLfloat mat_diffuse[] = { 0.4, 0.5, 0.5};
	GLfloat mat_specular[] = { 0.04, 0.4, 0.4};
	GLfloat shine[] = {0.078125};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
 void cubo_Green_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.05, 0.0};
	GLfloat mat_diffuse[] = { 0.4, 0.5, 0.4};
	GLfloat mat_specular[] = { 0.04, 0.7, 0.04};
	GLfloat shine[] = {0.078125};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
 void cubo_Red_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.4, 0.4};
	GLfloat mat_specular[] = { 0.7, 0.04, 0.04};
	GLfloat shine[] = {0.07812};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
 void cubo_White_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.05, 0.05};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.5};
	GLfloat mat_specular[] = { 0.7, 0.7, 0.7};
	GLfloat shine[] = {0.07812};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }
 
 void cubo_Yellow_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.05, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.4};
	GLfloat mat_specular[] = { 0.7, 0.7, 0.04};
	GLfloat shine[] = {0.07812};
	//le aplico el material
    glPushMatrix();
	//setMaterial
   	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
		
	glutSolidCube(95.0f);//Cubo;
	glFlush();
    glutSwapBuffers();
 }


//funcion toroide_material==========================================================================================================
  

void toro_Emerald(float tX, float tY)
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
	
		
	glutSolidTorus(50, 100.0, 50, 50);//Dona xd
	glFlush();
    glutSwapBuffers();
 
 }
void toro_Jade(float tX, float tY)
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
		
	glutSolidTorus(50, 100.0, 50, 50);//Dona xd
	glFlush();
    glutSwapBuffers();
 
 }
 void toro_Obsidian(float tX, float tY)
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
		
	glutSolidTorus(50, 100.0, 50, 50);//Dona xd
	glFlush();
    glutSwapBuffers();
 
 }
 void toro_Pearl(float tX, float tY)
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
		
	glutSolidTorus(50, 100.0, 50, 50);//Dona xd
	glFlush();
    glutSwapBuffers();
 }
 
  void toro_Rubi(float tX, float tY)
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
		
	glutSolidTorus(50, 100.0, 50, 50);//Dona xd
	glFlush();
    glutSwapBuffers();
 }
  void toro_Turquoise(float tX, float tY)
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
		
	glutSolidTorus(50, 100.0, 50, 50);//Dona xd
	glFlush();
    glutSwapBuffers();
 }
 void toro_Bronce(float tX, float tY)
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
		
	glutSolidTorus(50, 100.0, 50, 50);//Dona xd
	glFlush();
    glutSwapBuffers();
 }
void toro_Chrome(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.25, 0.25, 0.25};
	GLfloat mat_diffuse[] = { 0.04, 0.04, 0.04};
	GLfloat mat_specular[] = { 0.774597, 0.774597, 0.774597};
	GLfloat shine[] = {0.6};
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
void toro_Copper(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.19125, 0.0735, 0.0225};
	GLfloat mat_diffuse[] = { 0.7038, 0.27048, 0.0828};
	GLfloat mat_specular[] = { 0.256777, 0.137622, 0.086014};
	GLfloat shine[] = {0.1};
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
  
void toro_Silver(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.19225, 0.19225, 0.19225};
	GLfloat mat_diffuse[] = { 0.50754, 0.50754, 0.50754};
	GLfloat mat_specular[] = { 0.508273, 0.508273, 0.508273};
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
void toro_Black_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.01, 0.01, 0.01};
	GLfloat mat_specular[] = { 0.50, 0.50, 0.50};
	GLfloat shine[] = {0.25};
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
void toro_Cyan_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.1, 0.06};
	GLfloat mat_diffuse[] = { 0.0, 0.50980392, 0.50980392};
	GLfloat mat_specular[] = { 0.50196078, 0.50196078, 0.50196078};
	GLfloat shine[] = {0.25};
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
void toro_Green_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.1, 0.35, 0.1};
	GLfloat mat_specular[] = { 0.45, 0.55, 0.45};
	GLfloat shine[] = {0.25};
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
void toro_Red_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.0, 0.0};
	GLfloat mat_specular[] = { 0.7, 0.6, 0.6};
	GLfloat shine[] = {0.25};
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
void toro_White_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.55, 0.55, 0.55};
	GLfloat mat_specular[] = { 0.70, 0.70, 0.70};
	GLfloat shine[] = {0.25};
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
void toro_Yellow_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.0};
	GLfloat mat_specular[] = { 0.60, 0.60, 0.50};
	GLfloat shine[] = {0.25};
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
void toro_Black_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.02, 0.02, 0.02};
	GLfloat mat_diffuse[] = { 0.01, 0.01, 0.01};
	GLfloat mat_specular[] = { 0.4, 0.4, 0.4};
	GLfloat shine[] = {0.078125};
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
  void toro_Cyan_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.05, 0.05};
	GLfloat mat_diffuse[] = { 0.4, 0.5, 0.5};
	GLfloat mat_specular[] = { 0.04, 0.4, 0.4};
	GLfloat shine[] = {0.078125};
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
 void toro_Green_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.05, 0.0};
	GLfloat mat_diffuse[] = { 0.4, 0.5, 0.4};
	GLfloat mat_specular[] = { 0.04, 0.7, 0.04};
	GLfloat shine[] = {0.078125};
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
 void toro_Red_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.4, 0.4};
	GLfloat mat_specular[] = { 0.7, 0.04, 0.04};
	GLfloat shine[] = {0.07812};
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
 void toro_White_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.05, 0.05};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.5};
	GLfloat mat_specular[] = { 0.7, 0.7, 0.7};
	GLfloat shine[] = {0.07812};
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
 
 void toro_Yellow_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.05, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.4};
	GLfloat mat_specular[] = { 0.7, 0.7, 0.04};
	GLfloat shine[] = {0.07812};
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
  
  
void cono_Emerald(float tX, float tY)
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
	
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(80, 150, 50, 50);//Cono
	glFlush();
    glutSwapBuffers();
 
 }
void cono_Jade(float tX, float tY)
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
		
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(80, 150, 50, 50);//Cono
	glFlush();
    glutSwapBuffers();
 
 }
 void cono_Obsidian(float tX, float tY)
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
		
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(80, 150, 50, 50);//Cono
	glFlush();
    glutSwapBuffers();
 
 }
 void cono_Pearl(float tX, float tY)
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
		
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(80, 150, 50, 50);//Cono
	glFlush();
    glutSwapBuffers();
 }
 
  void cono_Rubi(float tX, float tY)
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
		
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(80, 150, 50, 50);//Cono
	glFlush();
    glutSwapBuffers();
 }
  void cono_Turquoise(float tX, float tY)
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
		
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(80, 150, 50, 50);//Cono
	glFlush();
    glutSwapBuffers();
 }
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
void cono_Chrome(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.25, 0.25, 0.25};
	GLfloat mat_diffuse[] = { 0.04, 0.04, 0.04};
	GLfloat mat_specular[] = { 0.774597, 0.774597, 0.774597};
	GLfloat shine[] = {0.6};
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
void cono_Copper(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.19125, 0.0735, 0.0225};
	GLfloat mat_diffuse[] = { 0.7038, 0.27048, 0.0828};
	GLfloat mat_specular[] = { 0.256777, 0.137622, 0.086014};
	GLfloat shine[] = {0.1};
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
 
void cono_Gold(float tX, float tY)
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
		
	glRotatef(-90, 1, 0, 0);
	glutSolidCone(80, 150, 50, 50);//Cono
	glFlush();
    glutSwapBuffers();
 }
  
void cono_Silver(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.19225, 0.19225, 0.19225};
	GLfloat mat_diffuse[] = { 0.50754, 0.50754, 0.50754};
	GLfloat mat_specular[] = { 0.508273, 0.508273, 0.508273};
	GLfloat shine[] = {0.4};
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
void cono_Black_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.01, 0.01, 0.01};
	GLfloat mat_specular[] = { 0.50, 0.50, 0.50};
	GLfloat shine[] = {0.25};
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
void cono_Cyan_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.1, 0.06};
	GLfloat mat_diffuse[] = { 0.0, 0.50980392, 0.50980392};
	GLfloat mat_specular[] = { 0.50196078, 0.50196078, 0.50196078};
	GLfloat shine[] = {0.25};
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
void cono_Green_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.1, 0.35, 0.1};
	GLfloat mat_specular[] = { 0.45, 0.55, 0.45};
	GLfloat shine[] = {0.25};
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
void cono_Red_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.0, 0.0};
	GLfloat mat_specular[] = { 0.7, 0.6, 0.6};
	GLfloat shine[] = {0.25};
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
void cono_White_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.55, 0.55, 0.55};
	GLfloat mat_specular[] = { 0.70, 0.70, 0.70};
	GLfloat shine[] = {0.25};
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
void cono_Yellow_plastic(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.0};
	GLfloat mat_specular[] = { 0.60, 0.60, 0.50};
	GLfloat shine[] = {0.25};
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
void cono_Black_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.02, 0.02, 0.02};
	GLfloat mat_diffuse[] = { 0.01, 0.01, 0.01};
	GLfloat mat_specular[] = { 0.4, 0.4, 0.4};
	GLfloat shine[] = {0.078125};
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
  void cono_Cyan_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.05, 0.05};
	GLfloat mat_diffuse[] = { 0.4, 0.5, 0.5};
	GLfloat mat_specular[] = { 0.04, 0.4, 0.4};
	GLfloat shine[] = {0.078125};
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
 void cono_Green_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.0, 0.05, 0.0};
	GLfloat mat_diffuse[] = { 0.4, 0.5, 0.4};
	GLfloat mat_specular[] = { 0.04, 0.7, 0.04};
	GLfloat shine[] = {0.078125};
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
 void cono_Red_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.0, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.4, 0.4};
	GLfloat mat_specular[] = { 0.7, 0.04, 0.04};
	GLfloat shine[] = {0.07812};
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
 void cono_White_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.05, 0.05};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.5};
	GLfloat mat_specular[] = { 0.7, 0.7, 0.7};
	GLfloat shine[] = {0.07812};
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
 
 void cono_Yellow_rubber(float tX, float tY)
 {
	glTranslatef(tX, tY, 0.0); 	// Transladar en los 3 ejes
	//material
	GLfloat mat_ambient[] = { 0.05, 0.05, 0.0};
	GLfloat mat_diffuse[] = { 0.5, 0.5, 0.4};
	GLfloat mat_specular[] = { 0.7, 0.7, 0.04};
	GLfloat shine[] = {0.07812};
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
//=========================================================================================
 
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
		tetera_Jade(tetX, tetY);
	}
	else if(fig==3)
	{
		tetera_Obsidian(tetX, tetY);
	}
	else if(fig==4)
	{
		tetera_Pearl(tetX, tetY);
	}
	else if(fig==5)
	{
		tetera_Ruby(tetX, tetY);
	}
	else if(fig==6)
	{
		tetera_Turquoise(tetX, tetY);
	}
	else if(fig==7)
	{
		tetera_Bronce(tetX, tetY);
	}
	else if(fig==8)
	{
		tetera_Chrome(tetX, tetY);
	}
	else if(fig==9)
	{
		tetera_Copper(tetX, tetY);
	}
	else if(fig==10)
	{
		tetera_Gold(tetX, tetY);
	}
	else if(fig==11)
	{
		tetera_Silver(tetX, tetY);
	}
	else if(fig==12)
	{
		tetera_Black_plastic(tetX, tetY);
	}
	else if(fig==13)
	{
		tetera_Cyan_plastic(tetX, tetY);
	}
	else if(fig==14)
	{
		tetera_Green_plastic(tetX, tetY);
	}
	else if(fig==15)
	{
		tetera_Red_plastic(tetX, tetY);
	}
	else if(fig==16)
	{
		tetera_White_plastic(tetX, tetY);
	}
	else if(fig==17)
	{
		tetera_Yellow_plastic(tetX, tetY);
	}
	else if(fig==18)
	{
		tetera_Black_rubber(tetX, tetY);
	}
	else if(fig==19)
	{
		tetera_Cyan_rubber(tetX, tetY);
	}
	else if(fig==20)
	{
		tetera_Green_rubber(tetX, tetY);
	}
	else if(fig==21)
	{
		tetera_Red_rubber(tetX, tetY);
	}
	else if(fig==22)
	{
		tetera_White_rubber(tetX, tetY);
	}
	else if(fig==23)
	{
		tetera_Yellow_rubber(tetX, tetY);
	}
	//materiales para ESFERA
	else if(fig==24)
	{
		esfera_Emerald(tetX, tetY);
	}
	else if(fig==25)
	{
		esfera_Jade(tetX, tetY);
	}
	else if(fig==26)
	{
		esfera_Obsidian(tetX, tetY);
	}
	else if(fig==27)
	{
		esfera_Pearl(tetX, tetY);
	}
	else if(fig==28)
	{
		esfera_Rubi(tetX, tetY);
	}
	else if(fig==29)
	{
		esfera_Turquoise(tetX, tetY);
	}
	else if(fig==30)
	{
		esfera_Bronce(tetX, tetY);
	}
	else if(fig==31)
	{
		esfera_Chrome(tetX, tetY);
	}
	else if(fig==32)
	{
		esfera_Copper(tetX, tetY);
	}
	else if(fig==33)
	{
		esfera_Gold(tetX, tetY);
	}
	else if(fig==34)
	{
		esfera_Silver(tetX, tetY);
	}
	else if(fig==35)
	{
		esfera_Black_plastic(tetX, tetY);
	}
	else if(fig==36)
	{
		esfera_Cyan_plastic(tetX, tetY);
	}
	else if(fig==37)
	{
		esfera_Green_plastic(tetX, tetY);
	}
	else if(fig==38)
	{
		esfera_Red_plastic(tetX, tetY);
	}
	else if(fig==39)
	{
		esfera_White_plastic(tetX, tetY);
	}
	else if(fig==40)
	{
		esfera_Yellow_plastic(tetX, tetY);
	}	
	else if(fig==41)
	{
		esfera_Black_rubber(tetX, tetY);
	}
	else if(fig==42)
	{
		esfera_Cyan_rubber(tetX, tetY);
	}
	else if(fig==43)
	{
		esfera_Green_rubber(tetX, tetY);
	}
	else if(fig==44)
	{
		esfera_Red_rubber(tetX, tetY);
	}
	else if(fig==45)
	{
		esfera_White_rubber(tetX, tetY);
	}
	else if(fig==46)
	{
		esfera_Yellow_rubber(tetX, tetY);
	}
	//Materiales para CUBO
	else if(fig==47)
	{
		cubo_Emerald(tetX, tetY);
	}
	else if(fig==48)
	{
		cubo_Jade(tetX, tetY);
	}
	else if(fig==49)
	{
		cubo_Obsidian(tetX, tetY);
	}
	else if(fig==50)
	{
		cubo_Pearl(tetX, tetY);
	}
	else if(fig==51)
	{
		cubo_Rubi(tetX, tetY);
	}
	else if(fig==52)
	{
		cubo_Turquoise(tetX, tetY);
	}
	else if(fig==53)
	{
		cubo_Bronce(tetX, tetY);
	}
	else if(fig==54)
	{
		cubo_Chrome(tetX, tetY);
	}
	else if(fig==55)
	{
		cubo_Copper(tetX, tetY);
	}
	else if(fig==56)
	{
		cubo_Gold(tetX, tetY);
	}
	else if(fig==57)
	{
		cubo_Silver(tetX, tetY);
	}
	else if(fig==58)
	{
		cubo_Black_plastic(tetX, tetY);
	}
	else if(fig==59)
	{
		cubo_Cyan_plastic(tetX, tetY);
	}
	else if(fig==60)
	{
		cubo_Green_plastic(tetX, tetY);
	}
	else if(fig==61)
	{
		cubo_Red_plastic(tetX, tetY);
	}
	else if(fig==62)
	{
		cubo_White_plastic(tetX, tetY);
	}
	else if(fig==63)
	{
		cubo_Yellow_plastic(tetX, tetY);
	}
	else if(fig==64)
	{
		cubo_Black_rubber(tetX, tetY);
	}
	else if(fig==65)
	{
		cubo_Cyan_rubber(tetX, tetY);
	}
	else if(fig==66)
	{
		cubo_Green_rubber(tetX, tetY);
	}
	else if(fig==67)
	{
		cubo_Red_rubber(tetX, tetY);
	}
	else if(fig==68)
	{
		cubo_White_rubber(tetX, tetY);
	}
	else if(fig==69)
	{
		cubo_Yellow_rubber(tetX, tetY);
	}
	//materiales para TOROIDE
	else if(fig==70)
	{
		toro_Emerald(tetX, tetY);
	}
	else if(fig==71)
	{
		toro_Jade(tetX, tetY);
	}
	else if(fig==72)
	{
		toro_Obsidian(tetX, tetY);
	}
	else if(fig==73)
	{
		toro_Pearl(tetX, tetY);
	}
	else if(fig==74)
	{
		toro_Rubi(tetX, tetY);
	}
	else if(fig==75)
	{
		toro_Turquoise(tetX, tetY);
	}
	else if(fig==76)
	{
		toro_Bronce(tetX, tetY);
	}
	else if(fig==77)
	{
		toro_Chrome(tetX, tetY);
	}
	else if(fig==78)
	{
		toro_Copper(tetX, tetY);
	}
	else if(fig==79)
	{
		toro_Gold(tetX, tetY);
	}
	else if(fig==80)
	{
		toro_Silver(tetX, tetY);
	}
	else if(fig==81)
	{
		toro_Black_plastic(tetX, tetY);
	}
	else if(fig==82)
	{
		toro_Cyan_plastic(tetX, tetY);
	}
	else if(fig==83)
	{
		toro_Green_plastic(tetX, tetY);
	}
	else if(fig==84)
	{
		toro_Red_plastic(tetX, tetY);
	}
	else if(fig==85)
	{
		toro_White_plastic(tetX, tetY);
	}
	else if(fig==86)
	{
		toro_Yellow_plastic(tetX, tetY);
	}
	else if(fig==87)
	{
		toro_Black_rubber(tetX, tetY);
	}
	else if(fig==88)
	{
		toro_Cyan_rubber(tetX, tetY);
	}
	else if(fig==89)
	{
		toro_Green_rubber(tetX, tetY);
	}
	else if(fig==90)
	{
		toro_Red_rubber(tetX, tetY);
	}
	else if(fig==91)
	{
		toro_White_rubber(tetX, tetY);
	}
	else if(fig==92)
	{
		toro_Yellow_rubber(tetX, tetY);
	}
	//materiales para el cono
	else if(fig==93)
	{
		cono_Emerald(tetX, tetY);
	}
	else if(fig==94)
	{
		cono_Jade(tetX, tetY);
	}
	else if(fig==95)
	{
		cono_Obsidian(tetX, tetY);
	}
	else if(fig==96)
	{
		cono_Pearl(tetX, tetY);
	}
	else if(fig==97)
	{
		cono_Rubi(tetX, tetY);
	}
	else if(fig==98)
	{
		cono_Turquoise(tetX, tetY);
	}
	else if(fig==99)
	{
		cono_Bronce(tetX, tetY);
	}
	else if(fig==100)
	{
		cono_Chrome(tetX, tetY);
	}
	else if(fig==101)
	{
		cono_Copper(tetX, tetY);
	}
	else if(fig==102)
	{
		cono_Gold(tetX, tetY);
	}
	else if(fig==103)
	{
		cono_Silver(tetX, tetY);
	}
	else if(fig==104)
	{
		cono_Black_plastic(tetX, tetY);
	}
	else if(fig==105)
	{
		cono_Cyan_plastic(tetX, tetY);
	}
	else if(fig==106)
	{
		cono_Green_plastic(tetX, tetY);
	}
	else if(fig==107)
	{
		cono_Red_plastic(tetX, tetY);
	}
	else if(fig==108)
	{
		cono_White_plastic(tetX, tetY);
	}
	else if(fig==109)
	{
		cono_Yellow_plastic(tetX, tetY);
	}
	else if(fig==110)
	{
		cono_Black_rubber(tetX, tetY);
	}
	else if(fig==111)
	{
		cono_Cyan_rubber(tetX, tetY);
	}
	else if(fig==112)
	{
		cono_Green_rubber(tetX, tetY);
	}
	else if(fig==113)
	{
		cono_Red_rubber(tetX, tetY);
	}
	else if(fig==114)
	{
		cono_White_rubber(tetX, tetY);
	}
	else if(fig==115)
	{
		cono_Yellow_rubber(tetX, tetY);
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
    case 9:
    figAct=9;
        break;
    case 10:
    figAct=10;
        break;
    case 11:
    figAct=11;
        break;
    case 12:
    figAct=12;
        break;
    case 13:
    figAct=13;
        break;
    case 14:
    figAct=14;
        break;
    case 15:
    figAct=15;
        break;
    case 16:
    figAct=16;
        break;
    case 17:
    figAct=17;
        break;
    case 18:
    figAct=18;
        break;
    case 19:
    figAct=19;
        break;
    case 20:
    figAct=20;
        break;
    case 21:
    figAct=21;
        break;
    case 22:
    figAct=22;
        break;
    case 23:
    figAct=23;
        break;
    case 24:
    figAct=24;
        break;
    case 25:
    figAct=25;
        break;
    case 26:
    figAct=26;
        break;
    case 27:
    figAct=27;
        break;
    case 28:
    figAct=28;
        break;
    case 29:
    figAct=29;
        break;
    case 30:
    figAct=30;
        break;
    case 31:
    figAct=31;
        break;
    case 32:
    figAct=32;
        break;
    case 33:
    figAct=33;
        break;
    case 34:
    figAct=34;
        break;
    case 35:
    figAct=35;
        break;
    case 36:
    figAct=36;
        break;
    case 37:
    figAct=37;
        break;
    case 38:
    figAct=38;
        break;
    case 39:
    figAct=39;
        break;
    case 40:
    figAct=40;
        break;
    case 41:
    figAct=41;
        break;
    case 42:
    figAct=42;
        break;
    case 43:
    figAct=43;
        break;
    case 44:
    figAct=44;
        break;
    case 45:
    figAct=45;
        break;
    case 46:
    figAct=46;
        break;
    case 47:
    figAct=47;
        break;
    case 48:
    figAct=48;
        break;
    case 49:
    figAct=49;
        break;
    case 50:
    figAct=50;
        break;
    case 51:
    figAct=51;
        break;
    case 52:
    figAct=52;
        break;
    case 53:
    figAct=53;
        break;
    case 54:
    figAct=54;
        break;
    case 55:
    figAct=55;
        break;
    case 56:
    figAct=56;
        break;
    case 57:
    figAct=57;
        break;
    case 58:
    figAct=58;
        break;
    case 59:
    figAct=59;
        break;
    case 60:
    figAct=60;
        break;
    case 61:
    figAct=61;
        break;
    case 62:
    figAct=62;
        break;
    case 63:
    figAct=63;
        break;
    case 64:
    figAct=64;
        break;
    case 65:
    figAct=65;
        break;
    case 66:
    figAct=66;
        break;
    case 67:
    figAct=67;
        break;
    case 68:
    figAct=68;
        break;
    case 69:
    figAct=69;
        break;
    case 70:
    figAct=70;
        break;
    case 71:
    figAct=71;
        break;
    case 72:
    figAct=72;
        break;
    case 73:
    figAct=73;
        break;
    case 74:
    figAct=74;
        break;
    case 75:
    figAct=75;
        break;
    case 76:
    figAct=76;
        break;
    case 77:
    figAct=77;
        break;
    case 78:
    figAct=78;
        break;
    case 79:
    figAct=79;
        break;
    case 80:
    figAct=80;
        break;
    case 81:
    figAct=81;
        break;
    case 82:
    figAct=82;
        break;
    case 83:
    figAct=83;
        break;
    case 84:
    figAct=84;
        break;
    case 85:
    figAct=85;
        break;
    case 86:
    figAct=86;
        break;
    case 87:
    figAct=87;
        break;
    case 88:
    figAct=88;
        break;
    case 89:
    figAct=89;
        break;
    case 90:
    figAct=90;
        break;
    case 91:
    figAct=91;
        break;
    case 92:
    figAct=92;
        break;
    case 93:
    figAct=93;
        break;
    case 94:
    figAct=94;
        break;
    case 95:
    figAct=95;
        break;
    case 96:
    figAct=96;
        break;
    case 97:
    figAct=97;
        break;
    case 98:
    figAct=98;
        break;
    case 99:
    figAct=99;
        break;
    case 100:
    figAct=100;
        break;
    case 101:
    figAct=101;
        break;
    case 102:
    figAct=102;
        break;
    case 103:
    figAct=103;
        break;
    case 104:
    figAct=104;
        break;
    case 105:
    figAct=105;
        break;
    case 106:
    figAct=106;
        break;
    case 107:
    figAct=107;
        break;
    case 108:
    figAct=108;
        break;
    case 109:
    figAct=109;
        break;
    case 110:
    figAct=110;
        break;
    case 111:
    figAct=111;
        break;
    case 112:
    figAct=112;
        break;
    case 113:
    figAct=113;
        break;
    case 114:
    figAct=114;
        break;
    case 115:
    figAct=115;
        break;
    case 116:
    figAct=116;
        break;
    case 117:
    figAct=117;
        break;
    case 118:
    figAct=118;
        break;
    case 119:
    figAct=119;
        break;
    case 120:
    figAct=120;
        break;
    case 121:
    figAct=121;
        break;
    case 122:
    figAct=122;
        break;
    case 123:
    figAct=123;
        break;
    
    
    case 124 :
    exit(0);
        break;
    }
    glutPostRedisplay();
 
}    
	
	//Llamamos a la funcion menu y le añadimos contenido
void createMenu(void){     
	
	//Sub-menus-----------
	//TETERA
	submenu_id = glutCreateMenu(menu);
    glutAddMenuEntry("Esmeralda", 1);
    glutAddMenuEntry("Jade", 2);
    glutAddMenuEntry("Obsidia", 3);
    glutAddMenuEntry("Pearl", 4);
    glutAddMenuEntry("ruby", 5);
    glutAddMenuEntry("turquoise", 6);
    glutAddMenuEntry("bronze", 7);
    glutAddMenuEntry("chrome", 8);
    glutAddMenuEntry("copper", 9);
    glutAddMenuEntry("gold", 10);
    glutAddMenuEntry("silver", 11);
    glutAddMenuEntry("black plastic", 12);
    glutAddMenuEntry("cyan plastic", 13);
    glutAddMenuEntry("green plastic", 14);
    glutAddMenuEntry("red plastic", 15);
    glutAddMenuEntry("white plastic", 16);
    glutAddMenuEntry("yellow plastic", 17);
    glutAddMenuEntry("black rubber", 18);
    glutAddMenuEntry("cyan rubber", 19);
    glutAddMenuEntry("green rubber", 20);
    glutAddMenuEntry("red rubber", 21);
    glutAddMenuEntry("white rubber", 22);
    glutAddMenuEntry("yellow rubber", 23);
    menu_id = glutCreateMenu(menu);
   
	//ESFERA
	submenu_id1 = glutCreateMenu(menu);
    glutAddMenuEntry("Esmeralda", 24);
    glutAddMenuEntry("Jade", 25);
    glutAddMenuEntry("Obsidia", 26);
    glutAddMenuEntry("Pearl", 27);
    glutAddMenuEntry("ruby", 28);
    glutAddMenuEntry("turquoise", 29);
    glutAddMenuEntry("bronze", 30);
    glutAddMenuEntry("chrome", 31);
    glutAddMenuEntry("copper", 32);
    glutAddMenuEntry("gold", 33);
    glutAddMenuEntry("silver", 34);
    glutAddMenuEntry("black plastic", 35);
    glutAddMenuEntry("cyan plastic", 36);
    glutAddMenuEntry("green plastic", 37);
    glutAddMenuEntry("red plastic", 38);
    glutAddMenuEntry("white plastic", 39);
    glutAddMenuEntry("yellow plastic", 40);
    glutAddMenuEntry("black rubber", 41);
    glutAddMenuEntry("cyan rubber", 42);
    glutAddMenuEntry("green rubber", 43);
    glutAddMenuEntry("red rubber", 44);
    glutAddMenuEntry("white rubber", 45);
    glutAddMenuEntry("yellow rubber", 46);
    menu_id1 = glutCreateMenu(menu);
   
	//CUBO
	submenu_id2 = glutCreateMenu(menu);
    glutAddMenuEntry("Esmeralda", 47);
    glutAddMenuEntry("Jade", 48);
    glutAddMenuEntry("Obsidia", 49);
    glutAddMenuEntry("Pearl", 50);
    glutAddMenuEntry("ruby", 51);
    glutAddMenuEntry("turquoise", 52);
    glutAddMenuEntry("bronze", 53);
    glutAddMenuEntry("chrome", 54);
    glutAddMenuEntry("copper", 55);
    glutAddMenuEntry("gold", 56);
    glutAddMenuEntry("silver", 57);
    glutAddMenuEntry("black plastic", 58);
    glutAddMenuEntry("cyan plastic", 59);
    glutAddMenuEntry("green plastic", 60);
    glutAddMenuEntry("red plastic", 61);
    glutAddMenuEntry("white plastic", 62);
    glutAddMenuEntry("yellow plastic", 63);
    glutAddMenuEntry("black rubber", 64);
    glutAddMenuEntry("cyan rubber", 65);
    glutAddMenuEntry("green rubber", 66);
    glutAddMenuEntry("red rubber", 67);
    glutAddMenuEntry("white rubber", 68);
    glutAddMenuEntry("yellow rubber", 69);
    menu_id2 = glutCreateMenu(menu);
   
   //TOROIDE
	submenu_id3 = glutCreateMenu(menu);
    glutAddMenuEntry("Esmeralda", 70);
    glutAddMenuEntry("Jade", 71);
    glutAddMenuEntry("Obsidia", 72);
    glutAddMenuEntry("Pearl", 73);
    glutAddMenuEntry("ruby", 74);
    glutAddMenuEntry("turquoise", 75);
    glutAddMenuEntry("bronze", 76);
    glutAddMenuEntry("chrome", 77);
    glutAddMenuEntry("copper", 78);
    glutAddMenuEntry("gold", 79);
    glutAddMenuEntry("silver", 80);
    glutAddMenuEntry("black plastic", 81);
    glutAddMenuEntry("cyan plastic", 82);
    glutAddMenuEntry("green plastic", 83);
    glutAddMenuEntry("red plastic", 84);
    glutAddMenuEntry("white plastic", 85);
    glutAddMenuEntry("yellow plastic", 86);
    glutAddMenuEntry("black rubber", 87);
    glutAddMenuEntry("cyan rubber", 88);
    glutAddMenuEntry("green rubber", 89);
    glutAddMenuEntry("red rubber", 90);
    glutAddMenuEntry("white rubber", 91);
    glutAddMenuEntry("yellow rubber", 92);
    menu_id3 = glutCreateMenu(menu);
    
    //CONO
	submenu_id4 = glutCreateMenu(menu);
    glutAddMenuEntry("Esmeralda", 93);
    glutAddMenuEntry("Jade", 94);
    glutAddMenuEntry("Obsidia", 95);
    glutAddMenuEntry("Pearl", 96);
    glutAddMenuEntry("ruby", 97);
    glutAddMenuEntry("turquoise", 98);
    glutAddMenuEntry("bronze", 99);
    glutAddMenuEntry("chrome", 100);
    glutAddMenuEntry("copper", 101);
    glutAddMenuEntry("gold", 102);
    glutAddMenuEntry("silver",103);
    glutAddMenuEntry("black plastic", 104);
    glutAddMenuEntry("cyan plastic", 105);
    glutAddMenuEntry("green plastic", 106);
    glutAddMenuEntry("red plastic", 107);
    glutAddMenuEntry("white plastic", 108);
    glutAddMenuEntry("yellow plastic", 109);
    glutAddMenuEntry("black rubber", 110);
    glutAddMenuEntry("cyan rubber", 111);
    glutAddMenuEntry("green rubber", 112);
    glutAddMenuEntry("red rubber", 113);
    glutAddMenuEntry("white rubber", 114);
    glutAddMenuEntry("yellow rubber", 115);
    menu_id4 = glutCreateMenu(menu);
   
	//Menus------
    glutAddSubMenu("Tetera", submenu_id);
    glutAddSubMenu("Esfera", submenu_id1);
    glutAddSubMenu("Cubo", submenu_id2);
    glutAddSubMenu("Toroide", submenu_id3);
    glutAddSubMenu("Cono", submenu_id4);
    glutAddMenuEntry("Quit", 0);    
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
    glutCreateWindow("Menu-figuras-CO14006");
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

