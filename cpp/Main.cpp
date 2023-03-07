// Saya Ihsan Ghozi Zulfikar NIM 2103303 mengerjakan soal Latihan Praktikum 4
// dalam mata kuliah DPBO untuk keberkahanNya maka
// saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

#include <bits/stdc++.h>
using namespace std;
#include "Human.cpp"
#include "SivitasAkademik.cpp"
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "Course.cpp"
#include "Prodi.cpp"

int main(){
	//membuat vector untuk menampung objek yang akan dibuat
	vector<Mahasiswa> listMhs;
	vector<Mahasiswa> listMhs2;
	vector<Dosen> listDosen;
	vector<Course> listCourse;
	vector<Prodi> listProdi;

	//deklarasi objek mahasiswa dan menambahkan atribut melalui getter
	Mahasiswa mhs1;
	mhs1.setNim("2103303");
	mhs1.setNama("Ihsan Ghozi Zulfikar");
	mhs1.setJenis_kelamin("L");
	mhs1.setFakultas("FPMIPA");
	mhs1.setNik("123456789");
	mhs1.setAsal_universitas("UPI");
	mhs1.setEmail_edu("ihsan@ubi.edu");
	listMhs.push_back(mhs1);			//menambahkan objek yang sudah dibuat ke vector

	Mahasiswa mhs2;
	mhs2.setNim("432123");
	mhs2.setNama("Budi Python");
	mhs2.setJenis_kelamin("L");
	mhs2.setFakultas("FPTK");
	mhs2.setNik("98761234");
	mhs2.setAsal_universitas("UPI");
	mhs2.setEmail_edu("Budi@umi.edu");
	listMhs.push_back(mhs2);
	
	//deklarasi objek mahsiswa dan atributnya melalui constructor
	Mahasiswa mhs3("943782","Abdul Som","l","UNPAS","abdul@unpas.edu","FPOK","890");

	listMhs2.push_back(mhs3);
	listMhs2.push_back(mhs2);
	listMhs2.push_back(mhs1);

	//objek dosen
	Dosen dosen1;
	dosen1.setNama("atep Python");
	dosen1.setJenis_kelamin("??");
	dosen1.setNip("12343");
	dosen1.setPend_terakhir("SMA");
	dosen1.setKeahlian("Komputer");
	dosen1.setFakultas("FPTK");
	dosen1.setNik("98761234");
	dosen1.setAsal_universitas("UPI");
	dosen1.setEmail_edu("dfsg@umi.edu");
	listDosen.push_back(dosen1);

	Dosen dosen2;
	dosen2.setNama("somat p");
	dosen2.setJenis_kelamin("P");
	dosen2.setNip("476657");
	dosen2.setPend_terakhir("S1");
	dosen2.setKeahlian("Komputer2");
	dosen2.setFakultas("FPOK");
	dosen2.setNik("15423");
	dosen2.setAsal_universitas("UBI");
	dosen2.setEmail_edu("asei@umi.edu");
	listDosen.push_back(dosen2);

	//objek course
	//course memiliki list objek dosen dan mahasiswa di dalamnya
	Course course1("jarkom",listDosen,listMhs);
	Course course2("dpbo",listDosen,listMhs2);
	listCourse.push_back(course1);
	listCourse.push_back(course2);

	//objek prodi
	//prodi memiliki list objek course, dosen, dan mahasiswa di dalamnya
	Prodi prodi1("PRODI ILKOM","IK",listCourse,listDosen,listMhs);
	Prodi prodi2("PRODI PILKOM","PIK",listCourse,listDosen,listMhs2);
	listProdi.push_back(prodi1);
	listProdi.push_back(prodi2);


	// print atribut objek
	int i;
	i=1;
	cout << "MAHASISWA" << endl;
	for(vector<Mahasiswa>::iterator ptr=listMhs2.begin(); ptr<listMhs2.end(); ptr++){
		cout << "====== Mahasiswa " << i++ << " ======" << endl;
		cout << "NIM              : " << (*ptr).getNim() << endl;
		cout << "Nama             : " << (*ptr).getNama() << endl;
		cout << "Jenis Kelamin    : " << (*ptr).getJenis_kelamin() << endl;
		cout << "Fakultas         : " << (*ptr).getFakultas() << endl;
		cout << "NIK              : " << (*ptr).getNik() << endl;
		cout << "Asal Universitas : " << (*ptr).getAsal_universitas() << endl;
		cout << "Email Edu        : " << (*ptr).getEmail_edu() << endl;
		cout << endl;
	}
	i=1;
	cout << "DOSEN" << endl;
	for(vector<Dosen>::iterator ptr=listDosen.begin(); ptr<listDosen.end(); ptr++){
		cout << "====== Dosen " << i++ << " ======" << endl;
		cout << "NIK              : " << (*ptr).getNip() << endl;
		cout << "Nama             : " << (*ptr).getNama() << endl;
		cout << "Jenis Kelamin    : " << (*ptr).getJenis_kelamin() << endl;
		cout << "Fakultas         : " << (*ptr).getFakultas() << endl;
		cout << "NIK              : " << (*ptr).getNik() << endl;
		cout << "Asal Universitas : " << (*ptr).getAsal_universitas() << endl;
		cout << "Email Edu        : " << (*ptr).getEmail_edu() << endl;
		cout << "pend             : " << (*ptr).getPend_terakhir() << endl;
		cout << "keahlian         : " << (*ptr).getKeahlian() << endl;
		cout <<  endl;
	}
	i=1;
	cout << "COURSE" << endl;
	for(vector<Course>::iterator ptr=listCourse.begin(); ptr<listCourse.end(); ptr++){
		cout << "====== Course " << i++ << " ======" << endl;
		cout << "Matkul           : " << (*ptr).getNama_matakuliah() << endl;
		cout << "Dosen            : " << (*ptr).getStrListDosen() << endl;
		cout << "Mahasiswa        : " << (*ptr).getStrListMahasiswa() << endl;
		cout << endl;
	}
	i=1;
	cout << "PRODI" << endl;
	for(vector<Prodi>::iterator ptr=listProdi.begin(); ptr<listProdi.end(); ptr++){
		cout << "====== Prodi " << i++ << " ======" << endl;
		cout << "nama prodi       : " << (*ptr).getNama_prodi() << endl;
		cout << "kode             : " << (*ptr).getKode() << endl;
		cout << "Mata Kuliah      : " << (*ptr).getStrListCourse() << endl;
		cout << "Dosen            : " << (*ptr).getStrListDosen() << endl;
		cout << "Mahasiswa        : " << (*ptr).getStrListMahasiswa() << endl;
		cout << endl;
	}

	return 0;
}