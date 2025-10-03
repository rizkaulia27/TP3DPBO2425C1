from Pasien import Pasien
from Dokter import Dokter

class RumahSakit:
    def __init__(self, namaRS, alamatRS, kontakRS):
        self.namaRS = namaRS
        self.alamatRS = alamatRS
        self.kontakRS = kontakRS
        self.listPasien = []
        self.listDokter = []

    # Getter & Setter
    def getNamaRS(self):
        return self.namaRS

    def setNamaRS(self, namaRS):
        self.namaRS = namaRS

    def getAlamatRS(self):
        return self.alamatRS

    def setAlamatRS(self, alamatRS):
        self.alamatRS = alamatRS

    def getKontakRS(self):
        return self.kontakRS

    def setKontakRS(self, kontakRS):
        self.kontakRS = kontakRS

    # Tambah pasien & dokter
    def addPasien(self, p: Pasien):
        self.listPasien.append(p)

    def addDokter(self, d: Dokter):
        self.listDokter.append(d)

    # Print info rumah sakit
    def printInfo(self):
        print(f"=== {self.namaRS} ===")
        print("\nDokter:")
        for d in self.listDokter:
            d.printDokter()
        print("\nPasien:")
        for p in self.listPasien:
            p.printPasien()
