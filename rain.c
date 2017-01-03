#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

double X1, Y1, X2, Y2;

void myInit(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(0.0,0.0,1.0);
	glPointSize(1.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-480,480,-280,280);
}

void mydisplay(void)
{
	int i,j;
	float l,m,x,y,n,p,k;
	for(k=0;k<=20;k+=0.5) {
		glClear(GL_COLOR_BUFFER_BIT);
		for(j=-300;j<=276;j+=32) {
			glBegin(GL_LINES);
			for(i=140;i>=-200;i-=4) {
				glVertex2i(j,i-k);
				if(i%3==0) {
					i=i-6;
				}
			}
			glEnd();
		}
		
		for(j=-292;j<=284;j+=32) {
			glBegin(GL_LINES);
			for(i=140;i>=-200;i-=4) {
				glVertex2i(j,i-k);
				if(i%3==0) {
					i=i-5;
				}
			}
			glEnd();
		}

		for(j=-284;j<=292;j+=32) {
			glBegin(GL_LINES);
			for(i=140;i>=-200;i-=4) {
				glVertex2i(j,i-k);
				if(i%3==0) {
					i=i-4;
				}
			}
			glEnd();
		}

		for(j=-276;j<=300;j+=32) {
			glBegin(GL_LINES);
			for(i=140;i>=-200;i-=4) {
				glVertex2i(j,i-k);
				if(i%3==0) {
					i=i-7;
				}
			}
			glEnd();
		}

		if(k==20) {
			k=0;
		}
		for(l=0;l<=400;l++) {
			glBegin(GL_LINE_LOOP);
			for(m=0;m<6.29;m+=1) {
				x=l*cos(m);
				y=170+l/4*sin(m);
				glVertex2i(x,y);
			}
			glEnd();
		}
		glBegin(GL_LINE_LOOP);
			glVertex2i(-410,-160);
			glVertex2i(470,-160);
			glVertex2i(410,-260);
			glVertex2i(-470,-260);
		glEnd();

		glFlush();
	}
}

void main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1020,780);	
	glutCreateWindow("It is Raining Heavily");
	myInit();
	glutDisplayFunc(mydisplay);
	glutMainLoop();
}
