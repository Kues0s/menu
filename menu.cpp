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


void tampil(int nilai[]){
  system("cls");
  cout << "Berikut keseluruhan nilai:" << endl;
  for(int i = 0 ; i < n; i++){
    cout << nilai[i] << " ";
  }
  getch();
}
void tukar(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void exchangesort(int nilai[]){
  system("cls");
  cout << "pilih huruf 'u' untuk ascending dan huruf 'd' untuk descending : " << endl;
  char x = getch();
  getch();

  switch (x)
  {
  case 'u':
  {
    system("cls");
  for(int i = 0 ; i < n - 1 ; i++){
    for(int j = i + 1; j < n; j++ ){
      if(nilai[i] > nilai[j]){
        tukar(&nilai[i], &nilai [j]); 
      }
      for(int k = 0 ; k < n ; k++){
        cout << nilai[k] << " ";
      }
      cout << endl;
    }
    cout << endl ;
  }
  cout << "berhasil ascending, hasil juga bisa dilihat dimenu menampilkan data "<< endl;
  }
  break;

  case 'd':
  {
    system("cls");
  for(int i = 0 ; i < n - 1 ; i++){
    for(int j = i + 1; j < n; j++ ){
      if(nilai[i] < nilai[j]){
        tukar(&nilai[i], &nilai [j]); 
      }
      for(int k = 0; k < n ; k++){
        cout << nilai[k] << " ";
      } 
      cout << endl;
      }
      cout << endl;
    }
  }

  cout << endl;
  cout << "berhasil descending, hasil juga bisa dilihat dimenu menampilkan data" << endl;
  break;
  default:
  system("cls");
    cout << " Mohon input sesuai dengan ketentuan";
  break;
  }
  getch();
}

void info(string pesan){
  system("cls");
  for(int i = 0 ; i < 10; i++){
    cout<<"Secapek-capeknya kerja lebih capek nganggur "<<pesan << endl;
  }
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
   tampil(nilai);
    break;  
   case '3':
   exchangesort(nilai);
    /* code */
    break;  
   case '4':
    info("-Ernest Prakasa");
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