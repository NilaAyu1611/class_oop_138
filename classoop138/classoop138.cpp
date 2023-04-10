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

