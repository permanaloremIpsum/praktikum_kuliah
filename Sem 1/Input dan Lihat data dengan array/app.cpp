/*
 <iostream> yaitu sebuah header file yang digunakan untuk input / output
 <iomanip> yaitu sebuah header file yang digunakan untuk mengatur tampilan
 layar atau disebut manipulator
 <string> yaitu sebuah header file yang digunakan untuk memanggil string
*/
#include <iostream> 
#include <iomanip>  
#include <string>


/* perintah yang digunakan untuk mendeklarasikan atau memberitahukan 
   kepada compiler kalo kita akan menggunakan semua fungsi/class/file 
   yang terdapat dalam namespace std
*/
using namespace std;

//fungsi utama
int main()
{
	// membuat variabel constan MAX_SIZE yg bertipe integer
	// dengan value 50
	const int MAX_SIZE = 50;
	// membuat variabel count yg bertipe integer dengan value 0
	int count = 0;
	// membuat variabel x yang bertipe integer dengan value 0
	int x = 0;
	// membuat variabel pilih dan urut yg bertipe integer
	int pilih, urut;		

	// membuat array dengan nama n_barang yg bertipe string
	// dengan ukuran array value dari MAX_SIZE
	string n_barang[MAX_SIZE];
	// membuat array dengan nama h_barang yg bertipe string
	// dengan ukuran array value dari MAX_SIZE
	int    h_barang[MAX_SIZE];

	/* menggunakan fungsi goto yaitu untuk jump statement
	   Jump statemen fungsinya untuk memaksa agar eksekusi statemen 
	   berjalan sesuai urutan yang kita inginkan, yaitu dengan cara meloncat 
	   dari statemen yang satu ke statemen yang lain
	*/

	/* membuat label dengan nama 'labelMenu' dimana Label di dalam kode program 
	   berfungsi untuk menyatakan lokasi yang akan dituju
	*/
	labelMenu:
		// untuk membersihkan layar
		system("cls");
		// untuk menampilkan tulisan " Menu :" di layar
		cout << " Menu :\n"
			 // untuk menampilkan tulisan "-----------------------" di layar
			 << " -----------------------\n"
			 // untuk menampilkan tulisan "| 1 | Tambah Data     |" di layar
			 << " | 1 | Tambah Data     |\n"
			 // untuk menampilkan tulisan "| 2 | Lihat Data      |" di layar
			 << " | 2 | Lihat Data      |\n"
			 // untuk menampilkan tulisan "| 3 | Keluar Program  |" di layar
			 << " | 3 | Keluar Program  |\n"
			 // untuk menampilkan tulisan "-----------------------" di layar
			 << " -----------------------\n"
			 // untuk menampilkan tulisan "Masukkan pilihan anda: " di layar
			 << " Masukkan pilihan anda: ";
		// menginputkan pilihan
		cin >> pilih;

	// pernyataan switch digunakan untuk mengevaluasi pilih atau
	// operasi percabangan switch digunakan untuk memilih menu
	switch(pilih)
	{
		// jika pilihan yg dimasukkan 1 maka
		// pernyataan di dalam case 1 dijalankan
		case 1:
			// untuk membersihkan layar
			system("cls");
			// digunakan agar getline di fungsi berikutnya bisa diisi value
			cin.ignore();
			// memberikan value dari variabel x dengan variabel count
			x = count;
			// memberikan value dari variabel urut dengan 0
			urut = 0;

			// perulangan yg digunakan untuk menginput data barang
			for(int i = x; i != MAX_SIZE; ++i)
			{
				// memberikan value dari variabel count dengan i
				count = i;
				// untuk setiap perulangan urut selalu tambah 1
				urut++;
				// membuat variabel tmp_n_barang yg bertipe string
				string tmp_n_barang;
				// membuat variabel tmp_h_barang yg bertipe string
				string tmp_h_barang;
				
				// untuk membersihkan layar
				system("cls");
				cout << "\nData ke-" << urut << endl;
				// untuk menampilkan tulisan " Nama : " di layar
				cout << "Nama : ";
				// menginputkan tmp_n_barang dan dipisahkan dengan spasi
				getline(cin, tmp_n_barang);
				
				// kemudian di cek apabila tmp_n_barang diinputkan dengan
				// karakter kosongan maka pernyataan didalam if dijalankan
				if(tmp_n_barang == "")
					// digunakan agar perulangan berhenti
					break;
				
				// memberikan value dari array n_barang[i] dengan tmp_n_barang
				n_barang[i] = tmp_n_barang;
				
				// untuk menampilkan tulisan " Harga : " di layar
				cout << "Harga: ";
				// menginputkan tmp_h_barang dan dipisahkan dengan spasi
				getline(cin, tmp_h_barang);
				// memberikan value dari array h_barang[i] dengan tmp_h_barang
				// fungsi stoi yaitu konversi dari type string ke type integer
				h_barang[i] = stoi(tmp_h_barang);
			}
			// maka tampilan layar akan kembali ke pilihan menu awal "labelMenu"
			goto labelMenu;

		// jika pilihan yg dimasukkan 2 maka
		// pernyataan di dalam case 2 dijalankan
		case 2:
			// untuk membersihkan layar
			system("cls");
			// untuk menampilkan tulisan "-----------------------" di layar
			cout << "\n-------------------------\n";
			// untuk menampilkan tulisan NO NAMA HARGA
			// setw() atau set field with adalah fungsi manipulator
			// yg digunakan untuk mengatur lebar tampilan di layar
			cout << setw(3) << "NO" << setw(15) << "NAMA" << setw(7) << "HARGA";
			// untuk menampilkan tulisan "-----------------------" di layar
			cout << "\n-------------------------\n";

			// perulangan yg digunakan untuk menampilkan data yg telah diinputkan
			for(int i = 0; i != count; ++i)
			{
				// untuk menampilkan NO
				// setw untuk mengatur lebar tampilan
				cout << setw(3)  << i + 1;
				// untuk menampilkan value n_barang[i]
				// setw untuk mengatur lebar tampilan
				cout << setw(15) << n_barang[i];
				// untuk menampilkan value h_barang
				//setw untuk mengatur lebar tampilan
				cout << setw(7)  << h_barang[i];
				// endl untuk berpindah ke baris berikutnya
				cout << endl;
			}
			// digunakan untuk menghentikan program sementara dan
			// menampilkan pesan "Press any key to continue..." 
			// hingga user menekan sembarang tombol
			system("PAUSE");
			// maka tampilan layar akan kembali ke pilihan menu awal "labelMenu"
			goto labelMenu;

		// jika pilihan yg dimasukkan 3 maka
		// pernyataan di dalam case 3 dijalankan
		case 3:
			// menyatakan bahwa program berakhir dengan normal
			return 0;

		// jika pilihan yg dimasukkan tidak sama dengan case sebelumnya
		// maka pernyataan di dalam default dijalankan
		default:
			// untuk membersihkan layar
			system("CLS");
			// untuk menampilkan tulisan 
			// "Pilihan yang dimasukkan tidak terdaftar!!" dilayar
			cout << "Pilihan yang dimasukkan tidak terdaftar!!\n";
			// digunakan untuk menghentikan program sementara dan
			// menampilkan pesan "Press any key to continue..." 
			// hingga user menekan sembarang tombol
			system("PAUSE");
			// maka tampilan layar akan kembali ke pilihan menu awal "labelMenu"
			goto labelMenu;
	}
	// menyatakan bahwa program berakhir dengan normal
	return 0;
}