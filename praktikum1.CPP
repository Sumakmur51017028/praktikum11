#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
	struct lingkaran
   {
   	float jari;
      float keliling;
      float luas;
   }
    lingkaran;
   cout<<"masukkan jari-jari lingkaran :";cin>>lingkaran.jari;
   lingkaran.keliling=2*3.14259*lingkaran.jari;
   lingkaran.luas=3.14259*lingkaran.jari*lingkaran.jari;
   cout<<"keliling lingkaran = "<<lingkaran.keliling;
   cout<<"luas lingkaran= "<<lingkaran.luas;
   getch();
}
