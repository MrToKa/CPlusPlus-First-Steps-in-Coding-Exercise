#include <iostream>

using namespace std;

int main()
{
	int length, width, height;
	cin >> length >> width >> height;

	double percent;
	cin >> percent;

	double volume = (length * width * height) / 1000.0;
	double water = volume - volume * (percent / 100);

	cout << water;
}
