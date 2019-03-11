#include "Complex.h"

void complex::init(double r, double i) {
	re = r;
	im = i;
}
void complex::add(complex c){
	re += c.re;
	im += c.im;
}
void complex::sub(complex c){
	re -= c.re;
	im -= c.im;
}
void complex::mul(complex c){
	complex z1;
	z1.init(re, im);
	re = (z1.re * c.re) - (z1.im * c.im);
	im = (z1.re * c.im) + (c.re * z1.im);
}
void complex::div(complex c){
	complex z1;
	z1.init(re, im);
	re = (z1.re * c.re + z1.im * c.im) / (c.re*c.re + c.im * c.im);
	im = (z1.im * c.re - z1.re * c.im) / (c.re*c.re + c.im * c.im);
}
void complex::print(){
	if (re) {
		cout << re;
		if (im > 0) cout << "+" << im << "i";
		else if (im < 0) cout << im << "i";
	} else {
		if (im) cout << im << "i"; else cout << '0';
	}
}
double complex::abs(){
	return sqrt(re*re + im*im);
}
