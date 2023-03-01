#include <GL/glut.h>
#include <stdio.h>
float X=0,Y=0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(-0.224, 0.136);
    glVertex2f(-0.104, 0.144);
    glVertex2f(-0.032, 0.168);
    glVertex2f(0.024, 0.172);
    glVertex2f(0.092, 0.152);
    glVertex2f(0.208, 0.140);
    glVertex2f(0.248, 0.080);
    glVertex2f(0.280, -0.004);
    glVertex2f(0.292, -0.120);
    glVertex2f(0.252, -0.200);
    glVertex2f(0.124, -0.236);
    glVertex2f(-0.028, -0.236);
    glVertex2f(-0.160, -0.240);
    glVertex2f(-0.228, -0.208);
    glVertex2f(-0.292, -0.136);
    glVertex2f(-0.300, -0.076);
    glVertex2f(-0.284, 0.016);
    glVertex2f(-0.236, 0.088);
    glVertex2f(-0.216, 0.144);
    glEnd();

    glutSwapBuffers();
}

void mouse (int button , int state ,int x, int y)
{
    float X = (x-250)/250.0;
    float Y = -(y-250)/250.0;
    if(state==GLUT_DOWN)
    {
        printf("    glVertex2f(%0.3f, %0.3f);\n",X,Y);
    }
}


int main(int argc, char *argv[])
{
	  glutInit(&argc, argv);
	  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	  glutInitWindowSize(500,500);
	  glutCreateWindow("week03");

	  glutDisplayFunc(display);
	  glutMouseFunc(mouse);

	  glutMainLoop();

}
