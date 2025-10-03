from Manusia import Manusia
from Obat import Obat

class Pasien(Manusia):
    def __init__(self, NIK, nama, umur, jenisKelamin, golDar, diagnosa):
        super().__init__(NIK, nama, umur, jenisKelamin)
        self.golDar = golDar
        self.diagnosa = diagnosa
        self.listObat = []   

    # Getter & Setter
    def getGolDar(self):
        return self.golDar

    def setGolDar(self, golDar):
        self.golDar = golDar

    def getDiagnosa(self):
        return self.diagnosa

    def setDiagnosa(self, diagnosa):
        self.diagnosa = diagnosa

    # Tambah obat ke list
    def addObat(self, obat: Obat):
        self.listObat.append(obat)

    # Print info pasien
    def printPasien(self):
        print(f"NIK : {self.getNIK()}, "
              f"Nama : {self.getNama()}, "
              f"Umur : {self.getUmur()}, "
              f"Jenis Kelamin : {self.getJenisKelamin()}, "
              f"Golongan Darah : {self.getGolDar()}, "
              f"Diagnosa : {self.getDiagnosa()}")
        
        if not self.listObat:
            print("  Tidak ada obat.")
        else:
            print("  Daftar Obat :")
            for o in self.listObat:
                print("  - ", end="")
                o.printObat()
        
        print("")
