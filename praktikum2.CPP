#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int main()
{
struct tgl
{
unsigned int hari;
unsigned int bulan;
unsigned tahun;
};
struct alamat
{
char jalan[30];
char kota[20];
};
struct
{
char nama[40];
struct tgl masuk;
struct alamat tinggal;
float gaji;
}
karyawan={"yuni chairun nisa",11,06,2008,"Jl.kedondong 56", "lumajang",900000};
cout<<"\n\n data karyawan \n";
cout<<"\n-----------------------------------\n\n";
cout<<"Nama karyawan : "<<karyawan.nama<<"\n";
cout<<"Tanggal masuk : "<<karyawan.masuk.hari<<karyawan.masuk.bulan<<karyawan.masuk.tahun<<"\n";
cout<<"Alamat        : "<<karyawan.tinggal.jalan<<" "<<karyawan.tinggal.kota<<"\n";
cout<<"gaji per bulan : RP "<<karyawan.gaji;
getch();
}