#include <iostream>
#include <vector>

using namespace std;

class Obat{
    private:
        //Atribut Class Obat
        string namaObat;
        int harga;
        string bentuk;
    
    public:
        //Constructor
        Obat(string namaObat, int harga, string bentuk){
            this->namaObat = namaObat;
            this->harga = harga;
            this->bentuk = bentuk;
        }

        //Getter dan Setter
        string getNamaObat(){
            return this->namaObat;
        }

        void setNamaObat(string namaObat){
            this->namaObat = namaObat;
        }

        int getHarga(){
            return this->harga;
        }

        void setHarga(int harga){
            this->harga = harga;
        }

        string getBentuk(){
            return this->bentuk;
        }

        void setBentuk(string bentuk){
            this->bentuk = bentuk;
        }

        //Cetak info / data dari sebuah obat
        void printObat(){
            cout << "Nama Obat : " << getNamaObat() 
            << ", Harga : " << getHarga() 
            << ", Bentuk : " << getBentuk() << endl;
        }

        //Destructor
        ~Obat(){
        }
};