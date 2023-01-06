#include <iostream>

using namespace std;

int main()
{
	double chickenMenu = 10.35;
	double fishMenu = 12.40;
	double vegMenu = 8.15;
	double delivery = 2.5;

	int chickenOrders, fishOrders, vegOrders;

	cin >> chickenOrders;
	cin >> fishOrders;
	cin >> vegOrders;

	double chickenPrice = chickenOrders * chickenMenu;
	double fishPrice = fishOrders * fishMenu;
	double vegPrice = vegOrders * vegMenu;

	double totalMenusPrice = chickenPrice + fishPrice + vegPrice;
	double dessertPrice = totalMenusPrice * 0.2;

	double totalPrice = totalMenusPrice + dessertPrice + delivery;

	cout << totalPrice;
}
