// prodi memiliki list objek course, dosen dan mahasiswa

class Prodi{
	private:
		string nama_prodi;
		string kode;
		vector<Course> listCourse;
		vector<Dosen> listDosen;
		vector<Mahasiswa> listMahasiswa;
	public:
		Prodi(){
			this->nama_prodi = "-";
			this->kode = "-";
		}
		Prodi(string nama_prodi, string kode, vector<Course> listCourse, vector<Dosen> listDosen, vector<Mahasiswa> listMahasiswa){
			this->nama_prodi = nama_prodi;
			this->kode = kode;
			this->listCourse = listCourse;
			this->listDosen = listDosen;
			this->listMahasiswa = listMahasiswa;
		}
		void setNama_prodi(string nama_prodi){
			this->nama_prodi = nama_prodi;
		}
		string getNama_prodi(){
			return this->nama_prodi;
		}
		void setKode(string kode){
			this->kode = kode;
		}
		string getKode(){
			return this->kode;
		}
		void setListCourse(vector<Course> listCourse){
			this->listCourse = listCourse;
		}
		vector<Course> getListCourse(){
			return this->listCourse;
		}
		void addListCourse(Course course){
			this->listCourse.push_back(course);
		}
		string getStrListCourse(){		//mengembalikan nama nama matakuliah pada listCourse
			string course;
			for(vector<Course>::iterator ptr=listCourse.begin(); ptr<listCourse.end(); ptr++){
				course.append((*ptr).getNama_matakuliah());		//semua nama matakuliah disimpan pada string course
				if(ptr+1 != listCourse.end()){
					course.append(", ");
				}
			}
			return course;
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
