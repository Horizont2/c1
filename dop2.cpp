#include <iostream>
using namespace std;

int main() {
    int start, end, sum = 0, i;
    cout << "Введіть початок діапазону: ";
    cin >> start;
    cout << "Введіть кінець діапазону: ";
    cin >> end;
    i = start;
    while (i <= end) {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    }
    cout<<"Сума непарних чисел у діапазоні від "<<start<<" до "<<end<<" дорівнює: "<<sum;

    return 0;
}
