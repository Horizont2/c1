#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double v1, v2, weight;
    double bak = 300;
    cout << "Enter AB: ";
    cin >> v1;
    cout<<"Enter BC: ";
    cin>>v2;
    cout << "Weight of goods: ";
    cin >> weight;
    int vitrata;
    
    if (weight>2000 || v1>300 || v2>300){
        cout << "Unreal" << endl;
        return 0;
    }
    else if (weight <= 500){
        vitrata = 1;
    }
    else if (weight <= 1000){
        vitrata = 4;
    }
    else if (weight <= 1500){
        vitrata = 7;
    }
    else if (weight <= 2000){
        vitrata = 9;
    }
    int vitrataAB = v1 * vitrata;
    int vitrataBC = v2 * vitrata;
    int sumfuel = vitrataAB + vitrataBC;
    if (sumfuel > bak) {
        cout << "Dozapraviti " << sumfuel - bak << "L" << endl;
    }
    else {
        cout << "Total fuel " << sumfuel << " L" << endl;
    }

    return 0;
}
