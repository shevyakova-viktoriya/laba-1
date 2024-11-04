#include "math.h"
#include "stdio.h"
#include "iostream"
using namespace std;

int main() {
    int a[10], i, n;
    int max = 0, min = 0, raznica = 0, summa = 0;
    float sredzn = 0;
    min++;
    cout << "Vvedite kol-vo elementov massiva -> ";
    cin >> n;
    cout << "\n---------------------------------------------------------------" << "\n";

    for (i = 0; i < n; i++) {
        cout << "Vvedite element massiva -> ";
        cin >> a[i];
    }

    for (i = 0; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
        };
        if (max < a[i]) {
            max = a[i];
        }
    }

    for (i = 0; i < n; i++) {
        summa = a[i] + summa;
    }

    sredzn = float(summa) / float(n);

    raznica = max - min;

    cout << "---------------------------------------------------------------";
    cout << "\nRaznica mejdu max u min elementami -> " << raznica << "\n";
    cout << "\nSrednee znachenie -> " << sredzn << "\n";


    system("pause");
    return 1;
}
