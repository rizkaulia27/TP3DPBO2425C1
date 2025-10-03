#include <iostream>
#include <vector>
#include "Pasien.cpp"
#include "Dokter.cpp"

using namespace std;

class RumahSakit{
    //Atribut Class Rumah Sakit
    string namaRS;
    string alamatRS;
    string kontakRS;

    //Array untuk list pasien dan list dokter di suatu rumah sakit
    vector<Pasien> listPasien;
    vector<Dokter> listDokter;

    public:
        //Constructor
        RumahSakit(string namaRS, string alamatRS, string kontakRS){
            this->namaRS = namaRS;
            this->alamatRS = alamatRS;
            this->kontakRS = kontakRS;
        }

        //Getter dan Setter
        string getNamaRS(){ 
            return this->namaRS; 
        }

        void setNamaRS(string namaRS){ 
            this->namaRS = namaRS; 
        }

        string getAlamatRS(){ 
            return this->alamatRS; 
        }

        void setAlamatRS(string alamatRS){ 
            this->alamatRS = alamatRS; 
        }

        string getKontakRS(){ 
            return this->kontakRS; 
        }

        void setKontakRS(string kontakRS){ 
            this->kontakRS = kontakRS; 
        }

        void addPasien(const Pasien& p){ 
            listPasien.push_back(p); 
        }

        void addDokter(const Dokter& d){ 
            listDokter.push_back(d);
        }

        //Print info seluruh dokter dan seluruh pasien (beserta obatnya) yang tersimpan di dalam array
        void printInfo(){
            cout << "=== " << namaRS << " ===" << endl;
            cout << "\nDokter:" << endl;
            for (auto& d : listDokter) {
                d.printDokter();
            }   
            cout << "\nPasien:" << endl;
            for (auto& p : listPasien){
                p.printPasien();
            }
        }

        //Destructor
        ~RumahSakit(){
        }
};

