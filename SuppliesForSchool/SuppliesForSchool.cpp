#include <iostream>

using namespace std;

int main()
{
	int pens, markers, cleaning, discount;

	cin >> pens;
	cin >> markers;
	cin >> cleaning;
	cin >> discount;

	double pensPrice = pens * 5.80;
	double markersPrice = markers * 7.2;
	double cleaningPrice = cleaning * 1.2;

	double totalPrice = pensPrice + markersPrice + cleaningPrice;

	double paid = totalPrice - (totalPrice * discount / 100);

	cout << paid;
}
