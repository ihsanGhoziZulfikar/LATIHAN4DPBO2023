# Saya Ihsan Ghozi Zulfikar NIM 2103303 mengerjakan soal Latihan Praktikum 4
# dalam mata kuliah DPBO untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# from Human import Human
# from SivitasAkademik import SivitasAkademik
from Mahasiswa import Mahasiswa
from Prodi import Prodi
from Dosen import Dosen
from Course import Course

listMhs = []
listDosen = []
listCourse = []
listProdi = []

mhs1 = Mahasiswa()
mhs1.setNim("2103303")	
mhs1.setNama("Ihsan Ghozi Zulfikar")
mhs1.setJenis_kelamin('L')
mhs1.setFakultas("FPMIPA")
mhs1.setNik("123456789")
mhs1.setAsal_universitas("UPI")
mhs1.setEmail_edu("ihsan@ubi.edu")
listMhs.append(mhs1)

mhs2 = Mahasiswa()
mhs2.setNim("432123")
mhs2.setNama("Budi Python")
mhs2.setJenis_kelamin('L')
mhs2.setFakultas("FPTK")
mhs2.setNik("98761234")
mhs2.setAsal_universitas("UPI")
mhs2.setEmail_edu("Budi@umi.edu")
listMhs.append(mhs2)

listMhs2 = []
listMhs2.append(Mahasiswa("943782","Abdul Som",'l',"UNPAS","abdul@unpas.edu","FPOK","890"))
listMhs2.append(mhs2)
listMhs2.append(mhs1)

dosen1 = Dosen()
dosen1.setNama("atep Python")
dosen1.setJenis_kelamin('?')
dosen1.setNip("12343")
dosen1.setPend_terakhir("SMA")
dosen1.setKeahlian("Komputer")
dosen1.setFakultas("FPTK")
dosen1.setNik("98761234")
dosen1.setAsal_universitas("UPI")
dosen1.setEmail_edu("dfsg@umi.edu")
listDosen.append(dosen1)

dosen2 = Dosen()
dosen2.setNama("somat p")
dosen2.setJenis_kelamin('P')
dosen2.setNip("476657")
dosen2.setPend_terakhir("S1")
dosen2.setKeahlian("Komputer2")
dosen2.setFakultas("FPOK")
dosen2.setNik("15423")
dosen2.setAsal_universitas("UBI")
dosen2.setEmail_edu("asei@umi.edu")
listDosen.append(dosen2)

course1 = Course("jarkom",listDosen,listMhs)
course2 = Course("dpbo",listDosen,listMhs2)
listCourse.append(course1)
listCourse.append(course2)

prodi1 = Prodi("PRODI ILKOM","IK",listCourse,listDosen,listMhs)
prodi2 = Prodi("PRODI PILKOM","PIK",listCourse,listDosen,listMhs2)
listProdi.append(prodi1)
listProdi.append(prodi2)


print("MAHASISWA")
for i in range(len(listMhs2)):
    print("====== Mahasiswa " + str(i+1) + " ======")
    print("NIM              : " + listMhs2[i].getNim())
    print("Nama             : " + listMhs2[i].getNama())
    print("Jenis Kelamin    : " + listMhs2[i].getJenis_kelamin())
    print("Fakultas         : " + listMhs2[i].getFakultas())
    print("NIK              : " + listMhs2[i].getNik())
    print("Asal Universitas : " + listMhs2[i].getAsal_universitas())
    print("Email Edu        : " + listMhs2[i].getEmail_edu())
    print()

print("DOSEN")
for i in range(len(listDosen)):
    print("====== Dosen " + str(i+1) + " ======")
    print("NIK              : " + listDosen[i].getNip())
    print("Nama             : " + listDosen[i].getNama())
    print("Jenis Kelamin    : " + listDosen[i].getJenis_kelamin())
    print("Fakultas         : " + listDosen[i].getFakultas())
    print("NIK              : " + listDosen[i].getNik())
    print("Asal Universitas : " + listDosen[i].getAsal_universitas())
    print("Email Edu        : " + listDosen[i].getEmail_edu())
    print("pend             : " + listDosen[i].getPend_terakhir())
    print("keahlian         : " + listDosen[i].getKeahlian())
    print()

print("COURSE")
for i in range(len(listCourse)):
    print("====== Course " + str(i+1) + " ======")
    print("Matkul           : " + listCourse[i].getNama_matakuliah())
    print("Dosen            : " + listCourse[i].getStrListDosen())
    print("Mahasiswa        : " + listCourse[i].getStrListMahasiswa())
    print()

print("PRODI")
for i in range(len(listProdi)):
    print("====== Prodi " + str(i+1) + " ======")
    print("nama prodi       : " + listProdi[i].getNama_prodi())
    print("kode             : " + listProdi[i].getKode())
    print("Mata Kuliah      : " + listProdi[i].getStrListCourse())
    print("Dosen            : " + listProdi[i].getStrListDosen())
    print("Mahasiswa        : " + listProdi[i].getStrListMahasiswa())
    print()