#include <iostream>
using namespace std;
void printFibonacci(int number);
main()
{
    int number;
    cout << "Enter number:";
    cin >> number;
    printFibonacci(number);  
}
void printFibonacci(int number)
{
    int previous = 0;
    int current = 1;
    int next;
    cout << previous << "," << current;
    for(int x= 1; x<=number -2; x=x+1)
    {
        next = previous + current;
        cout << "," << next;
        previous = current;
        current = next;
    }
}