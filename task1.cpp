#include <iostream>
using namespace std;
void printTable(int number);
main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    printTable(number);
}
void printTable(int number)
{
for (int x=1; x <=10; x = x+1)
    {
        int multiple= number *x;
        cout << number << "*" << x  << "=" << multiple <<  endl;
    }
}