#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "header7.h"

using namespace std;

int main()
{
    int n;
    int t1, t2;
    address P;
    Stack S1,S2,S3;
    createStack(&S1);
    createStack(&S2);
    createStack(&S3);
    cout << "Masukkan jumlah cakram: ";
    cin >> n;
    createHanoi(&S1,n);
    printInfo(S1);
    printInfo(S2);
    printInfo(S3);

    cout << "Tower asal: ";
    cin >> t1;
    cout << "Tower tujuan: ";
    cin >> t2;
    if( t1==1 && t2 ==2){
        Move(&S1, S2);
        if(Move(&S1, S2)==true){
            cout << "Cakram berhasil dipindah";
        }
        else{
            cout <<"Cakram gagal dipindah";
        }
        cout << "\n";
    }
    else if( t1==1 && t2 ==3){
        Move(&S1, S3);
        if(Move(&S1, S3)==true){
            cout << "Cakram berhasil dipindah";
        }
        else{
            cout <<"Cakram gagal dipindah";
        }
        cout << "\n";
    }
    else if( t1==2 && t2 ==1){
        Move(&S2, S1);
        if(Move(&S2, S1)==true){
            cout << "Cakram berhasil dipindah";
        }
        else{
            cout <<"Cakram gagal dipindah";
        }
        cout << "\n";
    }
    else if( t1==2 && t2 ==3){
        Move(&S2, S3);
        if(Move(&S2, S3)==true){
            cout << "Cakram berhasil dipindah";
        }
        else{
            cout <<"Cakram gagal dipindah";
        }
        cout << "\n";
    }
    else if( t1==3 && t2 ==1){
        Move(&S3, S1);
        if(Move(&S3, S1)==true){
            cout << "Cakram berhasil dipindah";
        }
        else{
            cout <<"Cakram gagal dipindah";
        }
        cout << "\n";
    }
    else if( t1==3 && t2 ==2){
        Move(&S3, S2);
        if(Move(&S3, S2)==true){
            cout << "Cakram berhasil dipindah";
        }
        else{
            cout <<"Cakram gagal dipindah";
        }
        cout << "\n";
    }
    printInfo(S1);
    printInfo(S2);
    printInfo(S3);
    return 0;
}
