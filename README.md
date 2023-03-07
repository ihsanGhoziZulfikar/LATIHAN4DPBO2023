Saya Ihsan Ghozi Zulfikar NIM 2103303 mengerjakan soal Latihan Praktikum 2 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin


### Kelas: Human
* tediri dari nik, nama, dan jenis kelamin

### Kelas: SivitasAkademik
* inherit kelas Human karena sivitas akademik adalah manusia
* terdiri dari asal universitas, email edu, dan fakultas

### Kelas: Mahasiswa
* inherit kelas SivitasAkademik karena mahasiswa adalah sivitas akademik
* terdiri dari nim

### Kelas: Dosen
* inherit kelas SivitasAkademik karena dosen adalah sivitas akademik
* terdiri dari nip, pend_terakhir, dan keahlian

## Kelas: Course
* terdiri dari nama_matakuliah, listDosen, dan listMahasiswa
* listDosen adalah list dari objek Dosen, karena course memiliki beberapa dosen
* listMahasiswa adalah list dari objek Mahasiswa, karena course memiliki beberapa mahasiswa

## Kelas: Prodi
* terdiri dari nama_prodi, kode, listCourse, listDosen, dan listMahasiswa
* listCourse adalah list dari objek Course, karena prodi memiliki beberapa course
* listDosen adalah list dari objek Dosen, karena prodi memiliki beberapa dosen
* listMahasiswa adalah list dari objek Mahasiswa, karena prodi memiliki beberapa mahasiswa

## Dokumentasi
### UML

![uml4](https://user-images.githubusercontent.com/100748074/222110411-444c09d6-3ce1-487c-aea5-789595ef8bc1.PNG)
