#include <iostream>
using namespace std;
int checkNumber(int number);
main()
{
    int number;
    int result;
    cout << "Enter a number:";
    cin >> number;
    result = checkNumber(number);
}
int checkNumber(int number)
{
    int result;
    while(number <=0)
    {
        cout << "Enter a number i.e is greater than zero:";
        cin >> number;
    }
    return result;
}