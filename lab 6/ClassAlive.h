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
class Bird : public Alive
{
public:
	void Fly() {
		cout << "My name is " << name << " and I can fly!";
	}
};
class Fish : public Alive
{
public:
	void Swim() {
		cout << "My name is " << name << " and I can swim!";
	}
};
class Animal : public Alive
{
public:
	void Run() {
		cout << "My name is " << name << " and I can run!";
	}
};