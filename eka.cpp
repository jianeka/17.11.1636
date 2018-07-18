#include <iostream>
#include <conio.h>
using namespace std;
 
 class kalkulator //identifier
 {
	 public:		//access specifier
	 int x,y,jml;	//menyimpan nilai
	 void angka1()	//input nilai
    {
        cout<<"Masukkan angka pertama: ";
    }
    void angka2()	//input nilai
    {
        cout<<"Masukkan angka kedua: ";
    }
    int tambah() //menampilkan nilai yang telah dihitung oleh rumus
    {
        jml=x+y;
        cout<<"Hasilnya Penambahannya adalah "<<jml;
    }
    int kurang() //menampilkan nilai yang telah dihitung oleh rumus
    {
        jml=x-y;
        cout<<"Hasilnya Pengurangannya adalah "<<jml;
    }
    int kali() //menampilkan nilai yang telah dihitung oleh rumus
    {
        jml=x*y;
        cout<<"Hasilnya Pengaliannya adalah "<<jml;
    }
    int bagi() //menampilkan nilai yang telah dihitung oleh rumus
    {
        jml=x/y;
        cout<<"Hasilnya Pembagiannya adalah "<<jml;
    }
};
 
int main() {
kalkulator z;	//pemanggilan class
int i,pil;		//integer untuk login page dan pemilihan di menu
char ch;		//tipe data char untuk username di login page 
cout << "============================\n";
cout << "\tSelamat Datang\n";
cout << "============================\n";
    for (i=1; i<=3; i++) {
       string user = "";
       string pass = "";
       cout << "Username : "; cin >> user;
       cout << "Password : ";
            ch = _getch();
            while(ch != 13){//character 13 is enter
            pass.push_back(ch);
            cout << '*';	//digunakan untuk membuat tampilan password agar menampilkan input sebagai bintang di tampilan
            ch = _getch();
            }
	cout<<"\n\nSelamat Datang "<<user;cout<<"-kun";
	cout<<"\n\n";
	cout<<"=============================\n";
	cout<<"Program Kalkulator Sederhana\n";
	cout<<"=============================\n";
	cout<<"1.Penambahan\n2.Pengurangan\n3.Perkalian\n4.Pembagian\n";
	cout<<"Masukkan pilihan anda: ";
    cin>>pil;
	switch (pil){
        case 1:		//case 1 untuk penjumlahan
 
        z.angka1();
        cin>>z.x;
        z.angka2();
        cin>>z.y;
        z.tambah();
        break;
 
        case 2:		//case 2 untuk pengurangan
        z.angka1();
        cin>>z.x;
        z.angka2();
        cin>>z.y;
        z.kurang();
        break;
 
        case 3:		//case 3 untuk pengalian
        z.angka1();
        cin>>z.x;
        z.angka2();
        cin>>z.y;
        z.kali();
        break;
 
        case 4:		//case 4 untuk pembagian
        z.angka1();
        cin>>z.x;
        z.angka2();
        cin>>z.y;
        z.bagi();
        break;
    }
    return 0;
	}
       
   
   getch();
}
