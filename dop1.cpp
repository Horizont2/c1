#include <iostream>
using namespace std;

int main() {
    char symbol;
    int length, i = 0;
    bool verification;
    cout << "Введіть символ: ";
    cin >> symbol;
    cout << "Введіть довжину лінії: ";
    cin >> length;
    cout << "Виберіть тип лінії (1 - горизонтальна, 0 - вертикальна): ";
    cin >> verification;
    if (verification<0 || verification>=2){
        cout<<"Error";
        return(0);
    }

    if (verification) {
        while (i < length) {
            cout << symbol;
            i++;
        }
    } else {
        while (i < length) {
            i << symbol << endl;
            i++;
        }
    }

    return 0;
}
