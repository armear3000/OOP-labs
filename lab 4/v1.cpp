#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Child
{
public:
	void write();
	void print();
	Child() {
		
	}
	Child(Child &obj) {
		name = obj.name;
		name2 = obj.name2;
		age = obj.age;
	}
	~Child() {
	
	}
private:
	string name;
	string name2;
	int age;
};
void Child::write() {
	cout << "Введите имя ребенка, фамилию и возраст:" << endl;
	cin >> name >> name2 >> age;
}
void Child::print() {
	cout << name << " " << name2 << " " << age << endl;
}

class Tiles
{
public:
	string brand;
	int size_h, size_w;
	int price;
	Tiles() {

	}
	Tiles(Tiles &obj) {
		brand = obj.brand;
		size_h = obj.size_h; size_w = obj.size_w;
		price = obj.price;
	}
	~Tiles() {

	}
	void init(string brand, int size_h, int size_w, int price);
	void getData();
};
void Tiles::init(string brand1, int size_h1, int size_w1, int price1)
{
	brand = brand1;
	size_h = size_h1;
	size_w = size_w1;
	price = price1;
}
void Tiles::getData() {
	cout << "Brand: " << brand << " size: " << size_h << "x" << size_w << " price: " << price << endl;
}

class Complex
{
public:
	int Re, Im;
	Complex() {
	
	}
	Complex(Complex &obj) {
		Re = obj.Re;
		Im = obj.Im;
	}
	~Complex() {
	
	}
	void getData();
	Complex(int, int);
};
Complex::Complex(int R, int I)
{
	Re = R;
	Im = I;
}
void Complex::getData() {
	cout << "Модуль данного комплексного числа: " << sqrt(Re*Re + Im * Im) << endl;
	cout << "Действительная часть комплексного числа: " << Re << " Мнимая: " << Im << "i" << endl;
}

class Vector
{
public:
	double x, y;

	void add(Vector);
	void sub(Vector);
	double getMod();
	Vector(double x1, double y1) {
		x = x1;
		y = y1;
	}
	Vector(Vector &obj) {
		x = obj.x;
		y = obj.y;
	}
	~Vector() {
	
	}
};
void Vector::add(Vector a) {
	x += a.x;
	y += a.y;
}
void Vector::sub(Vector a) {
	x -= a.x;
	y -= a.y;
}
double Vector::getMod() {
	return sqrt(x*x + y * y);
}

int main() {
	setlocale(LC_ALL,"russian");
	
	return 0;
}