#include<iostream>
using namespace std;

int main(){
int b1,b2,b3,Terkecil ;

cout<<"PROGRAM MENENTUKAN BILANGAN TERKECIL DARI 3 BILANGAN YANG DI INPUTKAN"<<endl;
cout<<"Masukan Bilangan Pertama : ";
cin>>b1;
cout<<"Masukan Bilangan Kedua   : ";
cin>>b2;
cout<<"Masukan Bilangan Ketiga  : ";
cin>>b3;
{
if(b1<b2)
        Terkecil = b1;
else
        Terkecil = b2;
if(b3<Terkecil)
 Terkecil = b3;
cout<<endl;
cout<<"Bilangan Terkecil Adalah = "<<Terkecil;
cout<<endl;
}
return 0;

}
