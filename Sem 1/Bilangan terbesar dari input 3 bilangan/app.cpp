/*
 #include yaitu prepocessor atau proses yang dilakukan sebelum program di kompilasi
 sedangkan yang ada didalam <..> ,, seperti <iostream>, <cmath> adalah sebuah header file

 <iostream> yaitu sebuah header file yang digunakan untuk input / output
 <cmath> yaitu sebuah header file yang digunakan untuk operasi matematika
*/
#include <iostream>

/* perintah yang digunakan untuk mendeklarasikan atau memberitahukan 
   kepada compiler kalo kita akan menggunakan semua fungsi/class/file 
   yang terdapat dalam namespace std
*/
using namespace std;

//fungsi utama program
int main(){
	// membuat variabel angka1, angka2, angka3, dan max
	// yang bertipedata integer
	int angka1, angka2, angka3, max;
	// menampilkan tulisan "Masukkan Angka : " di layar
	cout << "Masukkan Angka    : ";
	// input angka1, angka2, dan angka3
	// dalam 1 baris dan dipisahkan dengan spasi
	cin >> angka1 >> angka2 >> angka3;

	/* kondisi jika nilai dari 'angka1' lebih besar dari 'angka2'
	   maka pernyataan didalam if dijalankan
	*/ 
	if(angka1 > angka2)
		// maka nilai dari 'max' sama dengan 'angka1'
		max = angka1;

	/* kondisi jika nilai dari 'angka1' lebih kecil dari 'angka2'
	   maka pernyataan didalam else dijalankan
	*/ 
	else
		// maka nilai dari 'max' sama dengan 'angka2'
		max = angka2;

	/* kondisi jika nilai dari 'angka3' lebih besar dari 'max'
	   maka pernyataan didalam if dijalankan
	*/ 
	if(angka3 > max)
		// maka nilai dari 'max' sama dengan 'angka3'
		max = angka3;

	// menampilkan bilangan terbesar dari 3 bilangan
	// yang diinputkan tadi
	cout<<"\nBilangan Terbesar : "<< max;

	// menyatakan bahwa program berakhir dengan normal
	return 0;
}