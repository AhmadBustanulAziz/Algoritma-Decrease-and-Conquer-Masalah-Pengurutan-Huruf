# Algoritma-Decrease-and-Conquer-Masalah-Pengurutan-Huruf
Problem : 
Mengurutkan huruf yang terdiri dari serangkaian kata berikut : D-I-P-O-N-E-G-O-R-O 
Soal: 
1.	Dengan menggunakan Decrease and Conquer, tuliskan langkah-langkah penyelesaian masalah tersebut 
2.	Buatlah algoritmanya! 
3.	Hitung kompleksitas dari algoritma yang Anda buat!
Jawab
1.	a. Melakukan iterasi untuk mencari huruf dengan urutasn paling rendah
    b. Apabila huruf tersebut rendah dari elemen pertama dalam array, maka masing-masing elemen ditukar posisinya.
    c. Ulangi langkah a dan b sampai mencapai kapasitas array.
2.	
Procedure Pengurutan(input/output Sentence: array[1..10] of character, input x, y: integer)
{Mencari elemen array Sentence dengan abjad terkecil dan menukarnya dengan index pertama}
{I.S. : Sentence[x..y] terdefinisi}
{F.S. : Sentence[x..y] yang berurutan}

Kamus Lokal 
indexMin, i, temp : integer

Algoritma
indexMin = x
i iterate x..y:
	if (Sentence[i] < Sentence[indexMin]) then
		indexMin = i
temp = Sentence[x]
Sentence[x] = Sentence[indexMin]
Sentence[indexMin] = temp;

Procedure SelectionSort(input/output Sentence: array[1..10] of character, input x, y : integer)
{Mengurutkan array dari huruf abjad terkecil ke terbesar}
{I.S.  : Sentence[x…y] terdefinisi}
{F.S. : Sentence[x…y] yang berurutan}

Kamus Lokal
-

Algoritma
If (x <  y) then:
	Pengurutan (Sentence[x,y], x, y);
	SelectionSort(Sentence[x,y], x+1, y);
3.	Kompleksitas Waktu : T(n) = O(n2) 
