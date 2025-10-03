class Obat:
    def __init__(self, namaObat, harga, bentuk):
        self.namaObat = namaObat
        self.harga = harga
        self.bentuk = bentuk

    # Getter & Setter
    def getNamaObat(self):
        return self.namaObat

    def setNamaObat(self, namaObat):
        self.namaObat = namaObat

    def getHarga(self):
        return self.harga

    def setHarga(self, harga):
        self.harga = harga

    def getBentuk(self):
        return self.bentuk

    def setBentuk(self, bentuk):
        self.bentuk = bentuk

    # Print info obat
    def printObat(self):
        print(f"Nama Obat : {self.getNamaObat()}, "
              f"Harga : {self.getHarga()}, "
              f"Bentuk : {self.getBentuk()}")
