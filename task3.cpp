#include <iostream>
using namespace std;
int totalDigits(int number);
main()
{
    int number;
    int count;
    cout << "Enter number:";
    cin >> number;
    count = totalDigits(number);
    cout << "Total number of digits:" <<  count << endl;

}
int totalDigits(int number)
{
    int count = 0;
    while(number > 0)
    {
        count = count +1;
        number = number /10;
    }
    return count;
}

