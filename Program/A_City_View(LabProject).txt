#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI 3.14159265358979323846
void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //Road Design
    glColor3ub(180, 186, 186);
    glBegin(GL_QUADS);
    glVertex2f(1,-1);
    glVertex2f(1,-0.6);
    glVertex2f(-1,-0.6);
    glVertex2f(-1,-1);
    glEnd();

    //Building
    glColor3ub(74, 147, 141);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.6,0.8);
    glVertex2f(-0.9,0.8);
    glVertex2f(-0.9,0.2);
    glEnd();


    glColor3ub(8, 8, 8);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.6);
    glVertex2f(-0.6,0.7);
    glVertex2f(-0.9,0.7);
    glVertex2f(-0.9,0.6);
    glEnd();


    glColor3ub(8, 8, 8);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.4);
    glVertex2f(-0.6,0.5);
    glVertex2f(-0.9,0.5);
    glVertex2f(-0.9,0.4);
    glEnd();

    glColor3ub(8, 8, 8);
    glBegin(GL_QUADS);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.6,0.3);
    glVertex2f(-0.9,0.3);
    glVertex2f(-0.9,0.2);
    glEnd();

    glColor3ub(74, 147, 141);
    glBegin(GL_QUADS);
    glVertex2f(-0.7,0.2);
    glVertex2f(-0.7,0.8);
    glVertex2f(-0.8,0.8);
    glVertex2f(-0.8,0.2);
    glEnd();

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

    //design a bus

    glColor3ub(156, 97, 21);
    glBegin(GL_QUADS);
    glVertex2f(0,-0.7);
    glVertex2f(0.7,-0.7);
    glVertex2f(0.7,-0.9);
    glVertex2f(0,-0.9);
    glEnd();

    //design a wheel


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



