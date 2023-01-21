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
    cout << result << endl;
}
float calculatePrice(float money, int year)
{
    int  modyear;
    int age= 0;
    float spendings =0;
    float oddSpendings =0;
    float total =0;
    float remaining =0;
    float result=0;
    modyear = year %10;
    age = modyear +18;
    for(int count =1; count <=modyear; count = count +1)
    {
        if(year %2 ==0)
        {
            count = count +1;
            spendings = 12000.0 *count;
        }
        oddSpendings= 12000.0 +(50 *age);
    }
        total = spendings + oddSpendings;
        remaining =abs(money -total);
        if(money > total)
        {
            cout << "Yes ! He will live a care free life and will have" << remaining << endl;
        }
        if(money < total)
        {
            cout << "No! The number of dollars he need to survive:" << remaining << endl;
        }
    return result;

}

