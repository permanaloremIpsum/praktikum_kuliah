/*
	Nama     : Dede Permana (18.11.1825)

	Kelompok : 1. Dede Permana (18.11.1825)
	           2. Rizki Hernawan Wicaksono (18.11.1847)
	           3. Putut Yusri Bahtiar (18.11.1848)
*/

/*
 <iostream> yaitu sebuah header file yang digunakan untuk input / output
 <Windows.h> yaitu sebuah header file untuk memanggil perintah-perintah 
             yang ada pada windows
 <conio.h> yaitu sebuah header file yg digunakan untuk membuat teks 
           antarmuka pengguna pada compiler berbasis MS-DOS
*/
#include <iostream>
#include <Windows.h>
#include <conio.h>

/* perintah yang digunakan untuk mendeklarasikan atau memberitahukan 
   kepada compiler kalau kita akan menggunakan semua fungsi/class/file 
   yang terdapat dalam namespace std
*/
using namespace std;

// fungsi utama
int main()
{
	// membuat variabel constan P yg bertipe integer
	// dengan value 50
	const int P = 50;
	// membuat variabel constan T yg bertipe integer
	// dengan value 25
	const int T = 25;
	
	// membuat variabel x yg bertipe integer
	// dengan value P dibagi 2
	int x = P / 2;
	// membuat variabel y yg bertipe integer
	// dengan value T dibagi 2
	int y = T / 2;
	
	// membuat array dua dimensi dengan nama map yg bertipe integer
	// yg terdiri dari value T untuk baris dan W untuk kolom
	int map[T][P];
	
	// perulangan pertama digunakan untuk menampilkan
	// range bilangan dari i sampai T
	// jika nilai i kurang dari nilai T maka
	// tambah nilai i dengan 1
	for(int i = 0; i < T; ++i)
		// perulangan kedua digunakan untuk menampilkan
		// range bilangan dari j sampai P
		// jika nilai j kurang dari nilai P maka
		// tambah nilai j dengan 1
		for(int j = 0; j < P; ++j)
			// array map dengan baris ke i dan kolom ke j
			// diberikan value 0
			map[i][j] = 0;
	
	// digunakan untuk memberi value 1 dari array map
	// untuk baris y dan kolom x
	// atau digunakan untuk meberikan karakter smile
	// ditengah dari area array
	map[y][x] = 1;
	
	// eksekusi perulangan while jika kondisinya 
	// true maka pernyataan didalam while dijalankan
	while(true)
	{ 
		// digunakan untuk membersihkan layar
		system("cls");
		// digunakan untuk memberikan suara beep
		// dimana 500 adalah frekuensi suara dalam satuan hertz
		// dan 100 adalah durasi yang anda inginkan pada beep tersebut 
		// dengan satuan millisecond
		Beep(500, 100);
		
		// perulangan pertama digunakan untuk menampilkan
		// range bilangan dari i sampai T
		// jika nilai i kurang dari nilai T maka
		// tambah nilai i dengan 1
		for(int i = 0; i < T; ++i)
		{
			// perulangan kedua digunakan untuk menampilkan
			// range bilangan dari j sampai P
			// jika nilai j kurang dari nilai P maka
			// tambah nilai j dengan 1
			for(int j = 0; j < P; ++j)
			{
				// jika array map dengan baris ke i dan kolom ke j
				// sama dengan 1, maka perintah didalam if dijalankan
				if(map[i][j] == 1)
					// menampilkan char(2) yaitu emoticon smile dilayar
					cout << char(2);
				// jika array map dengan baris ke i dan kolom ke j tidak
				// sama dengan 1, maka perintah didalam else dijalankan
				else
					// menampilkan spasi dilayar
					cout << ' ';
			}
			// digunakan untuk pindah baris
			cout << endl;
		}
		
		// membuat variabel dir yg bertipe char
		// dengan value fungsi getch()
		// getch() yaitu kepanjangan dari get character 
		// yang digunakan untuk membaca input dari keyboard
		char dir = getch();

		// jika value dir sama dengan w atau W 
		// maka pernyataan didalam if dijalankan
		if(dir == 'w' || dir == 'W')
		{
			// jika karakter smile sampai ke posisi 
			// array map dengan baris ke 0 dan kolom ke x
			// maka pernyataan didalam if dijalankan
			if(map[0][x]){
				// untuk membersihkan layar
				system("CLS");
				// digunakan untuk mengakhiri bagian case ini
				break;		
			}
			// jika tidak maka pernyataan didalam else dijalankan
			else{
				// array map dengan baris ke y dan kolom ke x
				// diberikan value 0
				map[y][x] = 0;
				// array map dengan baris ke y dikurangi 1 dan kolom ke x
				// diberikan value 1
				// atau untuk memindahkan posisi karakter smile ke atas
				map[y - 1][x] = 1;
				// kemudian di decrement yaitu nilai y berkurang 1
				--y;
			}
		}
		// jika value dir sama dengan a atau A 
		// maka perintah didalam else if dijalankan
		else if (dir == 'a' || dir == 'A')
		{
			// array map dengan baris ke y dan kolom ke x
			// diberikan value 0
			map[y][x] = 0;
			// array map dengan baris ke y dan kolom ke x dikurangi 1
			// diberikan value 1
			// atau untuk memindahkan posisi karakter smile ke kiri
			map[y][x - 1] = 1;
			// kemudian di decrement yaitu nilai x berkurang 1
			--x;
		}
		// jika value dir sama dengan s atau S 
		// maka perintah didalam else if dijalankan
		else if(dir == 's' || dir == 'S')
		{
			// array map dengan baris ke y dan kolom ke x
			// diberikan value 0
			map[y][x] = 0;
			// array map dengan baris ke y ditambah 1 dan kolom ke x
			// diberikan value 1
			// atau untuk memindahkan posisi karakter smile ke bawah
			map[y + 1][x] = 1;
			// kemudian di increment yaitu nilai y bertambah 1
			++y;
		}
		// jika value dir sama dengan d atau D 
		// maka perintah didalam else if dijalankan
		else if(dir == 'd' || dir == 'D')
		{
			// array map dengan baris ke y dan kolom ke x
			// diberikan value 0
			map[y][x] = 0;
			// array map dengan baris ke y dan kolom ke x ditambah 1
			// diberikan value 1
			// atau untuk memindahkan posisi karakter smile ke kanan
			map[y][x + 1] = 1;
			// kemudian di increment yaitu nilai x bertambah 1
			++x;
		}
	}
	// menyatakan bahwa program berakhir dengan normal
	return 0;
}
