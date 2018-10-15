/*
 <iostream> yaitu sebuah header file yang digunakan untuk input / output
 <iomanip> yaitu sebuah header file yang digunakan untuk mengatur tampilan
 layar atau disebut manipulator
*/
#include <iostream>
#include <iomanip>

/* perintah yang digunakan untuk mendeklarasikan atau memberitahukan 
   kepada compiler kalo kita akan menggunakan semua fungsi/class/file 
   yang terdapat dalam namespace std
*/
using namespace std;

//fungsi utama
int main()
{
	// membuat variabel harga dengan nilai 15000
	int harga = 15000;
	// membuat variabel beli, diskon, dan bayar
	int beli, diskon, bayar;

	// untuk mebersihkan layar
	system("cls");

	// untuk menampilkan tulisan di layar
	// escape character \b digunakan untuk menghapus
	// karakter sebelumnya
	cout << "\n   -- Jual Jambu --" << endl << endl;
	cout << "   => Harga Rp " << harga << "/kg\n\n";
	cout << "   Beli  :     kg\b\b\b\b\b\b";
	// menginputkan jumlah yang akan dibeli
	cin >> beli;
	cout << endl << endl;

	// untuk menghitung harga beli
	// yaitu dengan jumlah yg akan dibeli dikali dengan harga
	const int harga_beli = beli * harga;

	// jika jumlah yang akan dibeli kurang dari 0
	// maka perintah yang didalam if dijalankan
	if(beli < 0){
		// menampilkan tulisan di layar
		cout << "   Pembelian harus diatas 0 !!\n";
	}

	// jika jumlah yang akan dibeli lebih dari 0
	// maka perintah yang didalam else dijalankan
	else {
		// kemudian di cek kembali jika jumlah yang
		// akan dibeli lebih dari 10
		// maka perintah yg didalam if dijalankan
		if(beli > 10){
			// maka akan mendapatkan diskon 10%
			diskon = harga_beli * 10 / 100;
			// maka yg harus dibayar adalah
			// harga beli dikurangi diskon
			bayar = harga_beli - diskon;
		}

		// Dan apabila jumlah yang akan dibeli lebih dari 5
		// maka perintah yg didalam else if dijalankan
		else if(beli > 5){
			// maka akan mendapatkan diskon 5%
			diskon = harga_beli * 5 / 100;
			// maka yg harus dibayar adalah
			// harga beli dikurangi diskon
			bayar = harga_beli - diskon;
		}

		// Dan apabila jumlah yang akan dibeli kurang dari 5
		// maka perintah yg didalam else dijalankan
		else{
			// maka tidak mendapatkan diskon
			diskon = 0;
			// Dan yg harus dibayar adalah cukup 
			// harga beli saja
			bayar = harga_beli;
		}

		/*	Untuk menampilkan output dari total pembelian,
			diskon, dan total pembayaran
		   
			setw() atau set field with adalah fungsi manipulator
			yg digunakan untuk mengatur lebar tampilan di layar
		*/
		cout << "   Total Pembelian  : Rp " << setw(10) << harga_beli << endl;
		cout << "   Diskon           : Rp " << setw(10) << diskon << endl;
		cout << "                    _______________ -\n\n";
		cout << "   Total Pembayaran : Rp " << setw(10) << bayar << endl;
	}

	// menyatakan bahwa program berakhir dengan normal
	return 0;
}
