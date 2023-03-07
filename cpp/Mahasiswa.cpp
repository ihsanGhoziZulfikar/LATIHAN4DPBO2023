// mahasiswa adalah sivitas akademik

class Mahasiswa : public SivitasAkademik{
	private:
		string nim;
	public:
		Mahasiswa(){
			this->nim = "-";
		}
		Mahasiswa(string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas, string nim)
		: SivitasAkademik(nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas){
			this->nim = nim;
		}
		void setNim(string nim){
			this->nim = nim;
		}
		string getNim(){
			return this->nim;
		}
};	
