#include<windows.h>
#include<gl\gl.h>
#include<gl\glu.h>
#include<gl\glut.h>

void House()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3ub(119, 125, 95);
    glBegin(GL_QUADS);
    glVertex2f(0.6,0);
    glVertex2f(-0.5,0);
    glVertex2f(-0.5,-0.6);
    glVertex2f(0.6,-0.5);
    glEnd();


    glColor3ub(70, 75, 49);
    glBegin(GL_QUADS);
    glVertex2f(-0.5,0);
    glVertex2f(-0.9,0);
    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.5,-0.6);
    glEnd();


    glColor3ub(2, 110, 40);
    glBegin(GL_QUADS);
    glVertex2f(0.6,0);
    glVertex2f(0.4,0.4);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.5,0);
    glEnd();


    glColor3ub(14, 77, 36);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5,0);
    glVertex2f(-0.7,0.4);
    glVertex2f(-0.9,0);
    glEnd();



    glFlush();

}

int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitWindowSize(800,450);
    glutInitWindowPosition(5,5);
    glutCreateWindow("Graphical Line");
    glutDisplayFunc(House);
    glutMainLoop();

    return 0;
}
