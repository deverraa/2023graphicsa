#include <GL/glut.h>

void display()

{

    glutSolidTeapot( 0.3 ); //�e�X��߯��� �j�p��0.3

    glutSwapBuffers(); //��GLUT��e��swqp�e����ܪ��a��

}



int main(int argc, char *argv[])

{

	  glutInit(&argc, argv);

	  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

	  glutCreateWindow("GLUT Shapes");

	  glutDisplayFunc(display); //�n��ܪ������禡

	  glutMainLoop(); //main�j��n�b�̫᭱

}
