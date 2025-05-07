#include <iostream>
#include <conio.h>
using namespace std;

int nilai[5];
int n = sizeof(nilai)/sizeof(nilai[0]);


void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. Mengisi Data"<<"\n";            
cout<<"2. Menampilkan Data"<<"\n";            
cout<<"3. Exchange Sort"<<"\n";           
cout<<"4. Informasi"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void MengisiNilai(){
system("cls");
cout << "MONGGO ISI NILAI NYA " << endl << endl;
for (int i = 0; i < n ; i++)
{
  cout << "Masukan nilai ke- " << i + 1 << ":";
  cin >> nilai[i];
}
getch();
}

void info(string pesan){
  system("cls");
  cout<<"Barcelona gagal juara "<<pesan;
  getch();
}


int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    MengisiNilai();
    break;
   case '2':
    break;  
   case '3':
   
    /* code */
    break;  
   case '4':
    info("UCL");
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}