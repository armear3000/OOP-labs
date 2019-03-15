#include <iostream>

using namespace std;

class ClassVector
{
public:
	double x, y;
	
	ClassVector();
	ClassVector(double, double);
	ClassVector(ClassVector &obj);
	~ClassVector();

	ClassVector& operator=(const ClassVector& right) {
		if (this == &right)
			return *this;
		x = right.x;
		y = right.y;
		return *this;
	}
	friend bool operator==(const ClassVector& left, const ClassVector& right) {
		return ((left.x == right.x) && (left.y == right.y));
	}
	friend ostream& operator<< (ostream &out, const ClassVector &Z) {
		out << "(" << Z.x << "," << Z.y << ")";
		return out;
	}
	friend istream& operator>> (istream &in, ClassVector &Z) {
		in >> Z.x;
		in >> Z.y;

		return in;
	}
};

ClassVector::ClassVector() {
}
ClassVector::ClassVector(double x1,double y1) {
	x = x1;
	y = y1;
}
ClassVector::ClassVector(ClassVector &obj) {
	x = obj.x;
	y = obj.y;
}
ClassVector::~ClassVector() {

}
