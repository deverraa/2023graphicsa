#include <GL/glut.h>
float angle=0;  //給角度初始值=0
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glColor3f(1,0.2,0.2);
    glPushMatrix();
        glutSolidCube(0.5);


    glPushMatrix();
        glTranslatef(0.25,0.25,0);//掛到右上角
        glRotatef(angle,0,0,1);//旋轉
        glTranslatef(0.25,0.25,0);
      //  glTranslatef(0.5,0.5,0);//把移動取消
        glColor3f(0,0.4,0.5);
        glutSolidCube(0.5);
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
