#include <iostream>
using namespace std;

//Fungsi untuk menampilkan polinom ke layar
void tulispolinom(float polinom[], int derajat){
  for(int i=derajat;0<=i;i--){
    if(i==derajat){
      cout<<polinom[i]<<"x^"<<i;
    }
    else if ((i==0)&&(polinom[i]>0)){
      cout<<" + "<<polinom[i];
    }
    else if ((i==0)&&(polinom[i]<0)){
      cout<<" - "<<-1*polinom[i];
    }
    else if (polinom[i]>0){
      cout<<" + "<<polinom[i]<<"x^"<<i;
    }
    else if (polinom[i]<0){
      cout<<" - "<<(-1*polinom[i])<<"x^"<<i;
    }
    }
  }

int main()
{
  //Layar awal
  cout<<"Tugas 2 Programming URO \nOperasi Polinom\n";
  int kodeoperasi,d1,d2,d3,dh,i;
  cout<<"1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Turunan\n";
  cout<<"Pilih Operasi yang Diinginkan:\n";
  cin>>kodeoperasi;
  //input polinom
  if(kodeoperasi!=4){
    cout<<"Masukkan derajat dari polinom pertama: \n";
    cin>>d1;
    float polinom1[d1+1];
    for(i=0;i<=d1;++i){
      cout<<"Masukkan koefisien x^"<<(d1-i)<<": ";
      cin>>polinom1[d1-i];
    }
    cout<<"Masukkan derajat dari polinom kedua: \n";
    cin>>d2;
    float polinom2[d2+1];
    for(i=0;i<=d2;++i){
      cout<<"Masukkan koefisien x^"<<(d2-i)<<": ";
      cin>>polinom2[d2-i];
    }
    //penjumlahan polinom
    if(kodeoperasi==1){
    float polinomhasil1 [99];
        int d4;

        if(d2>d1){d4=d2;}
            else{d4=d1;}

        for(i=0;i<=d4;i++){
            polinomhasil1 [i]= polinom1[i]+ polinom2[i];}


     cout<<"  "<<endl;

     cout<<"Polinom 1 :";
     tulispolinom(polinom1,d1);
     cout<<endl;
     cout<<"Polinom 2 :";
     tulispolinom(polinom2,d2);
     cout<<endl;
     cout<<"Hasil Penjumlahan :";
     tulispolinom(polinomhasil1,d4);
     cout<<endl;
     cout<<"  "<<endl;
    }
    //pengurangan polinom
    else if(kodeoperasi==2){
      float polinomhasil2 [99];
        int d5;

        if(d2>d1){d5=d2;}
            else{d5=d1;}

        for(i=0;i<=d5;i++){
            polinomhasil2 [i]= polinom1[i]- polinom2[i];}


     cout<<"  "<<endl;

     cout<<"Polinom 1 :";
     tulispolinom(polinom1,d1);
     cout<<endl;
     cout<<"Polinom 2 :";
     tulispolinom(polinom2,d2);
     cout<<endl;
     cout<<"Hasil Pengurangan :";
     tulispolinom(polinomhasil2,d5);
     cout<<endl;
     cout<<"  "<<endl;
    
    }
    //perkalian polinom
    else if(kodeoperasi==3){
    
    }
  } //turunan polinom
  else if(kodeoperasi==4){
    // input polinom
    cout<<"Masukkan derajat dari polinom: \n";
    cin>>d3;
    int dh=d3-1;
    float polinom3[d3+1],hasil[dh];
    for(i=0;i<=d3;++i){
      cout<<"Masukkan koefisien x^"<<(d3-i)<<": ";
      cin>>polinom3[d3-i];
      //menghitung turunan polinom
      if(i!=d3){
      hasil[d3-1-i]=(d3-i)*polinom3[d3-i]; 
      }
    }
    //Menampilkan hasil turunan polinom
    cout<<"Turunan polinom ";
    tulispolinom(polinom3,d3);
    cout<<" adalah: "<<endl;
    tulispolinom(hasil,dh);
  }
}
