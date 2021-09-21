#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float hargamotor,lamakredit,hargapokok,bunga,cicilan,totalhargamotor,keuntungandiler;
	cout << "Harga Motor = ";
	cin >> hargamotor;
	cout <<"Lama Kredit (dalam bulan)";
	cin >> lamakredit;
	hargapokok=hargamotor/lamakredit;
	bunga=hargapokok*0.1;
	totalhargamotor=cicilan*lamakredit;
	keuntungandiler=totalhargamotor-hargamotor;
	cout << "Harga Pokok = " <<hargapokok;
	cout << "\nBunga = " <<bunga;
	cout << "\nCicilan = " <<cicilan;
	cout << "\nTotal Harga Motor = " <<totalhargamotor;
	cout << "\nKeuntungan Diler = " <<keuntungandiler;
	getchar() ;
	return 0 ;
}
