class Human:
    def __init__(self, nik="-", nama="-", jenis_kelamin='-'):
        self.__nik = nik
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin
    
    def setNama(self, nama):
        self.__nama = nama

    def getNama(self):
        return self.__nama

    def setNik(self, nik):
        self.__nik = nik

    def getNik(self):
        return self.__nik
	
    def setJenis_kelamin(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin
	
    def getJenis_kelamin(self):
        return self.__jenis_kelamin
	