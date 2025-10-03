#include <iostream>
#include <vector>
#include "Manusia.cpp"
#include "Obat.cpp"

using namespace std;

//Class Pasien extends Class Manusia
class Pasien : public Manusia{
    private:
        //Atribut Class Pasien
        string golDar;
        string diagnosa;
        vector<Obat> listObat;

    public:
        //Constructor
        Pasien(int NIK, string nama, string umur, string jenisKelamin, string golDar, string diagnosa) : Manusia(NIK, nama, umur, jenisKelamin){
            this->golDar = golDar;
            this->diagnosa = diagnosa;
        }

        //Getter dan setter
        string getGolDar(){
            return this->golDar;
        }

        void setGolDar(string golDar){
            this->golDar = golDar;
        }

        string getDiagnosa(){
            return this->diagnosa;
        }

        void setDiagnosa(string diagnosa){
            this->diagnosa = diagnosa;
        }

        //Method untuk menambahkan obat ke list obat, jadi resep obat seorang pasien
        void addObat(const Obat& o){
            listObat.push_back(o);
        }

        //Cetak info / data dari seorang pasien beserta obatnya
        void printPasien(){
            cout << "NIK : " << getNIK()
            << ", Nama : " << getNama()
            << ", Umur : " << getUmur()
            << ", Jenis Kelamin : " << getJenisKelamin()
            << ", Golongan Darah : " << getGolDar() 
            << ", Diagnosa : " << getDiagnosa() << endl;

            //Jika tidak ada obat / tidak diresepkan obat
            if(listObat.empty()){
                cout << "  Tidak ada obat." << endl;
            //Jika ada obat
            }else{
                cout << "  Daftar Obat :" << endl;
                for(auto& o : listObat){
                    cout << "  - ";
                    o.printObat();
                }
            }

            cout << "" << endl;
        }

        //Destructor
        ~Pasien(){
        }
};