#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

//Class Tanpa Constructor
class Polos
{
public:
	string dataString;
	int dataInteger;
};

//Class Dengan Constructor
//Constructor akan dipanggil saat pertama kali class dibuat
//Constructor salah satu method atau fungsi yang akan pertama kali dipanggil saat class dibuat
class Mahasiswa 
{
public:
	string nama;
	string NIM;
	string jurusan;
	double IPK;

	//Ini adalah Constructor
	/*
	Mahasiswa() {
		cout << "Ini adalah Constructor!" << endl;
	}*/

	//Constructor dengan Parameter
	Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK) {
		Mahasiswa::nama = inputNama;
		Mahasiswa::NIM = inputNIM;
		Mahasiswa::jurusan = inputJurusan;
		Mahasiswa::IPK = inputIPK;

		cout << "Nama     = " << Mahasiswa::nama << endl;
		cout << "NIM      = " << Mahasiswa::NIM << endl;
		cout << "Jurusan  = " << Mahasiswa::jurusan << endl;
		cout << "IPK      = " << Mahasiswa::IPK << endl << endl;
	}

};

int main(int argc, char const *argv[])
{
	Mahasiswa mahasiswa1 = Mahasiswa(
		"Rizky Khapidsyah", 
		"84375983", 
		"Tata Boga", 
		4.3);
	
	Mahasiswa mahasiswa2 = Mahasiswa(
		"Bambang Aditya", 
		"87437643", 
		"Tata Busana", 
		4.1);
	   
	/*
	Polos objectPolos;

	objectPolos.dataString = "Polos";
	objectPolos.dataInteger = 0;

	cout << objectPolos.dataString << endl;
	cout << objectPolos.dataInteger << endl;
	*/

	_getch();
	return 0;
}