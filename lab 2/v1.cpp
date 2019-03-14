#include <iostream>

using namespace std;

void printDog() {
	cout << "DOG";
}
void printSum(int a, int b) {
	cout << a << " + " << b << " = " << a + b;
}
void WhatDoYouPrint(void(*fun)()) {
	cout << "Seriously? ";
	fun();
	cout << "???\n";
}
void WhatDoYouPrint(void(*fun)(int,int)) {
	cout << "Seriously? ";
	fun(2,6);
	cout << "???\n";
}
int main() {
	WhatDoYouPrint(printDog);
	WhatDoYouPrint(printSum);
}