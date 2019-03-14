#include <iostream>
#include <string>

using namespace std;

class Child
{
public:
	void write();
	void print();
private:
	string name;
	string name2;
	int age;
};
void Child::write() {
	cout << "¬ведите им€ ребенка, фамилию и возраст:" << endl;
	cin >> name >> name2 >> age;
}
void Child::print() {
	cout << name << " " << name2 << " " << age << endl;
}
int main() {
	setlocale(LC_ALL,"russian");

	Child bot1, bot2;

	bot1.write();
	bot2.write();
	bot1.print();
	bot2.print();

	return 0;
}