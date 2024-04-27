#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number 1 (6 digits): ";
    cin>>num;
    int n1,n2,n3,n4,n5,n6;
    n6=num%10;
    n1=num/100000;
    n5=(num/10)%10;
    n4=(num/100)%10;
    n3=(num%10000)/1000;
    n2=(num%100000)/10000;
    if (num>99999 && num<1000000){
        cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<" "<<n5<<" "<<n6<<endl;;
    }
    else{
        cout<<"Not 6 digits"<<endl;
        return 0;
    }
    if (n1+n2+n3==n4+n5+n6){
        cout<<"happy number"<<endl;
    }
    else{
        cout<<"Not happy"<<endl;
    }
    return 0;
}
