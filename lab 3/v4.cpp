#include <iostream>
#include <math.h>

using namespace std;

class Vector
{
public:
	double x, y;

	void add(Vector);
	void sub(Vector);
	double getMod();
	Vector(double,double);
};
Vector::Vector(double x1,double y1){
	x = x1;
	y = y1;
}
void Vector::add(Vector a){
	x += a.x;
	y += a.y;
}
void Vector::sub(Vector a){
	x -= a.x;
	y -= a.y;
}
double Vector::getMod() {
	return sqrt(x*x + y*y);
}
int main() {
	setlocale(LC_ALL,"russian");
	Vector v1(3,-3), v2(-4,4);
	v1.add(v2);
	cout << "модуль вектора: " << v1.getMod();
	
	return 0;
}