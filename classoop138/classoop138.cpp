#include <iostream>
using namespace std;

class Mahasiswa {
public:
	string nama;
	string nim;
public: void cetak() {
	cout << "NIM = " << nim;
	cout << "n\Nama = " << nama;
}
};

class Matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
	cout << "Masukan Kode Matakuliah : ";
	cin >> kode;
	cout << "Masukan Nama Matakuliah : ";
	cin >> namaM;
	cout << "Jumlah SKS : ";
	cin >> sks;
	}
};
