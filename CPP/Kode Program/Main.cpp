#include <iostream>
#include <vector>
#include "RumahSakit.cpp"

using namespace std;

int main(){
    //Buat rumah sakit, dokter, pasien dan obat lalu tambahkan
    RumahSakit r("Rumah Sakit Cahaya Bulan", "Dago, Bandung", "cahayabulan@gmail.com");

    Dokter d1(12345, "Dr. Selika", "30 Tahun", "Perempuan", "Spesialis Anak", "Senin-Minggu");
    Dokter d2(67890, "Dr. Iqbal", "55 Tahun", "Laki-laki", "Spesialis Jantung", "Sabtu-Minggu");

    r.addDokter(d1);
    r.addDokter(d2);

    Pasien p1(24680, "Naura", "5 Tahun", "Perempuan", "O", "Flu");
    Pasien p2(13579, "Azka", "18 Tahun", "Laki-laki", "AB", "Tipes");
    Pasien p3(14700, "Nadzalla", "25 Tahun", "Perempuan", "A", "Robek Ligamen");

    Obat o1("Paracetamol", 25000, "Sirup");
    Obat o2("Vitamin C", 5000, "Tablet");

    p1.addObat(o1);
    p1.addObat(o2);
    
    r.addPasien(p1);
    r.addPasien(p2);
    r.addPasien(p3);

    //Data awal sebelum ditambah
    cout << "Data sebelum ditambahkan : " << endl;
    r.printInfo();

    //Proses penambahan data
    Dokter d3(17385, "Dr. Hawa", "60 Tahun", "Perempuan", "Spesialis Bedah", "Senin-Jumat");
    Dokter d4(62840, "Dr. Umarex", "28 Tahun", "Perempuan", "Spesialis Anak", "Sabtu");

    r.addDokter(d3);
    r.addDokter(d4);

    Pasien p4(24680, "Dhiya", "25 Tahun", "Perempuan", "B", "Anemia");
    Pasien p5(13579, "Vivi", "18 Tahun", "Perempuan", "AB", "Diare");

    Obat o3("Sangobion", 50000, "Sirup");
    Obat o4("Tablet Tambah Darah", 10000, "Tablet");

    p4.addObat(o1);
    p4.addObat(o2);
    
    r.addPasien(p4);
    r.addPasien(p5);

    //Print out data yang sudah ditambahkan lagi
    cout << "Data sesudah ditambahkan : " << endl;
    r.printInfo();

    return 0;
}