#include <iostream>
#include "fig.h"
#include <string>

virtual void CFigGeometrica::calcularArea(int a, int b){area = 0;};
CFigGeometrica::CFigGeometrica(){nome = "nada"; a = 0; b = 0;};

void CQuadrilatero::calcularArea(int a, int b){area = a*b;};
CQuadrilatero::CQuadrilatero(string n, int x, int y){nome = n; a = x; b = y;};

void CTriangulo::calcularArea(){area = (a*b)/2};
CTriangulo::CTriangulo(string n, int x, int y){nome = n; a = x; b = y;};


void CCirculo::calcularArea(){area = (pi*r*r)};
CCirculo::CTriangulo(string n, float x){nome = n; r = x;};
