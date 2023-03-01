from Dosen import Dosen
from Mahasiswa import Mahasiswa

class Prodi():
    def __init__(self, nama_prodi="-", kode="-", listCourse=[], listDosen=[], listMahasiswa=[]):
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__listCourse = listCourse
        self.__listDosen = listDosen
        self.__listMahasiswa = listMahasiswa
    
    def setNama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi

    def getNama_prodi(self):
        return self.__nama_prodi

    def setKode(self, kode):
        self.__kode = kode

    def getKode(self):
        return self.__kode

    def setListCourse(self, listCourse):
        self.__listCourse = listCourse

    def getListCourse(self):
        return self.__listCourse
    
    def addListCourse(self, course):
        self.__listCourse.append(course)
    
    def getStrListCourse(self):
        return ', '.join(str(e.getNama_matakuliah()) for e in self.getListCourse() )

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