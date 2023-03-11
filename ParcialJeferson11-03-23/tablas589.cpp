//
// Created by jefer on 11/03/2023.
//
#include "iostream"
using namespace std;

int main(){
    int tabla5=5,tabla8=8,tabla9=9;
    cout << "\n";
    cout<< "La tabla de " << tabla5 << "\n";
    for(int i=1;i<=10;i++){
        int multiplicacion = i * tabla5;
        cout<< tabla5 <<" x "<< i <<" = "<< multiplicacion <<endl;
    }
    cout << "\n";
    cout<< "La tabla de " << tabla8 << "\n";
    for(int i=1;i<=10;i++){
        int multiplicacion = i * tabla8;
        cout<< tabla8 <<" x "<< i <<" = "<< multiplicacion <<endl;
    }
    cout << "\n";
    cout<< "La tabla de " << tabla9 << "\n";
    for(int i=1;i<=10;i++){
        int multiplicacion = i * tabla9;
        cout<< tabla9 <<" x "<< i <<" = "<< multiplicacion <<endl;
    }
    return 0;
}