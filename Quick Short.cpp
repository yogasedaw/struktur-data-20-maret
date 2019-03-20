#include<iostream>
#include<iomanip>
#include <conio.h>
using namespace std;

void quickSort(int[], int);
void q_sort(int[], int, int);

int main()
{


	int listnomor[8]={8,99,14,11,15,42,10,2};
	int temp;
	cout << " Data Sebelum Diurutkan: \n";
	for(int i=0; i<8; i++)
	{
		cout << setw(3) << listnomor[d];
	}
	cout << "\n\n";
	quickSort (listnomor,8);
	cout << "Data Setelah Diurutkan: \n";
	for ( int j=0; j<8; j++ )
	cout << setw(3) << listnomor[j] << endl << endl;
}

void quickSort(int nomor[], int array_size)
{
	q_sort(nomor, 0, array_size-1);
}

void q_sort(int nomor[], int kiri, int kanan)
{
	int pivot, l_hold, r_hold;

	l_hold = kiri;
	r_hold = kanan;
	pivot = nomor[kiri];
	while (kiri < kanan)
	{
		while((nomor[kanan] >= pivot) && (kiri < kanan))
			kanan--;
		if(kiri != kanan)
		{
			nomor[kiri]=nomor[kanan];
			kiri++;
		}
		while ((nomor[kiri] <= pivot) && (kiri < kanan))
			kiri++;
		if (kiri != kanan)
		{
			nomor[kanan]=nomor[kiri];
			kanan--;


		}
	}
	nomor[kiri] = pivot;
	pivot = kiri;
	kiri = l_hold;
	kanan = r_hold;
	if (kiri < pivot)
		q_sort(nomor, kiri, pivot-1);
	if (kanan > pivot)
		q_sort(nomor, pivot+1, kanan);
}
