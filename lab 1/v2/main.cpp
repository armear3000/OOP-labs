#define _CRT_SECURE_NO_WARNINGS
#include "Complex.h"
#include <string>

int main()
{
	complex z;
	int N;
	FILE *F;
	setlocale(LC_ALL, "Russian");
	
	F = fopen("complex.txt", "r");
	if (!F) exit(3);

	fscanf(F, "%d", &N);
	if (N < 1) exit(2);
	
	complex *p = new complex[N];
	
	fscanf(F, "%lf%lfi", &p[0].re, &p[0].im);
	double max = p[0].abs();
	int pos = 0;

	for (int i = 1; i < N; ++i) {
		fscanf(F, "%lf%lfi", &p[i].re,&p[i].im);
		if (p[i].abs() > max) {
			max = p[i].abs();
			pos = i;
		}
	}
	cout << "Комплексное число с максимальным модулем в массиве: ";
	p[pos].print();

	delete p;
	fclose(F);
}
