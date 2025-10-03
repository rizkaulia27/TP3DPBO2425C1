#ifndef MANUSIA_H
#define MANUSIA_H

#include <iostream>
#include <vector>

using namespace std;

class Manusia{
    //Atribut Class Manusia
    protected:
        int NIK;
        string nama;
        string umur;
        string jenisKelamin;

    //Constructor
    public:
        Manusia(int NIK, string nama, string umur, string jenisKelamin){
            this->NIK = NIK;
            this->nama = nama;
            this->umur = umur;
            this->jenisKelamin = jenisKelamin;
        }

        //Getter dan Setter
        int getNIK(){
            return this->NIK;
        }

        void getNIK(int NIK){
            this->NIK = NIK;
        }

        string getNama(){
            return this->nama;
        }

        void setNama(string nama){
            this->nama = nama;
        }

        string getUmur(){
            return this->umur;
        }

        void setUmur(string umur){
            this->umur = umur;
        }

        string getJenisKelamin(){
            return this->jenisKelamin;
        }

        void setJenisKelamin(string jenisKelamin){
            this->jenisKelamin = jenisKelamin;
        }

        ~Manusia(){
        }
};

#endif