// course memiliki list objek dosen dan mahasiswa

class Course
{
	private:
		string nama_matakuliah;
		vector<Dosen> listDosen;
		vector<Mahasiswa> listMahasiswa;
	public:
		Course(){
			this->nama_matakuliah = "-";
		}
		Course(string nama_matakuliah, vector<Dosen> listDosen, vector<Mahasiswa> listMahasiswa){
			this->nama_matakuliah = nama_matakuliah;
			this->listDosen = listDosen;
			this->listMahasiswa = listMahasiswa;
		}
		void setNama_matakuliah(string nama_matakuliah){
			this->nama_matakuliah = nama_matakuliah;
		}
		string getNama_matakuliah(){
			return this->nama_matakuliah;
		}
		void setListDosen(vector<Dosen> listDosen){
			this->listDosen = listDosen;
		}
		vector<Dosen> getListDosen(){
			return this->listDosen;
		}
		void addListDosen(Dosen dosen){
			this->listDosen.push_back(dosen);
		}
		string getStrListDosen(){		//mengembalikan nama nama dosen pada listDosen
			string dosen;
			for(vector<Dosen>::iterator ptr=listDosen.begin(); ptr<listDosen.end(); ptr++){
				dosen.append((*ptr).getNama());		//semua nama dosen disimpan pada string dosen
				if(ptr+1 != listDosen.end()){
					dosen.append(", ");
				}
			}
			return dosen;
		}
		void setListMahasiswa(vector<Mahasiswa> listMahasiswa){
			this->listMahasiswa = listMahasiswa;
		}
		vector<Mahasiswa> getListMahasiswa(){
			return this->listMahasiswa;
		}
		void addListMahasiswa(Mahasiswa mahasiswa){
			this->listMahasiswa.push_back(mahasiswa);
		}
		string getStrListMahasiswa(){		//mengembalikan nama nama mahasiswa pada listDosen
			string mhs;
			for(vector<Mahasiswa>::iterator ptr=listMahasiswa.begin(); ptr<listMahasiswa.end(); ptr++){
				mhs.append((*ptr).getNama());		//semua nama mahasiswa disimpan pada string mhs
				if(ptr+1 != listMahasiswa.end()){
					mhs.append(", ");
				}
			}
			return mhs;
		}
};
