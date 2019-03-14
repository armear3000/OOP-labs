#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int a[10];
const int N = 10;

void Swap(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}

typedef void (*MagicFun)(int *arr);

void finvert(int *arr) {
	for (int i = 0; i < N/2; i++) {
		Swap(arr[i],arr[N - i - 1]);
	}
}
void fsortUp(int *arr) {	
	for (int g = 0; g < N - 1; g++) {
		for (int i = 0; i < N - g - 1; i++) {
			if (arr[i] > arr[i + 1]) Swap(arr[i], arr[i + 1]);
		}	
	}
}
void fsortDown(int *arr) {
	for (int g = 0; g < N - 1; g++) {
		for (int i = 0; i < N - g - 1; i++) {
			if (arr[i] < arr[i + 1]) Swap(arr[i], arr[i + 1]);
		}
	}
}
MagicFun MainFun(int *arr) {
	void(*fun)(int *arr2);
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}
	cout << "summ = " << sum << "\n";
	if (sum == arr[0]) {
		fun = finvert;
	}
	else if (sum > arr[0]) {
		fun = fsortUp;
	}
	else {
		fun = fsortDown;
	}
	return fun;
}
int main() {
	srand(time(NULL));
	void(*function)(int *arr);

	for (int i = 0; i < N; i++) {
		a[i] = rand() % 101 - 50;
	}

	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
	function = MainFun(a);
	function(a);

	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
}