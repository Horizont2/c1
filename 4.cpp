#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    if (num1==num2){
        cout<<"rivni";
    }
    else if (num1<num2){
        cout<<num1<<" "<<num2;
    }
    else{
        cout<<num2<<" "<<num1;
    }
    return 0;
}
