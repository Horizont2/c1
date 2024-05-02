#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1, i = 1;
    cout << "Введіт ціле число n: ";
    cin >> n;
    if (n < 0) {
        cout << "Помилка. Введене число менше за 0!" << endl;
        return 0;
    }
    while (i <= n) {
        factorial *= i;
        i++;
    }
    cout << "Факторіал числа " << n << " дорівнює: " << factorial;

    return 0;
}
