#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int Nomor [8]={8,99,14,11,15,42,10,2};
	int temp;
	cout<<"Data Sebelum Diurutkan : \n";
	for (int a=0; a<8; a++)
	{
		cout<<setw(3)<<Nomor[a];
	}
	cout<<"\n\n";
	for(int i=0; i<7; i++)
		for(int j=0; j<7; j++)
		if (Nomor[j] >= Nomor[j+1])
			{
				temp=Nomor[j];
				Nomor[j]=Nomor[j+1];
				Nomor[j+1]=temp;
			}
	cout << "Data Setelah Diurutkan : \n";
	for (int b=0; b<8; b++)
	cout<< setw(3) << Nomor[b] << endl << endl;
}
