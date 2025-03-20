// WAP to add two matrices of the same size
#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], c[2][2], i, j;

    cout << "Enter the elements of the first matrix: \n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of the second matrix: \n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }

    cout << "The sum of the two matrices is:\n";
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}