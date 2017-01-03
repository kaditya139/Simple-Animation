#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
int x,y,m,n;
float i,j,k,l;
void myInit (void) {
	glClearColor(0.0,0.0,0.0,1.0);
	glColor3f(0.0,1.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-780,780,-420,420);
}

void display (void) {
	for(j=0;j<555;j+=0.01) {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	for(i=0;i<6.29;i+=0.001) {
		x=200*cos(i);
		y=200*sin(i);
		glVertex2i(x,y);
		glVertex2i((x/2)-600*cos(j),(y/2)-100*sin(j));
	}
	glEnd();
	glBegin(GL_POINTS);
	for(i=1.17;i<1.97;i+=0.001) {
		x=400*cos(i);
		y=-150+300*sin(i);
		glVertex2i(x,y);
		glVertex2i(x/2-600*cos(j),y/2-100*sin(j));
	}	
	glEnd();
	glBegin(GL_POINTS);
	for(i=1.07;i<2.07;i+=0.001) {
		x=400*cos(i);
		y=-200+300*sin(i);
		glVertex2i(x,y);
		glVertex2i(x/2-600*cos(j),y/2-100*sin(j));
	}	
	glEnd();
	glBegin(GL_POINTS);
	for(i=1.05;i<2.09;i+=0.001) {
		x=400*cos(i);
		y=-250+300*sin(i);
		glVertex2i(x,y);
		glVertex2i(x/2-600*cos(j),y/2-100*sin(j));
	}	
	glEnd();
	glBegin(GL_POINTS);
	for(i=1.06;i<2.08;i+=0.001) {
		x=400*cos(i);
		y=-300+300*sin(i);
		glVertex2i(x,y);
		glVertex2i(x/2-600*cos(j),y/2-100*sin(j));
	}	
	glEnd();
	glBegin(GL_POINTS);
	for(i=1.10;i<2.04;i+=0.001) {
		x=400*cos(i);
		y=-350+300*sin(i);
		glVertex2i(x,y);
		glVertex2i(x/2-600*cos(j),y/2-100*sin(j));
	}	
	glEnd();
	glBegin(GL_POINTS);
	for(i=1.16;i<1.98;i+=0.001) {
		x=400*cos(i);
		y=-400+300*sin(i);
		glVertex2i(x,y);
		glVertex2i(x/2-600*cos(j),y/2-100*sin(j));
	}	
	glEnd();
	glBegin(GL_POINTS);
	for(i=1.27;i<1.87;i+=0.001) {
		x=400*cos(i);
		y=-450+300*sin(i);
		glVertex2i(x,y);
		glVertex2i(x/2-600*cos(j),y/2-100*sin(j));
	}	
	glEnd();
	glBegin(GL_POINTS);
	for (i=200;i>=-200;i--) {
		glVertex2i(0,i);
		glVertex2i(-600*cos(j),i/2-100*sin(j));
	}
	glEnd();
	glBegin(GL_POINTS);
	for(i=0;i<6.29;i+=0.001) {
		x=70*cos(i);
		y=200*sin(i);
		glVertex2i(x,y);
		glVertex2i(x/2-600*cos(j),y/2-100*sin(j));
	}	
	glEnd();
	glBegin(GL_POINTS);
	for(i=0;i<6.29;i+=0.001) {
		x=120*cos(i);
		y=200*sin(i);
		glVertex2i(x,y);
		glVertex2i(x/2-600*cos(j),y/2-100*sin(j));
	}	
	glEnd();
	glBegin(GL_POINTS);
	for(i=0;i<6.29;i+=0.001) {
		x=160*cos(i);
		y=200*sin(i);
		glVertex2i(x,y);
		glVertex2i(x/2-600*cos(j),y/2-100*sin(j));
	}
	glBegin(GL_POINTS);
	for(i=0;i<6.29;i+=0.001) {
		x=600*cos(i);
		y=100*sin(i);
		glVertex2i(x,y);
	}	
	glEnd();	
	glEnd();
	glFlush();
	}
}

int main (int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(13606,768);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Practice");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
}


