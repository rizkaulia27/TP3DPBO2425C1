class Manusia:
    def __init__(self, NIK, nama, umur, jenisKelamin):
        self.NIK = NIK
        self.nama = nama
        self.umur = umur
        self.jenisKelamin = jenisKelamin
    
    def getNIK(self):
        return self.NIK
    
    def setNIK(self, NIK):
        self.NIK = NIK
    
    def getNama(self):
        return self.nama
    
    def setNama(self, nama):
        self.nama = nama

    def getUmur(self):
        return self.umur
    
    def setUmur(self, umur):
        self.umur = umur
    
    def getJenisKelamin(self):
        return self.jenisKelamin
    
    def setJenisKelamin(self, jenisKelamin):
        self.jenisKelamin = jenisKelamin