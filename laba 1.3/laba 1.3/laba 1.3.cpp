#include "math.h"
#include "stdio.h"
#include "iostream"
using namespace std;

int main() {
    int* a, i, n;

    cout << "Vvedite kol-vo elementov massiva -> ";
    cin >> n;
    cout << "\n---------------------------------------------------------------" << "\n";

    for (i = 0; i < n; i++) {
        cout << "Vvedite " << i + 1 << " element massiva -> ";
        cin >> a[i];
    }

    cout << "\n---------------------------------------------------------------" << "\n";
    cout << "Massiv -> ";

    for (i = 0; i < n; i++) {
        cout << a[i];
    }

    cout << "\n" << "\n";

    system("pause");
    return 1;
}
