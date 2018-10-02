/*
 * program: tugas1.cpp
 * oleh   : Dede Permana (18.11.1825) IF-01
 * 2018
 
 * Menghitung luas dan keliling
 * bangun datar segitiga dan lingkaran
 
*/

/*
 #include yaitu prepocessor atau proses yang dilakukan sebelum program di kompilasi
 sedangkan yang ada didalam <..> ,, seperti <iostream>, <cmath> adalah sebuah header file

 <iostream> yaitu sebuah header file yang digunakan untuk input / output
 <cmath> yaitu sebuah header file yang digunakan untuk operasi matematika
*/
#include <iostream>
#include <cmath>

/* perintah yang digunakan untuk mendeklarasikan atau memberitahukan 
   kepada compiler kalo kita akan menggunakan semua fungsi/class/file 
   yang terdapat dalam namespace std
*/
using namespace std;

//fungsi utama program
int main(){
	//buat variabel pilih yang bertipe int untuk nanti dijadikan sebagai kondisi
	int pilih;
	//buat variabel exit yang bertipe char untuk nanti dijadikan sebagai kondisi
	char exit;
	//buat variabel jari-jari, phi, alas, dan tinggi yang bertipe data double
	double r, alas, tinggi;
	const double phi = 3.14;

	/* menggunakan fungsi goto yaitu untuk jump statement
	   Jump statemen fungsinya untuk memaksa agar eksekusi statemen 
	   berjalan sesuai urutan yang kita inginkan, yaitu dengan cara meloncat 
	   dari statemen yang satu ke statemen yang lain
	*/

	/* membuat label dengan nama 'labelMenu' dimana Label di dalam kode program 
	   berfungsi untuk menyatakan lokasi yang akan dituju
	*/
	labelMenu:
		// cls adalah singkatan dari "clear the screen" 
		// jadi artinya untuk membersihkan layar
		system("CLS");
		//Menampilkan menu daftar bangun datar
		cout << " Pilihan Bangun Datar :\n"
			 << " ------------------------\n"
			 << " | 1 - Lingkaran.       |\n"
			 << " | 2 - Segitiga.        |\n"
			 << " | 3 - Keluar Program.  |\n"
			 << " ------------------------\n"
			 << " Masukkan pilihan anda: ";
		cin >> pilih; //menginputkan pilihan
	
	/* kondisi jika nilai 'pilih' itu sama dengan 1, maka pernyataan yang
	   didalam if dijalankan
	*/ 
	if(pilih == 1){
		// cls adalah singkatan dari "clear the screen" 
		// jadi artinya untuk membersihkan layar
		system ("CLS");	
		//Bangun datar lingkaran
		cout << "Bangun Datar Lingkaran" << endl;
		cout << "jari-jari          : ";
		cin >> r; //untuk menginputkan jari-jari	
		
		//rumus untuk mencari keliling lingkaran
		const double kel_ling = 2 * phi * r;
		// rumus untuk mencari luas lingkaran
		// 'pow' adalah fungsi dari c++ untuk menghitung pangkat
		const double luas_ling = phi * pow(r, 2);
		
		//menampilkan hasil dari keliling lingkaran
		cout << "Keliling Lingkaran : " << kel_ling << endl;
		//menampilkan hasil dari luas lingkaran
		cout << "Luas Lingkaran     : " << luas_ling << endl;
		
		/* membuat label dengan nama 'LabelExit1' dimana Label di dalam  
		   kode program berfungsi untuk menyatakan lokasi yang akan dituju
		*/
		labelExit1:
			// tampilan untuk menanyakan apakah ingin keluar dari program
			// atau ingin mengulangi perhitungan
			cout << "\nIngin keluar dari program ? ";
			cout << "\nN = Kembali ke menu awal" << endl;
			cout << "Y = keluar dari program" << endl;
			cin>>exit;//untuk menginputkan value dari 'exit' yang berupa char

		/* kondisi jika nilai 'exit' itu sama dengan 'N' atau 'n', maka 
		   pernyataan yang didalam if dijalankan
		*/ 
		if(exit=='N' || exit=='n'){
			goto labelMenu; //maka tampilan layar akan kembali ke menu awal
		}

		/* kondisi jika nilai 'exit' itu sama dengan 'Y' atau 'y', maka 
		   pernyataan yang didalam else if dijalankan
		*/ 
		else if (exit=='Y' || exit=='y'){
			// return 0 dalam main() menyatakan bahwa program berakhir dengan normal
			return 0;
		}

		/* kondisi jika nilai 'exit' itu tidak ada satupun yang terpenuhi
		   maka akan menjalankan pernyataan yang didalam else
		*/
		else {
			// maka tampilan layar akan menampilkan lagi yang ada di labelExit1
			goto labelExit1;
		}
	}

	/* kondisi jika nilai 'pilih' itu sama dengan 2, maka pernyataan yang
	   didalam else if dijalankan
	*/
	else if(pilih == 2){
		/* membuat label dengan nama 'labelSegitiga' dimana Label di dalam  
		   kode program berfungsi untuk menyatakan lokasi yang akan dituju
		*/
		labelSegitiga:
			// cls adalah singkatan dari "clear the screen" 
			// jadi artinya untuk membersihkan layar
			system ("CLS");
			// menampilkan tampilan menu bangun datar segitiga
			cout << " Pilihan bangun datar Segitiga :\n\n"
				 << " ------------------------------\n"
				 << " | 1 - Segitiga Sama Kaki.    |\n"
				 << " | 2 - Segitiga Siku-Siku.    |\n"
				 << " | 3 - Kembali ke Menu Awal.  |\n"
				 << " ------------------------------\n"
			     << " Masukkan pilihan anda: ";
			cin >> pilih;// menginputkan pilihan

		/* kondisi jika nilai 'pilih' itu sama dengan 1, maka pernyataan yang
		   didalam if dijalankan
		*/
		if (pilih == 1) {
			// cls adalah singkatan dari "clear the screen" 
			// jadi artinya untuk membersihkan layar
			system ("CLS");
			//Bangun datar Segitiga Sama Kaki
			cout << "Bangun Datar Segitiga Sama Kaki" << endl;
			cout << "alas               : ";
			cin >> alas; //untuk menginputkan alas
			cout << "tinggi             : ";
			cin >> tinggi; //untuk menginputkan tinggi
			
			//untuk menghitung alas yang akan digunakan untuk mencari sisi miring
			const double a = 0.5 * alas;
			//rumus untuk menghitung panjang sisi miring segitiga
			//hypot adalah fungsi dari c++ untuk menghitung sisi miring segitiga
			const double sisi_miring   = hypot (a, tinggi);
			//rumus untuk menghitung keliling segitiga
			const double kel_segitiga  = alas + tinggi + sisi_miring;
			//rumus untuk menghitung luas segitiga
			const double luas_segitiga = 0.5 * alas * tinggi;

			//menampilkan hasil dari sisi miring
			cout << "Sisi Miring        : " << sisi_miring << endl;
			//menampilkan hasil dari keliling segitiga
			cout << "Keliling Segitiga  : " << kel_segitiga << endl;
			//menampilkan hasil dari luas segitiga
			cout << "Luas Segitiga      : " << luas_segitiga << endl;

			/* membuat label dengan nama 'LabelExit2' dimana Label di dalam  
			   kode program berfungsi untuk menyatakan lokasi yang akan dituju
			*/
			labelExit2:
				// tampilan untuk menanyakan apakah ingin keluar dari program
				// atau ingin mengulangi perhitungan
				cout << "\nIngin keluar dari program ? ";
				cout << "\nN = Kembali ke menu awal" << endl;
				cout << "Y = keluar dari program" << endl;
				cin>>exit;//untuk menginputkan value dari 'exit' yang berupa char

			/* kondisi jika nilai 'exit' itu sama dengan 'N' atau 'n', maka 
			   pernyataan yang didalam if dijalankan
			*/ 
			if(exit=='N' || exit=='n'){
				//maka tampilan layar akan kembali ke pilihan bangun datar segitiga
				goto labelSegitiga;
			}

			/* kondisi jika nilai 'exit' itu sama dengan 'Y' atau 'y', maka 
			   pernyataan yang didalam else if dijalankan
			*/ 
			else if (exit=='Y' || exit=='y'){
				// return 0 dalam main() menyatakan bahwa program berakhir dengan normal
				return 0;
			}

			/* kondisi jika nilai 'exit' itu tidak ada satupun yang terpenuhi
			   maka akan menjalankan pernyataan yang didalam else
			*/
			else {
				// maka tampilan layar akan menampilkan lagi yang ada di labelExit2
				goto labelExit2;
			}
		}

		/* kondisi jika nilai 'pilih' itu sama dengan 2, maka pernyataan yang
		   didalam else if dijalankan
		*/
		else if (pilih == 2) {
			// cls adalah singkatan dari "clear the screen" 
			// jadi artinya untuk membersihkan layar
			system ("CLS");
			//Bangun datar Segitiga Siku-siku
			cout << "Bangun Datar Segitiga Siku-Siku" << endl;
			cout << "alas               : ";
			cin >> alas; //untuk menginputkan alas
			cout << "tinggi             : ";
			cin >> tinggi; //untuk menginputkan tinggi
			
			//rumus untuk menghitung panjang sisi miring segitiga
			//hypot adalah fungsi dari c++ untuk menghitung sisi miring segitiga
			const double sisi_miring   = hypot (alas, tinggi);
			//rumus untuk menghitung keliling segitiga
			const double kel_segitiga  = alas + tinggi + sisi_miring;
			//rumus untuk menghitung luas segitiga
			const double luas_segitiga = 0.5 * alas * tinggi;

			//menampilkan hasil dari sisi miring
			cout << "Sisi Miring        : " << sisi_miring << endl;
			//menampilkan hasil dari keliling segitiga
			cout << "Keliling Segitiga  : " << kel_segitiga << endl;
			//menampilkan hasil dari luas segitiga
			cout << "Luas Segitiga      : " << luas_segitiga << endl;

			/* membuat label dengan nama 'LabelExit3' dimana Label di dalam  
			   kode program berfungsi untuk menyatakan lokasi yang akan dituju
			*/
			labelExit3:
				// tampilan untuk menanyakan apakah ingin keluar dari program
				// atau ingin mengulangi perhitungan
				cout << "\nIngin keluar dari program ? ";
				cout << "\nN = Kembali ke menu awal" << endl;
				cout << "Y = keluar dari program" << endl;
				cin>>exit;

			/* kondisi jika nilai 'exit' itu sama dengan 'N' atau 'n', maka 
			   pernyataan yang didalam if dijalankan
			*/ 
			if(exit=='N' || exit=='n'){
				//maka tampilan layar akan kembali ke pilihan bangun datar segitiga
				goto labelSegitiga;
			}

			/* kondisi jika nilai 'exit' itu sama dengan 'Y' atau 'y', maka 
			   pernyataan yang didalam else if dijalankan
			*/ 
			else if (exit=='Y' || exit=='y'){
				// return 0 dalam main() menyatakan bahwa program berakhir dengan normal
				return 0;
			}

			/* kondisi jika nilai 'exit' itu tidak ada satupun yang terpenuhi
			   maka akan menjalankan pernyataan yang didalam else
			*/
			else {
				// maka tampilan layar akan menampilkan lagi yang ada di labelExit3
				goto labelExit3;
			}
		}

		/* kondisi jika nilai 'pilih' itu sama dengan 3, maka pernyataan yang
		   didalam else if dijalankan
		*/
		else if (pilih == 3){
			// maka tampilan layar akan kembali ke menu awal
			goto labelMenu;
		}

		/* kondisi jika nilai 'pilih' itu tidak ada satupun yang terpenuhi
		   maka akan menjalankan pernyataan yang didalam else
		*/
		else {
			cout << "\nPilihan yang anda masukkan salah !!!!\n";
			//maka tampilan layar akan kembali ke pilihan bangun datar segitiga
			goto labelSegitiga;
		}
	}

	else if(pilih == 3){
		// return 0 dalam main() menyatakan bahwa program berakhir dengan normal
		return 0;
	}

	else{
		cout << "\nPilihan yang anda masukkan salah !!!!\n";
		// maka tampilan layar akan kembali ke menu awal
		goto labelMenu;
	}
	
	// return 0 dalam main() menyatakan bahwa program berakhir dengan normal
	return 0;
}
