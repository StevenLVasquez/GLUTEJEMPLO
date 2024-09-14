#include <freeglut.h>
void iniciar()
{
	glClearColor(0, 0, 1, 1);//0 = rojo 0= verde , 1=amarillo , 1=alpha
	glPointSize(5);
	glColor3i(1, 0, 0);
	glOrtho(800, 0, 600, 0, -1, 1);
}

void dibujar()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2d(20, 20);
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
	glutCreateWindow("Nombre de la ventana Steven XDDDDDDDDDDDDDDDDDDDDDDD");//Con esto le damos el nombre a la ventana creada
	glutDisplayFunc(dibujar);
	iniciar();
	glutMainLoop(); // esto es para que siga actualizando la pantalla mientras corre , para que no se cierre
	return 0;

}

