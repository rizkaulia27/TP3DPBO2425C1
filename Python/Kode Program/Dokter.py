from Manusia import Manusia

class Dokter(Manusia):
    def __init__(self, NIK, nama, umur, jenisKelamin, spesialis, jadwal):
        super().__init__(NIK, nama, umur, jenisKelamin)
        self.spesialis = spesialis
        self.jadwal = jadwal
    
    def getSpesialis(self):
        return self.spesialis
    
    def setSpesialis(self, spesialis):
        self.spesialis = spesialis
    
    def getJadwal(self):
        return self.jadwal
    
    def setJadwal(self, jadwal):
        self.jadwal = jadwal

    def printDokter(self):
        print(f"NIK : {self.getNIK()}, "
              f"Nama : {self.getNama()}, "
              f"Umur : {self.getUmur()}, "
              f"Jenis Kelamin : {self.getJenisKelamin()}, "
              f"Spesialisasi : {self.getSpesialis()}, "
              f"Jadwal : {self.getJadwal()}")
