#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1,num2,num3,num4,num5,num6,num7;
    int max_num;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Enter number 3: ";
    cin>>num3;
    cout<<"Enter number 4: ";
    cin>>num4;
    cout<<"Enter number 5: ";
    cin>>num5;
    cout<<"Enter number 6: ";
    cin>>num6;
    cout<<"Enter number 7: ";
    cin>>num7;
    max_num=num1;
    if (num2>max_num){
        max_num=num2;
    }
    if (num3>max_num){
        max_num=num3;
    }
    if (num4>max_num){
        max_num=num4;
    }
    if (num5>max_num){
        max_num=num5;
    }
    if (num6>max_num){
        max_num=num6;
    }
    if (num7>max_num){
        max_num=num7;
    }
    cout<<"max number is: "<<max_num;
    return 0;
}
