#include "math.h"
#include "stdio.h"
#include "iostream"
using namespace std;

int main() {
    int a[10], i, n, m;
    cout << "Vvedite kol-vo elementov massiva -> ";
    cin >> n;
    cout << "\n---------------------------------------------------------------" << "\n";

    m = 9;

    for (i = 0; i < n; i++) {
        a[i] = rand() % m;
        cout << a[i] << "  ";
    }

    cout << endl;

    system("pause");
    return 1;
}
