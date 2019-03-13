#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM]);
void colocaZeroNoVetor(int vetor[TAM]);
void push(int pilha[TAM], int valor, int *topo);
void encheVetor(int vetor[TAM]);

main (){
    int pilha[TAM], topo = -1, base;

    colocaZeroNoVetor(pilha);
    push(pilha, 5, &topo);
    imprimeVetor(pilha);
}

void imprimeVetor(int vetor[TAM]){
       cout<<"| ";
        for(int i=0; i<TAM;i++){
        cout<<vetor[i]<<" | ";
    }
}

void colocaZeroNoVetor(int vetor[TAM]){
    for(int i=0; i<TAM;i++){
        vetor[i]=0;
    }
}

void push(int pilha[TAM], int valor, int *topo){
    if(*topo==TAM-1){
        cout<<"pilha cheia"<<endl;
    }else{
        *topo+=1;
        pilha[*topo]=5;
    }
}

void encheVetor(int vetor[10]){
    srand(time(NULL));
    for(int i=0; i<10;i++){
        vetor[i]=rand()%50;
    }
}
