#include <string>

class CFigGeometrica{
		int a, b, area;
	public:
		string nome;
		virtual void calcularArea(int a, int b);
		CFigGeometrica();
};

class CQuadrilatero : public CFigGeometrica{
		int a, b, area;
	public:
		void calcularArea(int a, int b);
		CQuadrilatero(string n, int x, int y);
};
class CTriangulo : public CFigGeometrica{
		int a, b, area;
	public:
		void calcularArea(int a, int b);
		CTriangulo(string n, int x, int y);
};
class CCirculo : public CFigGeometrica{
	private:
		float r, area;
		static float pi = 3.14;
	public:
		void calcularArea();
		CTriangulo(string n, float x);
};
