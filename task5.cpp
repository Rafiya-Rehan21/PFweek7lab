#include <iostream>
using namespace std;
int digitSum(int number);
main()
{
    int number;
    int sum;
    cout << "Enter number:";
    cin >> number;
    sum = digitSum(number);
    cout << sum;

}
int digitSum(int number)
{
    int sum =0;
    int x;
    while(number >0)
    {
        x = number%10;
        sum = sum + x;
        number = number /10;

    }
    return sum;
}