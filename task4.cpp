#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
    int number;
    int digit;
    int count;
    cout << "Enter number:";
    cin >> number;
    cout << "Enter digit:";
    cin >> digit;
    count= frequencyChecker(number,digit);
    cout << count << endl;
    
}
int frequencyChecker(int number, int digit)
{
    int x;
    int count =0;
    while(number >0)
    {
        x = number %10;
        number= number/10;
        if(x == digit)
        {
            count = count+1;
        }
       
    }
    return count;
}