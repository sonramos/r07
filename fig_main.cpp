#include <iostream>
#include "fig.h"
#include <string>

int main(){
	CFigGeometrica a;
	CTriangulo t("isosceles",2,2);
	CQuadrilatero q("retangulo",3,4);
	CCirculo c("redondo", 2);
	
	std::cout << "Area do " << a.nome << " eh igual a " << a.calcularArea() << endl;
	std::cout << "Area do " << t.nome << " eh igual a " << t.calcularArea() << endl;
	std::cout << "Area do " << q.nome << " eh igual a " << q.calcularArea() << endl;
	std::cout << "Area do " << c.nome << " eh igual a " << c.calcularArea() << endl;
		
	return 0;
}
