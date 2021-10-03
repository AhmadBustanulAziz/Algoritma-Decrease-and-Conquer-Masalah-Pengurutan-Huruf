/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 3 Oktober 2021
Deskripsi : Jumlah Elemen Maksimum Subarray dengan Pendekatan Devide and Conquer
*/

#include <iostream>

using namespace std;

void Bagi(char Sentence[100], int x, int y) {
    int indexMin, i, temp;

    indexMin = x;
    for (i=x; i<y; i++) {
        if (Sentence[i] < Sentence[indexMin]) {
            indexMin = i;
        }
    }
    temp = Sentence[x];
    Sentence[x] = Sentence[indexMin];
    Sentence[indexMin] = temp;
}

void SelectionSort(char Sentence[100], int x, int y) {
    if (x < y) {
        Bagi(Sentence, x, y);
        SelectionSort(Sentence, x+1, y);
    }
}

int main() {
    int x, y, N;
    char Sentence[100];

    printf("Masukkan panjang kata = ");
    cin >> N;
    printf("Masukkan kata yang dipisahkan dengan spasi\n");
    printf("Contoh : D I P O N E G O R O\n");
    printf("Kata = ");
    for (int i = 0; i < N; i++) {
        cin >> Sentence[i];
    }
    x = 0;
    y = N;
    SelectionSort(Sentence, x, y);

    printf("Hasil kata yang terurut : ");
    for (int j = 0; j < N; j++) {
        cout << Sentence[j];
    }
}




