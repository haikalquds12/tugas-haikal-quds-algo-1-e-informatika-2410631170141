#include <iostream>
using namespace std;

int main() {
    int n;


    cout << "Masukkan nilai: ";
    cin >> n;


    int arr[n];


    cout << "Masukkan " << n << " nilai:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Nilai tertinggi: " << maxVal << endl;


    int searchValue;
    cout << "Masukkan nilai untuk diperiksa: ";
    cin >> searchValue;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            cout << "nilai " << searchValue << " ditemukan indeks" << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "nilai " << searchValue << " tidak ditemukan." << endl;
    }

    return 0;
}
