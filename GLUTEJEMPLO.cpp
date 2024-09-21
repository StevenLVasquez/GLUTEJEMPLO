#include <freeglut.h>
void iniciar()
{
	glClearColor(1.0, 1.0, 1.0, 0.8);//0 = rojo 0= verde , 1=amarillo , 1=alpha
	glPointSize(150);
	//glColor3i(1, 0, 0);
	glOrtho(800, 0, 600, 0, -1, 1);
}

void dibujar()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glColor3f(1, 1, 0);
	glVertex2d(400, 300);
	glEnd();
	glFlush();
}


int main(int argc, char* args[]) 
{
	glutInit(&argc, args);//se utiliza para inicializar la libreria glut
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	//Esto es inicializando las ventanas , estableciendo el modo de visualizacion que sera rgb
	//buffer es un espacio en memoria
	glutInitWindowSize(800, 600);//aqui le damos el tamaño de la pantalla
	glutInitWindowPosition(50, 50);//aqui especificamos la posicion de la pantalla
	glutCreateWindow("Nombre de la ventana Steven XD");//Con esto le damos el nombre a la ventana creada
	glutDisplayFunc(dibujar);
	iniciar();
	glutMainLoop(); // esto es para que siga actualizando la pantalla mientras corre , para que no se cierre
	return 0;

}

