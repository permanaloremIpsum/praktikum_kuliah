/*
 <iostream> yaitu sebuah header file yang digunakan untuk input / output
*/
#include <iostream>

/* perintah yang digunakan untuk mendeklarasikan atau memberitahukan 
   kepada compiler kalo kita akan menggunakan semua fungsi/class/file 
   yang terdapat dalam namespace std
*/
using namespace std;

// fungsi utama
int main()
{
	// membuat variabel awal, akhir, i, j, cek
	// yang bertipe integer
	int awal, akhir, i, j, cek;

	// untuk mebersihkan layar
	system("cls");

	// menampilkan tulisan "Masukkan Batas Awal : " dilayar
	cout << "\nMasukkan Batas Awal  : ";
	// menginputkan bilangan awal
	cin >> awal;

	// menampilkan tulisan "Masukkan Batas Akhir : " dilayar
	cout << "Masukkan Batas Akhir : ";
	// menginputkan bilangan akhir
	cin >> akhir;

	// menampilkan tulisan
	// "Bilangan Prima dari 'inputan bilangan awal' -
	// 'inputan bilangan akhir '" di layar
	cout << "\nBilangan Prima dari " << awal << "-" << akhir << " :\n";

	// perulangan pertama digunakan untuk menampilkan
	// range bilangan dari inputan 'awal' sampai 'akhir'.
	// jika nilai 'i' kurang dari nilai 'akhir' maka
	// tambah nilai 'i' dengan 1
	for(i=awal; i<=akhir; i++){
		// untuk memberi nilai default/awal dari variabel cek
		cek = 0;
		// perulangan kedua digunakan untuk menampilkan
		// range bilangan dari inputan 'j' sampai 'i', dan
		// disetiap baris mengandung perulangan dengan batasan j<=i
		// jika nilai 'j' kurang dari nilai 'i' maka
		// tambah nilai 'j' dengan 1
		for(j=1; j<=i; j++){
			// kemudian dicek sisa hasil bagi i' dengan 'j',
			// jika sama dengan 0 maka perintah 
			// didalam if dijalankan
			if(i%j == 0){
				// yaitu yang tadinya nilai dari cek = 0,
				// jadi cek + 1
				cek++;
			}
		}
		// kemudian di cek apabila nilai dari variabel
		// 'cek' sama dengan 2, maka perintah didalam if
		// dijalankan.

		// kenapa 2, karena bilangan prima hanya habis
		// jika dibagi dengan 1 dan bilangan itu sendiri.
		// diperulangan kedua sudah dicek kalau sisa hasil 
		// bagi i' dengan 'j' = 0. maka nilai 'cek' selalu
		// bertambah 1
		if(cek == 2){
			// menampilkan bilangan prima di layar
			cout << i <<" ";
		}
	}
	// digunakan untuk pindah baris
	cout << endl;
	// menyatakan bahwa program berakhir dengan normal
	return 0;
}