#include <iostream>

using namespace std;

int main()
{
	int annualPrice;
	cin >> annualPrice;

	double snickers = annualPrice * 0.6;
	double suit = snickers * 0.8;
	double ball = suit / 4;
	double accessories = ball / 5;

	double total = annualPrice + snickers + suit + ball + accessories;

	cout << total;
}
