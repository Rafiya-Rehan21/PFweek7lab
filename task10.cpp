#include <iostream>
#include <cmath>
using namespace std;
float calculateMoney(int age, float WMprice, int toyPrice);
main()
{
    int age;
    float WMprice;
    int toyPrice;
    float result;
    cout << "Enter age:";
    cin >> age;
    cout << "Enter price of washing machine:";
    cin >> WMprice;
    cout << "Enter cost of toys:";
    cin >> toyPrice;
    result=calculateMoney(age,WMprice,toyPrice);

}
float calculateMoney(int age, float WMprice, int toyPrice)
{
    float savings =0;
    float total =0;
    float additionalMoney =0;
    float toyCost =0;
    float result;
    for(int count= 1; count <=age; count = count +1)
    {
        if(age %2 ==0)
        {
        count = count +1;
        savings = savings +(count *5);
        toyCost =(age/2) *toyPrice;
        total = savings + toyCost;
        }
        else
        {
        count = count +1;
        savings = savings +(count*5);
        toyCost =(age/2) *toyPrice;
        total = savings + toyCost;
       }
    }
       total = total -(age/2);
       cout << "toatl" << total << endl;
       additionalMoney= abs(total - WMprice);
   
        if(total > WMprice)
        {
            cout << "Yes !Remaining amount is:" << additionalMoney << endl;
        }
        if(total < WMprice)
        {
            cout << "NO ! Money required:" << additionalMoney << endl;
        }      
    return result;
}
