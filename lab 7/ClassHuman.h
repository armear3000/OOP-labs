#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human() {
	
	}
	Human(string n, string sn, string mn, int a) {
		name = n;
		surname = sn;
		midname = mn;
		age = a;
	}
	virtual void print() {
		cout << name << " " << surname << " " << midname << " " << age << endl;
	}
	~Human() {
	
	}
};
class Student : Human {
private:
	bool on_lesson;
public:
	void print() {
		Human::print();
		cout << "On lesson? ";
		if (on_lesson)
			cout << "- Yes";
		else
			cout << "- No";

	}
};
class Boss : Human {
private:
	int number_of_workers;
public:
	void print() {
		Human::print();
		cout << "Number of workers: " << number_of_workers;
	}
};
