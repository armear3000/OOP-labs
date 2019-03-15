#include <iostream>

using namespace std;

class ClassComplex
{
public:
	int Re, Im;
	ClassComplex();
	ClassComplex(ClassComplex &obj);
	ClassComplex(int, int);
	~ClassComplex();

	
	ClassComplex& operator=(const ClassComplex& right) {
		if (this == &right)
			return *this;
		Re = right.Re;
		Im = right.Im;
		return *this;
	}
	friend const ClassComplex& operator++(ClassComplex& i) {
		i.Re++;
		i.Im++;
		return i;
	}
	friend const ClassComplex operator++(ClassComplex& i, int) {
		ClassComplex old(i);
		i.Re++;
		i.Im++;
		return old;
	}
	friend const ClassComplex& operator--(ClassComplex& i) {
		i.Re--;
		i.Im--;
		return i;
	}
	friend const ClassComplex operator--(ClassComplex& i, int) {
		ClassComplex old(i);
		i.Re--;
		i.Im--;
		return old;
	}
	friend bool operator==(const ClassComplex& left, const ClassComplex& right) {
		return ((left.Re == right.Re) && (left.Im == right.Im));
	}
	friend ostream& operator<< (ostream &out, const ClassComplex &Z) {
		if (Z.Re)
			if (Z.Im)
				if(Z.Im > 0)
					out << Z.Re << "+" << Z.Im << "i";
				else
					out << Z.Re << Z.Im << "i";
			else
				out << Z.Re;
		else 
			if (Z.Im)
				out << Z.Im << "i";
			else
				out << 0;
		return out;
	}
	friend istream& operator>> (istream &in, ClassComplex &Z) {
		in >> Z.Re;
		in >> Z.Im;

		return in;
	}

	void getData();
};


ClassComplex::ClassComplex()
{
	Re = 0;
	Im = 0;
}
ClassComplex::ClassComplex(ClassComplex &obj) {
	Re = obj.Re;
	Im = obj.Im;
}
ClassComplex::ClassComplex(int R, int I)
{
	Re = R;
	Im = I;
}
ClassComplex::~ClassComplex()
{

}

void ClassComplex::getData() {
	cout << "Модуль данного комплексного числа: " << sqrt(Re*Re + Im * Im) << endl;
	cout << "Действительная часть комплексного числа: " << Re << " Мнимая: " << Im << "i" << endl;
}

