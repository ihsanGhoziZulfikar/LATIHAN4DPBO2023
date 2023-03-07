// sivitas akademik adalah manusia

class SivitasAkademik : public Human
{
	private:
		string asal_universitas;
		string email_edu;
		string fakultas;
	public:
		SivitasAkademik(){
			this->asal_universitas = "-";
			this->email_edu = "-";
			this->fakultas = "-";
		}
		SivitasAkademik(string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, string fakultas)
		: Human(nik, nama, jenis_kelamin){
			this->asal_universitas = asal_universitas;
			this->email_edu = email_edu;
			this->fakultas = fakultas;
		}
		void setAsal_universitas(string asal_universitas){
			this->asal_universitas = asal_universitas;
		}
		string getAsal_universitas(){
			return this->asal_universitas;
		}
		void setEmail_edu(string email_edu){
			this->email_edu = email_edu;
		}
		string getEmail_edu(){
			return this->email_edu;
		}
		void setFakultas(string fakultas){
			this->fakultas = fakultas;
		}
		string getFakultas(){
			return this->fakultas;
		}
};