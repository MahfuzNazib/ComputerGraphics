#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI 3.14159265358979323846
void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //sKY

    glColor3ub(129, 194, 220);
    glBegin(GL_QUADS);
    glVertex2f(1,.25);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,.25);
    glEnd();



    //Floor

    glColor3ub(227, 208, 109);
    glBegin(GL_QUADS);
    glVertex2f(1,-1);
    glVertex2f(1,.25);
    glVertex2f(-1,.25);
    glVertex2f(-1,-1);
    glEnd();



    //1st Peramid


    glColor3ub(218, 146, 69);
    glBegin(GL_TRIANGLES);
    glVertex2f(.6,.4);
    glVertex2f(.4,-.2);
    glVertex2f(.8,-.15);
    glEnd();

    glColor3ub(181, 121, 22);
    glBegin(GL_TRIANGLES);
    glVertex2f(.3,0);
    glVertex2f(.4,-.2);
    glVertex2f(.6,.4);
    glEnd();

    //copy pyramid 2
    glScalef(1.67f,1.67f,0.0f);
    glTranslatef(-.5f,0.03f,0.0f);
    glColor3ub(238, 174, 69);
    glBegin(GL_TRIANGLES);
    glVertex2f(.6,.4);
    glVertex2f(.4,-.2);
    glVertex2f(.8,-.15);
    glEnd();
    glLoadIdentity();

    glScalef(1.67f,1.67f,0.0f);
    glTranslatef(-.5f,0.03f,0.0f);
    glColor3ub(181, 121, 22);
    glBegin(GL_TRIANGLES);
    glVertex2f(.3,0);
    glVertex2f(.4,-.2);
    glVertex2f(.6,.4);
    glEnd();
    glLoadIdentity();


    //copy pyramid 3
    glScalef(1.15f,1.15f,0.0f);
    glTranslatef(-.85f,-.1f,0.0f);
    glColor3ub(218, 146, 69);
    glBegin(GL_TRIANGLES);
    glVertex2f(.6,.4);
    glVertex2f(.4,-.2);
    glVertex2f(.8,-.15);
    glEnd();
    glLoadIdentity();

    glScalef(1.15f,1.15f,0.0f);
    glTranslatef(-.85f,-.1f,0.0f);
    glColor3ub(181, 121, 22);
    glBegin(GL_TRIANGLES);
    glVertex2f(.3,0);
    glVertex2f(.4,-.2);
    glVertex2f(.6,.4);
    glEnd();
    glLoadIdentity();






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
