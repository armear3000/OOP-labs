#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

struct complex {
	double re, im;
	void init(double r, double i);
	void add(complex c);
	void sub(complex c);
	void mul(complex c);
	void div(complex c);
	void print();
	
};

#endif
