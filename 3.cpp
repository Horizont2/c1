#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1;
    cout<<"Enter number 1: ";
    cin>>num1;
    if (num1>0){
        cout<<"dodatne";
    }
    else if (num1<0){
        cout<<"vidiemne";
    }
    else{
        cout<<"zero";
    }
    return 0;
}
