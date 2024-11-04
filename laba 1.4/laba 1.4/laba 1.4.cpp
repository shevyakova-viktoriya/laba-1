#include <stdio.h>
#include <math.h>
#include <time.h>
#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");
	srand(time(0));

	int n, m, i, j, a[20][20], sum = 0;

	cout << "Введите кол-во строк -> ";
	cin >> n;
	cout << "Введите кол-во столбцов -> ";
	cin >> m;

	cout << "\n";


	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			a[i][j] = rand() % m;
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}

	for (i = 0; i < m; i++) {
		sum += a[0][i];
	}

	cout << "\nСумма элементов строки -> " << sum << "\n";

	system("pause");
	return 1;
}