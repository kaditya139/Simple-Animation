#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

int x,y,k,j=1,f1=0,m=0,l=1,f2=0,n=0,score=0,a=-200,b=200,c=0,d=0,count=1,p=0,q=0;

void myInit(void) {
	glClearColor(1.0,1.0,1.0,0.0);
	glColor3f(1.0f,0.0f,0.0f);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-620.0,620.0,-340.0,340.0);
}

void keyboard(unsigned char key, int x, int y) {
	p=a+200*(d-c);
	q=b+200*(d-c);

	if(p==-600) {				/* '110' -> Ascii value of 'n'*/
		c=c;
		if(key==110) {
			d++;
		}
	}
	else if(q==600) {			/* '98' -> Ascii value of 'b'*/
		d=d;
		if(key==98) {
			c++;	
		}
	}
	else {
		if(key==98) {
			c++;	
		}
		if(key==110) {
			d++;
		}
	}
	glutPostRedisplay();
}
	
	

void myDisplay(void) {
	for(k=0;k<=400;k+=5) {	
		glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_LINE_STRIP);
		float i=0;
		m=m+6;
		n=n+4;
		while (i<=6.30) {
			y=12+20*cos(i);
			x=20*sin(i);
			i=i+0.1;
			if (m==288 && f1==0) {
				j=-1;
				m=-288;
				f1=1;
				score++;
			}
			if (m==288 && f1==1) {
				j=1;
				m=-288;
				f1=0;
			}
			if (n==580 && f2==0) {
				l=-1;
				n=-580;
				f2=1;
			}
			if (n==580 && f2==1) {
				l=1;
				n=-580;
				f2=0;
			}
			glVertex2i(x-l*n,y-j*m);
		}
		glEnd();
		
		glBegin(GL_LINE_LOOP);
			glVertex2i(-600,-320);
			glVertex2i(-600,320);
			glVertex2i(600,320);
			glVertex2i(600,-320);
		glEnd();
		if(count>=1) {
			glBegin(GL_LINE_LOOP);
			p=a+200*(d-c);
			q=b+200*(d-c);
				glVertex2i(p,-315);
				glVertex2i(p,-295);
				glVertex2i(q,-295);
				glVertex2i(q,-315);
			glEnd();
		}

		p=a+200*(d-c);
		q=b+200*(d-c);
		if((j*m)== 276) {
			if(p>((-1*l*n)+20)) {
				printf("Game Over !!!\nYour Score is :\t%d\n",score);
				exit(0);
			}
			if(q<(-1*l*n)-20) {
				printf("Game Over !!!\nYour Score is :\t%d\n",score);
				exit(0);
			}
		}
		glutSwapBuffers();
	}
}

void main(int argc,char** argv) {
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(1100,600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Parabola Drawing");
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}
