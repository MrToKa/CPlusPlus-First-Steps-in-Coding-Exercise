#include <iostream>

using namespace std;

int main()
{
	int nylon, paint, diluent, hours;

	cin >> nylon;
	cin >> paint;
	cin >> diluent;
	cin >> hours;

	double nylonPrice = 1.5;
	double paintPrice = 14.5;
	double diluentPrice = 5.0;
	double bags = 0.4;

	double nylonTotal = (nylon + 2) * nylonPrice;
	double paintTotal = (paint + paint * 0.1) * paintPrice;
	double diluentTotal = diluent * diluentPrice;

	double totalMaterialsPrice = nylonTotal + paintTotal + diluentTotal + bags;

	double workersPay = totalMaterialsPrice * 0.3 * hours;

	cout << workersPay + totalMaterialsPrice;
}
