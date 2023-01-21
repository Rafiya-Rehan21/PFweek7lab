#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2 , int gcd);
main()
{
    int number1;
    int number2;
    int gcd;
    int lcm;
    cout << "Enter 1st number:";
    cin >> number1;
    cout << "Enter 2nd number:";
    cin >> number2;
    gcd =calculateGCD(number1,number2);
    cout << "GCD is:" << gcd << endl;
    lcm =calculateLCM(number1, number2, gcd);
    cout << "LCM is:" << lcm << endl;
    
}
int calculateGCD(int number1, int number2)
{
    int count;
    int gcd;
    for(int count =1; count <= number1 ; count = count +1)
    {
        if(number1 % count ==0 && number2 % count ==0)
        {
            gcd = count;
        }
    }
    return gcd;
}
int calculateLCM(int number1, int number2, int gcd)
{
    int multiply;
    int lcm;
    multiply = number1 * number2;
    lcm = multiply / gcd;
    return lcm;
}