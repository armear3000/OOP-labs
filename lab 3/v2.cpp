#include <iostream>
#include <string>

using namespace std;

class Tiles
{
public:
	string brand;
	int size_h, size_w;
	int price;

	void init(string brand, int size_h, int size_w, int price);
	void getData();
};
void Tiles::init(string brand1, int size_h1, int size_w1, int price1)
{
	brand = brand1;
	size_h = size_h1;
	size_w = size_w1;
	price = price1;
}
void Tiles::getData() {
	cout << "Brand: " << brand << " size: " << size_h << "x" << size_w << " price: " << price << endl;
	
}
int main() {
	setlocale(LC_ALL,"russian");

	Tiles bot1, bot2;
	bot1.init("br1", 10,10,200);
	bot2.init("br2", 20, 20, 300);

	bot1.getData();
	bot2.getData();

	return 0;
}