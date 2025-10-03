# TP3DPBO2425C1

# Janji
Saya Rizka Aulia dengan NIM 2403245 mengerjakan Tugas Praktikum 1 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah di spesifikasikan

# Desain Diagram Program 
<img width="775" height="673" alt="Rumah Sakit" src="https://github.com/user-attachments/assets/32f8fdc8-bbd7-4f8b-b4e9-71e495eb0e79" />

# Penjelasan Atribut dan Methods
1. Class Manusia : Atribut NIK, nama, umur dan jenis kelamin adalah atribut yang biasa dimiliki oleh seorang manusia. Lalu ada method getter dan setter bagi setiap atribut.
2. Class Dokter : Karena Dokter merupakan anak dari Manusia, jadi Dokter juga punya NIK, nama, umur dan jenis kelamin. Namun untuk Dokter ditambah dengan atribut Spesialis dan Jadwal Praktek. Ada method getter dan setter bagi setiap atribut. Juga ada method PrintDokter untuk mencetak informasi tentang seorang dokter.
3. Class Pasien : Karena Pasien juga merupakan anak dari Manusia, jadi Pasien punya NIK, nama, umur dan jenis kelamin. Namun untuk Pasien ditambah dengan atribut Golongan Darah dan Diagnosa. Ada methods getter dan setter bagi setiap atribut dan method PrintPasien untuk mencetak informasi tentang seorang pasien. Juga ada method addObat untuk menambahkan sebuah obat ke dalam list / array obat yang dimiliki Pasien, seolah resep obat dari si Pasien.
4. Class Rumah Sakit : Memiliki atribut nama rumah sakit, alamat rumah sakit dan kontak rumah sakit. Ada methods getter dan setter bagi setiap atribut , method addDokter untuk menambahkan Dokter ke dalam array Dokter dan addPasien untuk menambahkan Pasien ke dalam array Pasien. Method printInfo untuk mencetak semua data yang ada.
5. Class Obat : Memiliki atribut nama obat, harga obat dan bentuk obat (kapsul, tablet atau sirup). Memiliki methods getter dan setter bagi setiap atribut. Juga ada methods PrintObat untuk mencetak informasi tentang sebuah obat.

# Penjelasan Desain Program
- Class Manusia yang memiliki atribut NIM, nama, umur dan jenis kelamin memiliki 2 anak yaitu Class Pasien dan Class Dokter karena pasien dan dokter adalah manusia.
- Class Dokter memiliki atribut tambahan yaitu spesialis dan jadwal praktek
- Class Pasien memiliki atribut tambahan yaitu golongan darah dan diagnosa penyakitnya
- Class Rumah Sakit dengan atribut nama rumah sakit, alamat rumah sakit dan kontak rumah sakit. Class Rumah Sakit memiliki hubungan agregasi dengan Class Dokter dan Class Pasien. Karena, rumah sakit memiliki banyak dokter, tapi dokter bisa saja bekerja di rumah sakit lain juga (tidak hanya satu). Juga pasien bisa datang dan pergi dari rumah sakit, tetap bisa eksis walaupun tidak ada rumah sakit tertentu.
- Lalu, ada Class Obat yang memiliki atribut nama obat, harga obat dan bentuk obat. CLass obat ini memiliki hubungan agregasi dengan class Pasien karena pasien memiliki daftar obat tetapi obat tetap bisa ada walaupun tidak dimiliki Pasien.

# Penjelasan Alur
- Program dimulai.
- Membuat objek Rumah Sakit dengan nama, alamat, dan kontak.
- Membuat beberapa objek Dokter. 
- Menambahkan dokter-dokter tersebut ke daftar dokter rumah sakit.
- Membuat beberapa objek Pasien. 
- Membuat beberapa objek Obat.
- Memberikan obat kepada pasien tertentu.
- Menambahkan semua pasien ke dalam daftar pasien rumah sakit.
- Menampilkan informasi lengkap rumah sakit: Data semua dokter dan data semua pasien, termasuk daftar obat masing-masing pasien.
- Program selesai.

# Dokumentasi
- C++
<img width="1101" height="889" alt="DokumCPP" src="https://github.com/user-attachments/assets/bcd189c9-4a26-453a-b897-e4604f0a80c0" />

- Python
<img width="1130" height="884" alt="DokumPython" src="https://github.com/user-attachments/assets/3cc80308-a03f-4998-87bb-82a81fe1f0c9" />

# Terimakasih :3
