#include <iostream>
using namespace std;

int main() {
    int start, end, sum = 0, potochna;
    cout << "Введіть початок діапазону: ";
    cin >> start;
    cout << "Введіть кінець діапазону: ";
    cin >> end;
    potochna = start;
    while (potochna <= end) {
        if (potochna % 2 != 0) {
            sum += potochna;
        }
        potochna++;
    }
    cout<<"Сума непарних чисел у діапазоні від "<<start<<" до "<<end<<" дорівнює: "<<sum;

    return 0;
}
