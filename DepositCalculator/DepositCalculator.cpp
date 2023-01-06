#include <iostream>

using namespace std;

int main()
{
    double deposit, glp;
    int depositMonths;

    cin >> deposit;
    cin >> depositMonths;
    cin >> glp;

    double overhead = deposit * (glp / 100);
    double monthlyInterest = overhead / 12;
    double totalSum = deposit + depositMonths * monthlyInterest;

    cout << totalSum;
}
