#include <iostream>
using namespace std;

class ClassStudent
{
protected:
	char fac[20];
	char spec[30];
	char name[15];
	

public:
	void print() {
		cout << "fac: " << fac << " spec: " << " name: " << name;
	}
	void init(char *f, char *s, char *n);


	ClassStudent();
	ClassStudent(char *f, char *s, char *n);
	~ClassStudent();
};
ClassStudent::ClassStudent()
{
}
ClassStudent::ClassStudent(char *f, char *s, char *n)
{
	strcpy(fac, f);
	strcpy(spec, s);
	strcpy(name, n);
}
ClassStudent::~ClassStudent()
{
}
inline void ClassStudent::init(char * f, char * s, char * n)
{
	strcpy(fac, f);
	strcpy(spec, s);
	strcpy(name, n);
}

class ClassGradStudent : public ClassStudent
{
protected:
	int year;
	char work[30];
public:

	void init(char * f, char * s, char * n, char *w, int y);
	void print() {
		ClassStudent::print();
		cout << " work: " << work << " year: " << year;
	}

	ClassGradStudent();
	ClassGradStudent(char * f, char * s, char * n, char *w, int y);
	~ClassGradStudent();

private:

};
ClassGradStudent::ClassGradStudent(){
}
ClassGradStudent::ClassGradStudent(char * f, char * s, char * n, char * w, int y) : ClassStudent(f, s, n) {
	year = y;
	strcpy(work, w);
}
ClassGradStudent::~ClassGradStudent(){
}
void ClassGradStudent::init(char * f, char * s, char * n, char * w, int y){
	ClassStudent::init(f, s, n);
	strcpy(work, w);
	year = y;
}