#include <iostream>

using namespace std;

int main()
{
    int pagesCount, pagesPerHour, days;

    cin >> pagesCount;
    cin >> pagesPerHour;
    cin >> days;

    cout << pagesCount / pagesPerHour / days;
}
