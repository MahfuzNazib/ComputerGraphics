#include<windows.h>
#include<GL/glut.h>

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(7,7,7);

    //4 parts
    /*glBegin(GL_LINES);
    glVertex2f(1,0);
    glVertex2f(-1,0);

    glVertex2f(0,1);
    glVertex2f(0,-1);

    glEnd();*/

    //AIUB Text Design

    //Desing A
    glBegin(GL_LINES);
    glVertex2f(-0.6,0.6);
    glVertex2f(-0.9,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.6,0.6);
    glVertex2f(-0.3,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.8,0.3);
    glVertex2f(-0.4,0.3);
    glEnd();

    //Desing I

    glBegin(GL_LINES);
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0);
    glEnd();

    //Desing U

    glBegin(GL_LINES);
    glVertex2f(-0.1,0.6);
    glVertex2f(-0.1,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.1,0);
    glVertex2f(0.2,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.2,0);
    glVertex2f(0.2,0.6);
    glEnd();

    //Desing B

    glBegin(GL_LINES);
    glVertex2f(0.3,0.6);
    glVertex2f(0.3,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.3,0.6);
    glVertex2f(0.5,0.6);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.5,0.6);
    glVertex2f(0.5,0.4);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.5,0.4);
    glVertex2f(0.3,0.4);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.3,0.3);
    glVertex2f(0.5,0.3);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.5,0.3);
    glVertex2f(0.5,0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.5,0);
    glVertex2f(0.3,0);
    glEnd();

    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("AIUB_Text");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
