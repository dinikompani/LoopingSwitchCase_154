#include <iostream>
using namespace std;

float hitungLuasPersegiPanjang(float p, float l){
    return p * l;
}

float hitungLuasSegitiga(float a, float t){
    return 0.5 * a * t;
}

int main(){
    int pilihan;
    float panjang, lebar, alas, tinggi;
    do{
        cout << "<==============Menu============>" << endl;
        cout << "1. Menghitung luas persegi panjang" << endl;
        cout << "2. Menghitung luas segitiga" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilihan(1/2/3) : ";
        cin >> pilihan;
        switch(pilihan){
        }
    }while(pilihan !=3);
}