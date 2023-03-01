# sivitas akademik adalah manusia

from SivitasAkademik import SivitasAkademik

class Dosen(SivitasAkademik):
    def __init__(self, nik="-", nama="-", jenis_kelamin='-', asal_universitas="-", email_edu="-", fakultas="-", nip="-", pend_terakhir="-", keahlian="-"):
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu, fakultas)
        self.__nip = nip
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian
    
    def setNip(self, nip):
        self.__nip = nip

    def getNip(self):
        return self.__nip

    def setPend_terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir

    def getPend_terakhir(self):
        return self.__pend_terakhir
	
    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian
	
    def getKeahlian(self):
        return self.__keahlian