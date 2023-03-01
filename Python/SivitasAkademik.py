# sivitas akademik adalah manusia

from Human import Human

class SivitasAkademik(Human):
    def __init__(self, nik="-", nama="-", jenis_kelamin='-', asal_universitas="-", email_edu="-", fakultas="-"):
        super().__init__(nik,nama,jenis_kelamin)
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu
        self.__fakultas = fakultas
    
    def setAsal_universitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas

    def getAsal_universitas(self):
        return self.__asal_universitas

    def setEmail_edu(self, email_edu):
        self.__email_edu = email_edu

    def getEmail_edu(self):
        return self.__email_edu
	
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
	
    def getFakultas(self):
        return self.__fakultas