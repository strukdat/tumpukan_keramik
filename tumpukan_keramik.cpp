#include "tumpukan.h"
#include "keramik.h"
#include <iostream>
#include <conio.h>
using namespace std;

main(void){
    int pil;
    string data;
    awal();
    
do{
    cout<<endl<<endl<<"PROGRAM TUMPUKAN KERAMIK"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"\n1. Input\n2. Hapus\n3. Tampil\n4. Bersihkan\n5. Keluar\nMasukan pilihan : ";
    cin>>pil;
    switch (pil){
