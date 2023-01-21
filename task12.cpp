#include <iostream>
using namespace std;
void printCounting(int number);
main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    printCounting(number);

}
void printCounting(int number)
{
    for(int count =1 ; count <= number; count = count +1)
    {
        cout << "\t" << count << endl;
    }
}
