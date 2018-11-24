#include<iostream>
using namespace std;

int tambah (float a, float b){
	return ( a + b );
	}

int kurang (float a, float b ){
	return ( a - b );
	}

int kali (float a, float b ){
	return ( a * b );
	}

int bagi (float a, float b ){
	return (a / b );
	}

int main (){
int bilangan1, bilangan2;
int pilihan;

do
{
cout<<" ========================================"<<endl;
cout<<" |	Program Kalkulator Sederhana	|"<<endl;
cout<<" |	     Etrian Martianto	        |"<<endl;
cout<<" |	         TI.18.C2               |"<<endl;
cout<<" |	         311810846              |"<<endl;
cout<<" ========================================"<<endl;
cout<<endl;
cout<<" ========================================"<<endl;
cout<<" |	     Masukan Pilihan		|"<<endl;
cout<<" ========================================"<<endl;
cout<<" |					|"<<endl;
cout<<" |	(1) Tambah	(3) Kurang	|"<<endl;
cout<<" |	(2) Kali	(4) Bagi	|"<<endl;
cout<<" |					|"<<endl;
cout<<" ========================================"<<endl;
cout<<" Masukan Pilihan		: ";cin>>pilihan;
cout<<endl;

switch(pilihan)

{
case 1 :
	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bilangan1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bilangan2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<< bilangan1+bilangan2 <<"			|"<<endl;
	cout<<" ========================================"<<endl;
	break;

case 2 :
	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bilangan1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bilangan2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<< bilangan1*bilangan2 <<"			|"<<endl;
	cout<<" ========================================"<<endl;
	break;

case 3 :
	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bilangan1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bilangan2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<< bilangan1-bilangan2 <<"			|"<<endl;
	cout<<" ========================================"<<endl;
	break;

case 4 :
	cout<<" ========================================"<<endl;
	cout<<" |	     Masukan Bilangan		|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" |					|"<<endl;
	cout<<" | Masukan Bilangan pertama : ";cin>>bilangan1;
	cout<<" | Masukan Bilangan kedua : ";cin>>bilangan2;
	cout<<" |					|"<<endl;
	cout<<" ========================================"<<endl;
	cout<<" | Hasilnya Adalah : "<< bilangan1/bilangan2 <<"			|"<<endl;
	cout<<" ========================================"<<endl;
	break;
	}
}
while(pilihan!=0);
}
