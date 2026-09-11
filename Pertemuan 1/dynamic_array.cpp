#include<iostream>
using namespace std;

int main(){
    system("cls");

    int var;
    // int arr[5];



    // for (int i=0; i<5; i++){
    //     cout << "Masukkan nilai elemen ke-" << i+1 << ": ";
    //     cin >> var;
    //     arr[i] = var;
    // }

    // for (int i=0; i<5; i++){
    //     cout << "Nilai elemen ke-" << i+1 << " adalah: " << arr[i] << endl;
    // }

    cout << "Masukkan jumlah array: ";
    cin >> var;

    int* arr = new int[var];

    cout << "Masukkan " << var << " angka: " << endl;
    for (int i=0; i<var; i++){
        cin >> arr[i];
    }
    cout << "Isi array: " << endl;
    for (int i=0; i<var; i++){
        cout << arr[i] << " ";
    }

    delete[] arr; // Menghapus array dinamis untuk menghindari memory leak
    return 0;
}