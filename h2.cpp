#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number (4 digits): ";
    cin>>num;
    int n1,n2,n3,n4;
    n1=num/1000;
    n2=(num/100)%10;
    n3=(num/10)%10;
    n4=num%10;
    if (num>999 && num<10000){
        cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
    }
    else{
        cout<<"Not 4 digits"<<endl;
        return 0;
    }
    n1=(num/100)%10;
    n2=num/1000;
    n3=num%10;
    n4=(num/10)%10;
    cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
    return 0;
}
