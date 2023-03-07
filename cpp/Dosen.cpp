// dosen adalah sivitas akademik

class Dosen : public SivitasAkademik
{
	private:
		string nip;
		string pend_terakhir;
		string keahlian;
	public:
		Dosen(){
			this->nip = "-";
			this->pend_terakhir = "-";
			this->keahlian = "-";
		}
		Dosen(string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas, string nip, string pend_terakhir, string keahlian)
		: SivitasAkademik(nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas){
			this->nip = nip;
			this->pend_terakhir = pend_terakhir;
			this->keahlian = keahlian;
		}
		void setNip(string nip){
			this->nip = nip;
		}
		
		string getNip(){
			return this->nip;
		}
		
		void setPend_terakhir(string pend_terakhir){
			this->pend_terakhir = pend_terakhir;
		}
		
		string getPend_terakhir(){
			return this->pend_terakhir;
		}
		
		void setKeahlian(string keahlian){
			this->keahlian = keahlian;
		}
		
		string getKeahlian(){
			return this->keahlian;
		}
};
