#include <freeglut.h>
void iniciar()
{
	glClearColor(1, 0, 0, 0); //Rojo,verde,azul, alfa
	glLineWidth(3.f);
	// glPointSize(150);/// con esto vamos a crear los puntos
	// glColor3i(1, 0, 0); / //para indicar que el color del punto va a ser rojo
		glOrtho(800, 0, 600, 0, -1, 1); // esta es la orientacion de la camara


}

void dibujar()
{
	glClear(GL_COLOR_BUFFER_BIT); //PARA IR LIMPIANDO EL BUFFER
	glBegin(GL_LINES); // CON ESTO LE ESTAMOS DICIENDO QUE VAMOS A DIBUJAR PUNTOS
	glColor3f(1, 1, 0); //aqui se cambia el color del punto
	glVertex2i(100, 100); // Primer punto (x1, y1)
	glVertex2i(400, 300);

	glColor3f(0, 1, 1); //aqui se cambia el color del punto
	glVertex2i(600, 400); // Primer punto (x1, y1)
	glVertex2i(100, 200);// Segundo punto (x2, y2)
	// glVertex2d(400, 300);///Aqui le estamos diciendo que vamos a usar un entorno 2d y dibujando los puntos.
	glEnd();
	glFlush(); // aqui forzamos que lo que esta arriba se tumbe


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

