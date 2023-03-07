#include <bits/stdc++.h>
using namespace std;
class Human{
	private:
		string nik;
		string nama;
		string jenis_kelamin;
	public:
		Human(){
			this->nik = "-";
			this->nama = "-";
			this->jenis_kelamin = "-";
		}   
		Human(string nik, string nama, string jenis_kelamin){
			this->nik = nik;
			this->nama = nama;
			this->jenis_kelamin = jenis_kelamin;
		}   
		void setNama(string nama){
			this->nama = nama;
		}
		string getNama(){
			return this->nama;
		}
		void setNik(string nik){
			this->nik = nik;
		}
		string getNik(){
			return this->nik;
		}
		void setJenis_kelamin(string jenis_kelamin){
			this->jenis_kelamin = jenis_kelamin;
		}
		string getJenis_kelamin(){
			return this->jenis_kelamin;
		}
};