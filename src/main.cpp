#include "display.h"
#include <iostream>
#include <GL/glut.h>

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);  //параметры окна(двойная буферизация и всё такое)
    glutInitWindowSize(1200, 800);  //это размеры окна
    glutCreateWindow("Awesome Cube");  //это название создающегося окна
    glEnable(GL_DEPTH_TEST);  //тест глубины или что-то такое

    glutDisplayFunc(displayCell);  //вызвываем функцию, которая рисует кубы
    glutReshapeFunc(changeSize);

    glutMouseFunc(mouseButton);
    glutPassiveMotionFunc(mouseMove);
    glutTimerFunc(2, Rotate, 1);

    glutMainLoop();  //а это бесконечный цикл
    return 0;

}
