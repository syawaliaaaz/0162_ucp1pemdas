//1. 3 variabel dengan tipe data yang berbeda :
//a. int bilanganBulat = 10;
//b. float tinggi = 1.75;
//c. char nama = "Budi";



//2. Contoh implementasi pernyataan kondisional
// pernyataan kondisional adalah  struktur akses program 
// yang memungkinkan kita, dalam suatu program, mengambil keputusan berdasarkan kondisi tertentu.
// Contoh implementasi program yang memeriksa apakah usia lebih besar atau sama dengan 18.
// Jika benar, program akan menampilkan pesan "Anda sudah dewasa".
//Jika salah, program akan menampilkan pesan “Kamu masih anak - anak”.
// dapat menggunakan pernyataan if, switch atau if else.


//Contoh implementasi struct
// Struct adalah konsep  pemrograman yang memungkinkan kita  
// mengelompokkan variabel-variabel terkait menjadi satu kelompok.
// membuat struktur bernama Student dengan tiga  
// anggota : nama (string), nim (integer), dan ipk (float).
// Selanjutnya, kita membuat  variabel siswa bertipe Std1 
// dan mengakses anggotanya untuk mengisi dan menampilkan data siswa.


//4.Contoh implementasi dari prosedur dan fungsi
// prosedur : menghitung luas persegi
// fungsi : menghitung keliling persegi

//5.Looping atau perulangan adalah proses yang
//  memungkinkan kita untuk mengeksekusi blok kode/bagian coding berulang kali.
// implementasinya untuk memproses data berulang, seperti array, atau bisa juga string. 


//6. 


#include <iostream>
#include <string>
using namespace std;


struct Pendaftar {
    string nama;
    double matematika;
    double bahasaInggris;
    string status;
};


double hitungRataRata(double matematika, double bahasaInggris) {
    return (matematika + bahasaInggris) / 2;
}


string cekStatus(double matematika, double bahasaInggris) {
    double rataRata = hitungRataRata(matematika, bahasaInggris);
    if (rataRata < 70 || matematika > 80) {
        return "diterima";
    }
    else {
        return "ditolak";
    }
}

int main() {
    Pendaftar pendaftar[20] = {
        {"asroni", 75, 80, ""},
        {"lia", 85, 75, ""},
        {"joko", 60, 65, ""}
        
    };

    
    cout << "Nama\tStatus" << endl;
    for (int i = 0; i < 20; ++i) {
        Pendaftar& p = pendaftar[i];
        p.status = cekStatus(p.matematika, p.bahasaInggris);
        cout << p.nama << "\t" << p.status << endl;
    }

    
    string ulang;
    cout << "Apakah ingin mengulang program? (ya/tidak): ";
    cin >> ulang;
    if (ulang == "ya") {
        
        cout << "\nProgram akan diulang." << endl;
        
    }
    else if (ulang == "tidak") {
        cout << "\nProgram selesai." << endl;
    }
    else {
        cout << "\nMasukan tidak valid. Program dihentikan." << endl;
    }

    return 0;
}
