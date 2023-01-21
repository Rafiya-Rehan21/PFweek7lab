#include <iostream>
using namespace std;
void printPercentage(float number);
main()
{   
    float number =0;
    printPercentage(number);
}
void printPercentage(float number)
{
    int n;
    float P1 =0;
    float P2 =0;
    float P3 =0;
    float P4 =0;
    float P5 =0;
    float percent1 =0;
    float percent2 =0;
    float percent3 =0;
    float percent4 =0;
    float percent5 =0;
    cout << "Enter any number:";
    cin >> n;
    for(int count =1; count <=n; count = count +1)
    {
        cout << "Enter number:";
        cin >> number;
        if(number >= 1 && number <= 199)
        {
            P1 = P1 +1;
        }
        if(number >=200 && number <= 399)
        {
            P2 = P2 +1;
        }
        if(number >=400 && number <= 599)
        {
            P3 = P3 +1;
        }
        if(number >= 600 && number <= 799)
        {
            P4 = P4 +1;
        }
        if(number >= 800 && number <= 1000)
        {
            P5 = P5 +1;
        }
     
    }
    percent1 = (P1/n) *100;
    percent2 = (P2/n) *100;
    percent3 = (P3/n) *100;
    percent4 = (P4/n) *100;
    percent5 = (P5/n) *100;
    cout << percent1 << "%" << endl;
    cout << percent2 << "%" << endl;
    cout << percent3 << "%" << endl;
    cout << percent4 << "%" << endl;
    cout << percent5 << "%" << endl;
}    