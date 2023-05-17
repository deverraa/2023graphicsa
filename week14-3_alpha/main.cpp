#include<GL/glut.h>
float angle=0,oldAngle=0, newAngle=0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void timer(int t)
{
    if( t<100 )glutTimerFunc(500,timer,t+1);
    float alpha=t/100.0;
    angle= newAngle * alpha + (1-alpha) * oldAngle ;///*****
    glutPostRedisplay();
}
void motion(int x,int y)
{
    angle=x; ///即時更新角度
    glutPostRedisplay();
}
void mouse( int button, int state, int x, int y)
{
    if( state==GLUT_DOWN) oldAngle = x; ///按下
    if( state==GLUT_UP)   newAngle = x; ///放開
    glutPostRedisplay();
}
void keyboard(unsigned char key, int x,int y)
{
    glutTimerFunc(0,timer,0);
}
int main(int argc, char *argv[])
{
	  glutInit(&argc, argv);
	  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	  glutCreateWindow("week14");

	  glutDisplayFunc(display);
	  glutMouseFunc(mouse);///按下去表示起點 放開表示終點
	  glutMotionFunc(motion);

	  glutKeyboardFunc(keyboard); //用鍵盤啟動
	  //glutTimerFunc(2000,timer,0); //設定timer函式
	  glutMainLoop();
}
