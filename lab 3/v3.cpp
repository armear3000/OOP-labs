#include <iostream>
#include <math.h>

using namespace std;

class Complex
{
public:
	int Re, Im;

	
	void getData();
	Complex(int,int);
};
Complex::Complex(int R,int I)
{
	Re = R;
	Im = I;
}
void Complex::getData() {
	cout << "������ ������� ������������ �����: " << sqrt(Re*Re + Im * Im) << endl;
	cout << "�������������� ����� ������������ �����: " << Re << " ������: " << Im << "i" << endl;
}
int main() {
	setlocale(LC_ALL,"russian");
	Complex Z1(3,-3), Z2(-4,4);
	Z1.getData();
	Z2.getData();
	return 0;
}