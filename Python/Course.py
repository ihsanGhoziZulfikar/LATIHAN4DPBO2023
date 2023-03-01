from Dosen import Dosen
from Mahasiswa import Mahasiswa

class Course():
    def __init__(self, nama_matakuliah="-", listDosen=[], listMahasiswa=[]):
        self.__nama_matakuliah = nama_matakuliah
        self.__listDosen = listDosen
        self.__listMahasiswa = listMahasiswa
    
    def setNama_matakuliah(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah

    def getNama_matakuliah(self):
        return self.__nama_matakuliah

    def setListDosen(self, listDosen):
        self.__listDosen = listDosen

    def getListDosen(self):
        return self.__listDosen
    
    def addListDosen(self, dosen):
        self.__listDosen.append(dosen)
    
    def getStrListDosen(self):
        return ', '.join(str(e.getNama()) for e in self.getListDosen() )
	
    def setListMahasiswa(self, listMahasiswa):
        self.__listMahasiswa = listMahasiswa
	
    def getListMahasiswa(self):
        return self.__listMahasiswa
    
    def addListMahasiswa(self, mahasiswa):
        self.__listMahasiswa.append(mahasiswa)
    
    def getStrListMahasiswa(self):
        return ', '.join(str(e.getNama()) for e in self.getListMahasiswa() )