#ifndef _RenderOpengl_h_
#define _RenderOpengl_h_
//#include <gl\glut.h>  for windows
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

#define WIDTH       600
#define HEIGHT      800

#undef PI 
#define PI            3.14159265358979323846

struct _Color{
	int r;
	int g;
	int b;
};
typedef struct _Color Color;

void drawPoint(float x, float y, const Color color);//
void drawLine(float x1, float y1, float x2, float y2, const Color color);//
void drawRect(float left,float top,float width,float height,const Color color);//
void drawCircle(float x,float y,float radius,const Color color);//
void drawPolygon(float x[],float  y[],int size,const Color color);//

#endif