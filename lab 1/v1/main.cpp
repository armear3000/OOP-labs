#include "Complex.h"

complex z1, z2;
int main()
{
	setlocale(LC_ALL, "Russian");
	char a;
	for(;;) {
		system("cls");
		cout << "1.Калькулятор\n" << "2.Выйти";
		a = _getch();
		switch (a)
		{
		case '1':
			system("cls");
			cout << "Введите действительное и мнимое первого числа: ";
			cin >> z1.re >> z1.im;
			cout << "Введите действительное и мнимое второго числа: ";
			cin >> z2.re >> z2.im;
			cout << "Что сделать?\n1.Сложить\n2.Вычесть\n3.Умножить\n4.Делить\n";
			a = _getch();
			switch (a){
			case '1': z1.add(z2); break;
			case '2': z1.sub(z2); break;
			case '3': z1.mul(z2); break;
			case '4': z1.div(z2); break;
			default: break;
			}
			cout << "Результат: "; z1.print();
			cout << "\nДля продолжения нажмите любую клавишу";
			_getch();
			break;
		case '2':
			exit(1);
			break;
		default:
			break;
		}
	}
}
