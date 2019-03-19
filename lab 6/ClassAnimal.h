#include <iostream>
using namespace std;
class Alive
{
protected:
	char *name;
public:
	Alive(char * n) {
		name = n;
	}
	~Alive() {
	}
};
class Animal : public Alive
{
public:
	void Run() {
		cout << "My name is " << name << " and i can run!";
	}
};
class Dog : public Animal {
	void sound() {
		Animal::Run();
		cout << " Guf-Guf!";
	}
};
class Cat : public Animal {
	void sound() {
		Animal::Run();
		cout << " Meow...";
	}
};