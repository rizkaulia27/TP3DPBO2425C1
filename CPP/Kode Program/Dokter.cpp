#include <iostream>
#include <vector>
#include "Manusia.cpp"

using namespace std;

//Class Dokter extends Class Manusia
class Dokter : public Manusia{
    //Atribut Class Dokter
    private:
        string spesialis;
        string jadwal;

    public:
        //Constructor
        Dokter(int NIK, string nama, string umur, string jenisKelamin, string spesialis, string jadwal) : Manusia(NIK, nama, umur, jenisKelamin){
            this->spesialis = spesialis;
            this->jadwal = jadwal;
        }

        //Getter dan Setter
        string getSpesialis()const{
            return spesialis;
        }

        void setSpesialis(string spesialis){
            this->spesialis = spesialis;
        }

        string getJadwal()const{
            return jadwal;
        }

        void setJadwal(string jadwal){
            this->jadwal = jadwal;
        }

        //Cetak info / data dari seorang dokter
        void printDokter(){
            cout << "NIK : " << getNIK()
            << ", Nama : " << getNama()
            << ", Umur : " << getUmur()
            << ", Jenis Kelamin : " << getJenisKelamin()
            << ", Spesialisasi : " << getSpesialis()
            << ", Jadwal : " << getJadwal() << endl;
        }

        ~Dokter(){
        }
};