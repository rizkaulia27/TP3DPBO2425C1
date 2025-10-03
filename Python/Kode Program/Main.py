from RumahSakit import RumahSakit
from Dokter import Dokter
from Pasien import Pasien
from Obat import Obat

if __name__ == "__main__":
    # Buat rumah sakit, dokter, pasien, dan obat lalu tambahkan
    r = RumahSakit("Rumah Sakit Cahaya Bulan", "Dago, Bandung", "cahayabulan@gmail.com")

    d1 = Dokter(12345, "Dr. Selika", "30 Tahun", "Perempuan", "Spesialis Anak", "Senin-Minggu")
    d2 = Dokter(67890, "Dr. Iqbal", "55 Tahun", "Laki-laki", "Spesialis Jantung", "Sabtu-Minggu")

    r.addDokter(d1)
    r.addDokter(d2)

    p1 = Pasien(24680, "Naura", "5 Tahun", "Perempuan", "O", "Flu")
    p2 = Pasien(13579, "Azka", "18 Tahun", "Laki-laki", "AB", "Tipes")
    p3 = Pasien(14700, "Nadzalla", "25 Tahun", "Perempuan", "A", "Robek Ligamen")

    o1 = Obat("Paracetamol", 25000, "Sirup")
    o2 = Obat("Vitamin C", 5000, "Tablet")

    p1.addObat(o1)
    p1.addObat(o2)

    r.addPasien(p1)
    r.addPasien(p2)
    r.addPasien(p3)

    # Data awal sebelum ditambah
    print("Data sebelum ditambahkan :")
    r.printInfo()

    # Proses penambahan data
    d3 = Dokter(17385, "Dr. Hawa", "60 Tahun", "Perempuan", "Spesialis Bedah", "Senin-Jumat")
    d4 = Dokter(62840, "Dr. Umarex", "28 Tahun", "Perempuan", "Spesialis Anak", "Sabtu")

    r.addDokter(d3)
    r.addDokter(d4)

    p4 = Pasien(24681, "Dhiya", "25 Tahun", "Perempuan", "B", "Anemia")
    p5 = Pasien(13580, "Vivi", "18 Tahun", "Perempuan", "AB", "Diare")

    o3 = Obat("Sangobion", 50000, "Sirup")
    o4 = Obat("Tablet Tambah Darah", 10000, "Tablet")

    p4.addObat(o1)
    p4.addObat(o2)

    r.addPasien(p4)
    r.addPasien(p5)

    # Print out data yang sudah ditambahkan lagi
    print("Data sesudah ditambahkan :")
    r.printInfo()
