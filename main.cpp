#include <iostream>
#include <stdio.h>

using namespace std;

void move_disco(int discos, char origem, char destino, char auxiliar){
    if(discos==1){
        cout<<"Mover disco "<<discos<<" de "<<origem<<" para "<<destino<<endl;
    }else{
        move_disco(discos-1,origem,auxiliar,destino);
        cout<<"Mover disco "<<discos<<" de "<<origem<<" para "<<destino<<endl;
        move_disco(discos-1,auxiliar,destino,origem);
    }
}

int main(){
    int discos;
    cout << "Quantidade de Discos: ";
    cin >> discos;
    move_disco(discos,'A','C','B'); //ORIGEM = A, DESTINO = C, PONTO AUXILIAR = B
    return 0;
}
