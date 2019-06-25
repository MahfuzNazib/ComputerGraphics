#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI 3.14159265358979323846
void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);



    //Sky
    glColor3ub(46, 191, 214);
    glBegin(GL_QUADS);
    glVertex2f(1,.5);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,.5);
    glEnd();

    //copy tree
    /*glTranslatef(-.9999f,.0f,0.0f);
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.95,.4);
    glVertex2f(.95,.5);
    glVertex2f(.65,.5);
    glVertex2f(.65,.4);
    glEnd();
    glLoadIdentity();

    //copy Tree leef step2
    glTranslatef(-.99f,-.2f,0.0f);
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.9,.5);
    glVertex2f(.9,.6);
    glVertex2f(.7,.6);
    glVertex2f(.7,.5);
    glEnd();
    glLoadIdentity();


    //copy Tree leef step3
    glTranslatef(-.9999f,.0f,0.0f);
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.85,.6);
    glVertex2f(.85,.7);
    glVertex2f(.75,.7);
    glVertex2f(.75,.6);
    glEnd();
    glLoadIdentity();

    //copy tree base
    glTranslatef(-.99f,.0f,0.0f);
    glColor3ub(115, 1, 22);
    glBegin(GL_QUADS);
    glVertex2f(.85,0.2);
    glVertex2f(.85,.4);
    glVertex2f(.75,.4);
    glVertex2f(.75,0.2);
    glEnd();
    glLoadIdentity();
*/


    //Building
    glColor3ub(74, 147, 141);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.6,0.8);
    glVertex2f(-0.9,0.8);
    glVertex2f(-0.9,0.2);
    glEnd();

    //window1
    glColor3ub(8, 8, 8);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.6);
    glVertex2f(-0.6,0.7);
    glVertex2f(-0.9,0.7);
    glVertex2f(-0.9,0.6);
    glEnd();

    //window2
    glColor3ub(8, 8, 8);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.4);
    glVertex2f(-0.6,0.5);
    glVertex2f(-0.9,0.5);
    glVertex2f(-0.9,0.4);
    glEnd();

    //window 3
    glColor3ub(8, 8, 8);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.6,0.3);
    glVertex2f(-0.9,0.3);
    glVertex2f(-0.9,0.2);
    glEnd();

    //Middle Window
    glColor3ub(74, 147, 141);
    glBegin(GL_QUADS);
    glVertex2f(-0.7,0.2);
    glVertex2f(-0.7,0.8);
    glVertex2f(-0.8,0.8);
    glVertex2f(-0.8,0.2);
    glEnd();

    //Scaling 1st Building
    glScalef(.9f,.9f,0.0f);
    //COPY 1st Building
    glTranslatef(0.65f,0.0f,0.0f);
    glColor3ub(74, 147, 141);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.6,0.8);
    glVertex2f(-0.9,0.8);
    glVertex2f(-0.9,0.2);
    glEnd();
    glLoadIdentity();

    //Copy Window1
    glScalef(.9f,.9f,0.0f);
    glTranslatef(0.65f,0.0f,0.0f);
    glColor3ub(8, 8, 8);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.6);
    glVertex2f(-0.6,0.7);
    glVertex2f(-0.9,0.7);
    glVertex2f(-0.9,0.6);
    glEnd();

    glLoadIdentity();

    //Copy Window2
    glScalef(.9f,.9f,0.0f);
    glTranslatef(0.65f,0.0f,0.0f);
    glColor3ub(8, 8, 8);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.4);
    glVertex2f(-0.6,0.5);
    glVertex2f(-0.9,0.5);
    glVertex2f(-0.9,0.4);
    glEnd();

    glLoadIdentity();

    //Copy Window3
    glScalef(.9f,.9f,0.0f);
    glTranslatef(0.65f,0.0f,0.0f);
    glColor3ub(8, 8, 8);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.6,0.3);
    glVertex2f(-0.9,0.3);
    glVertex2f(-0.9,0.2);
    glEnd();
    glLoadIdentity();

    //copy Middle Window
    glScalef(.9f,.9f,0.0f);
    glTranslatef(0.65f,0.0f,0.0f);
    glColor3ub(74, 147, 141);
    glBegin(GL_QUADS);
    glVertex2f(-0.7,0.2);
    glVertex2f(-0.7,0.8);
    glVertex2f(-0.8,0.8);
    glVertex2f(-0.8,0.2);
    glEnd();
    glLoadIdentity();



    //another Building

    glColor3ub(156, 97, 21);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.6);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.3,0.2);
    glVertex2f(-0.3,0.6);
    glEnd();


    glColor3ub(232, 38, 19);
    glBegin(GL_QUADS);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,0.5);
    glVertex2f(-0.6,0.5);
    glVertex2f(-0.6,0.4);
    glEnd();

    glColor3ub(232, 38, 19);
    glBegin(GL_QUADS);
    glVertex2f(-0.3,0.2);
    glVertex2f(-0.3,0.3);
    glVertex2f(-0.6,0.3);
    glVertex2f(-0.6,0.2);
    glEnd();

    glColor3ub(156, 97, 21);
    glBegin(GL_QUADS);
    glVertex2f(-0.4,0.2);
    glVertex2f(-0.4,0.6);
    glVertex2f(-0.5,0.6);
    glVertex2f(-0.5,0.2);
    glEnd();

    //design Green field

    glColor3ub(17, 101, 43);
    glBegin(GL_QUADS);
    glVertex2f(1,-.4);
    glVertex2f(1,0.1);
    glVertex2f(-1,0.1);
    glVertex2f(-1,-.4);
    glEnd();

    //Lake
    glColor3ub(15, 169, 241);
    glBegin(GL_QUADS);
    glVertex2f(-.1,-.3);
    glVertex2f(-.1,.05);
    glVertex2f(-.9,.05);
    glVertex2f(-.9,-.3);
    glEnd();

    //copy tree1
    glScalef(.85f,.85f,0.0f);
    glTranslatef(-.99f,-.2f,0.0f);
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.95,.4);
    glVertex2f(.95,.5);
    glVertex2f(.65,.5);
    glVertex2f(.65,.4);
    glEnd();
    glLoadIdentity();

    //copy Tree leef step2
    glScalef(.85f,.85f,0.0f);
    glTranslatef(-.99f,-.2f,0.0f);
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.9,.5);
    glVertex2f(.9,.6);
    glVertex2f(.7,.6);
    glVertex2f(.7,.5);
    glEnd();
    glLoadIdentity();


    //copy Tree leef step3
    //glScalef(.9f,.9f,0.0f);
    glScalef(.85f,.85f,0.0f);
    glTranslatef(-.99f,-.2f,0.0f);
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.85,.6);
    glVertex2f(.85,.7);
    glVertex2f(.75,.7);
    glVertex2f(.75,.6);
    glEnd();
    glLoadIdentity();

    //copy tree base
    glScalef(.85f,.85f,0.0f);
    glTranslatef(-.99f,-.2f,0.0f);
    glColor3ub(115, 1, 22);
    glBegin(GL_QUADS);
    glVertex2f(.85,0.2);
    glVertex2f(.85,.4);
    glVertex2f(.75,.4);
    glVertex2f(.75,0.2);
    glEnd();
    glLoadIdentity();


    //copy tree2
    glScalef(.85f,.85f,0.0f);
    glTranslatef(-.9f,-.2f,0.0f);
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.95,.4);
    glVertex2f(.95,.5);
    glVertex2f(.65,.5);
    glVertex2f(.65,.4);
    glEnd();
    glLoadIdentity();

    //copy Tree leef step2
    glScalef(.85f,.85f,0.0f);
    glTranslatef(-.99f,-.2f,0.0f);
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.9,.5);
    glVertex2f(.9,.6);
    glVertex2f(.7,.6);
    glVertex2f(.7,.5);
    glEnd();
    glLoadIdentity();


    //copy Tree leef step3
    //glScalef(.9f,.9f,0.0f);
    glScalef(.85f,.85f,0.0f);
    glTranslatef(-.99f,-.2f,0.0f);
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.85,.6);
    glVertex2f(.85,.7);
    glVertex2f(.75,.7);
    glVertex2f(.75,.6);
    glEnd();
    glLoadIdentity();

    //copy tree base
    glScalef(.85f,.85f,0.0f);
    glTranslatef(-.99f,-.2f,0.0f);
    glColor3ub(115, 1, 22);
    glBegin(GL_QUADS);
    glVertex2f(.85,0.2);
    glVertex2f(.85,.4);
    glVertex2f(.75,.4);
    glVertex2f(.75,0.2);
    glEnd();
    glLoadIdentity();



    //design a school

    glColor3ub(217, 220, 16);
    glBegin(GL_QUADS);
    glVertex2f(0.6,0.2);
    glVertex2f(.6,.6);
    glVertex2f(0.1,.6);
    glVertex2f(0.1,0.2);
    glEnd();

    //school Roof

    glColor3ub(220, 47, 16);
    glBegin(GL_TRIANGLES);
    glVertex2f(.6,.6);
    glVertex2f(.35,.8);
    glVertex2f(.1,.6);
    glEnd();

    //school window 1
    glColor3ub(44, 6, 129);
    glBegin(GL_QUADS);
    glVertex2f(.5,.4);
    glVertex2f(.5,.5);
    glVertex2f(.2,.5);
    glVertex2f(.2,.4);
    glEnd();

    //school window 2
    glColor3ub(44, 6, 129);
    glBegin(GL_QUADS);
    glVertex2f(.5,.25);
    glVertex2f(.5,.35);
    glVertex2f(.2,.35);
    glVertex2f(.2,.25);
    glEnd();

    //school Middlewindow
    glColor3ub(229, 226, 237);
    glBegin(GL_LINES);
    glVertex2f(.35,.5);
    glVertex2f(.35,.25);
    glEnd();


    //Tree leef step1
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.95,.4);
    glVertex2f(.95,.5);
    glVertex2f(.65,.5);
    glVertex2f(.65,.4);
    glEnd();

    //Tree leef step2
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.9,.5);
    glVertex2f(.9,.6);
    glVertex2f(.7,.6);
    glVertex2f(.7,.5);
    glEnd();


    //Tree leef step3
    glColor3ub(33, 85, 4);
    glBegin(GL_QUADS);
    glVertex2f(.85,.6);
    glVertex2f(.85,.7);
    glVertex2f(.75,.7);
    glVertex2f(.75,.6);
    glEnd();

    //tree base
    glColor3ub(115, 1, 22);
    glBegin(GL_QUADS);
    glVertex2f(.85,0.2);
    glVertex2f(.85,.4);
    glVertex2f(.75,.4);
    glVertex2f(.75,0.2);
    glEnd();




    //Sun

	int i;
    glColor3ub(237, 49, 23);
	GLfloat x=.7f; GLfloat y=.85f; GLfloat radius =.1f;
	int triangleAmount = 60; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    //Bird
    glColor3ub(0,0,0);


    //bird2
    glBegin(GL_LINES);
    glVertex2f(.55,.85);
    glVertex2f(.45,.9);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(.55,.85);
    glVertex2f(.65,.9);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(.6,.85);
    glVertex2f(.5,.95);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(.6,.85);
    glVertex2f(.7,.9);
    glEnd();

    //Road Design
    glColor3ub(180, 186, 186);
    glBegin(GL_QUADS);
    glVertex2f(1,-1);
    glVertex2f(1,-0.6);
    glVertex2f(-1,-0.6);
    glVertex2f(-1,-1);
    glEnd();


    //design a bus

    glColor3ub(231, 13, 10);
    glBegin(GL_QUADS);
    glVertex2f(0,-0.7);
    glVertex2f(0.7,-0.7);
    glVertex2f(0.7,-0.9);
    glVertex2f(0,-0.9);
    glEnd();

    //bus window
    glColor3ub(59, 246, 215);
    glBegin(GL_QUADS);
    glVertex2f(0.6,-0.85);
    glVertex2f(0.6,-0.75);
    glVertex2f(0.1,-0.75);
    glVertex2f(0.1,-0.85);
    glEnd();
    //design a wheel1 for bus
    int w1;
    glColor3ub(0,0,0);
	GLfloat x1=.2f; GLfloat y1=-.9f; GLfloat radius1 =.07f;
	int triangleAmount1 = 60;
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1);
		for(w1 = 0; w1 <= triangleAmount1;w1++) {
			glVertex2f(
		            x1 + (radius1 * cos(w1 *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(w1 * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	//design a wheel2 for bus
    int w2;
    glColor3ub(0,0,0);
	GLfloat x2=.5f; GLfloat y2=-.9f; GLfloat radius2 =.07f;
	int triangleAmount2 = 60;
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2);
		for(w2 = 0; w2 <= triangleAmount2;w2++) {
			glVertex2f(
		            x2 + (radius2 * cos(w2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(w2 * twicePi2 / triangleAmount2))
			);
		}
	glEnd();




    glFlush();
}

int main(int argc,char** argv)
{
    glutInit(&argc, argv);
	glutCreateWindow("City");
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
