# Mahasiswa adalah bagian dari sivitas akademik

from SivitasAkademik import SivitasAkademik

class Mahasiswa(SivitasAkademik):
    def __init__(self, nik="-", nama="-", jenis_kelamin='-', asal_universitas="-", email_edu="-", fakultas="-", nim="-"):
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas)      # memanggil constructor parent nya
        self.__nim = nim

    def setNim(self, nim):
        self.__nim = nim

    def getNim(self):
        return self.__nim
	