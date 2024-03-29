#include <GL/glut.h>
float angle=0;  //給角度初始值=0
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(1,0.2,0.2);
    glPushMatrix();
        glTranslatef(0.8,0,0);
        glRotatef(angle,0 ,0 ,1);
        glutSolidTeapot( 0.3 );
    glPopMatrix();

    glColor3f(0.4,0,0.5);
     glPushMatrix();
        glRotatef(angle,0 ,0 ,1);
        glTranslatef(0.8,0,0);
        glutSolidTeapot( 0.3 );
    glPopMatrix();

    glutSwapBuffers();
    angle++;  //角度加加(轉起來)
}
int main(int argc, char *argv[])
{
	  glutInit(&argc, argv);
	  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	  glutCreateWindow("GLUT Shapes");
	  glutDisplayFunc(display);
	  glutIdleFunc(display);
	  glutMainLoop();
}
