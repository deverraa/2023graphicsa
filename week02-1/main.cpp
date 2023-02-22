#include <GL/glut.h>

void display()

{

    glutSolidTeapot( 0.3 ); //畫出實心茶壺 大小為0.3

    glutSwapBuffers(); //請GLUT把畫面swqp送到顯示的地方

}



int main(int argc, char *argv[])

{

	  glutInit(&argc, argv);

	  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	  glutCreateWindow("GLUT Shapes");

	  glutDisplayFunc(display); //要顯示的對應函式

	  glutMainLoop(); //main迴圈要在最後面

}
