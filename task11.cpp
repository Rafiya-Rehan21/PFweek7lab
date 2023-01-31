#include <iostream>
#include <cmath>
using namespace std;
float calculatePrice(float money, int year);
main()
{
    float money;
    int year;
    float result=0;
    cout << "Enter amount of inherited money:";
    cin >> money;
    cout << "Enter year:";
    cin >> year;
    result= calculatePrice(money,year);
}
float calculatePrice(float money, int year)
{
    float spendings =0;
    float oddSpendings =0;
    float result=0;
    int age =18; 
    for(int count =1800; count <=year; count = count +1)
    {
        if(count %2 ==0)
        {
            spendings = 12000.0 ;
            money= money-spendings;
        }
        else
        {
             oddSpendings= (12000.0 +50 *age);
             money =money -oddSpendings;
        }
        age =age+1;
    }
        if(money > 0)
        {
            cout << "Yes ! He will live a care free life and will have" << money << endl;
        }
        if(money < 0)
        {
            cout << "No! The number of dollars he need to survive:" << abs(money) << endl;
        }
    return result;
}

