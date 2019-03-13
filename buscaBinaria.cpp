#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <cstdlib>

using namespace std;

bool buscaBinaria(int vetor[10], int valorProcurado, int *posicao);
void imprimeVetor(int vetor[10]);
void organizaVetor(int vetor[10]);
void encheVetor(int vetor[10]);

main(){
    int vetor[10];
    int valorProcurado, posicao;;
    bool achou;

    encheVetor(vetor);
    organizaVetor(vetor);
    imprimeVetor(vetor);

    cout<<"\nqual numero tu buscas?"<<endl;
    cin>>valorProcurado;



    if(buscaBinaria(vetor, valorProcurado, &posicao)== true){
        cout<<"Valor encontrado na posicao "<<posicao;
    }else{
        cout<<"Valor nao encontrado";
    }
}

void encheVetor(int vetor[10]){
    int aux;
    srand(time(NULL));
    for(int i=0; i<10;i++){
        vetor[i]=rand()%50;
    }
}

void organizaVetor(int vetor[10]){
    int aux;
    for(int i=0; i<10;i++){
        for(int j = 0; j<10;j++){
            if(vetor[i]<vetor[j]){
                aux= vetor[i];
                vetor[i]=vetor[j];
                vetor[j]= aux;
            }
        }
    }
}


void imprimeVetor(int vetor[10]){
       cout<<"| ";
        for(int i=0; i<10;i++){
        cout<<vetor[i]<<" | ";
    }
}
bool buscaBinaria(int vetor[10], int valorProcurado, int *posicao){
    int aux;
    int esquerda=0, direita= 9, meio;


    while(esquerda<=direita){
        meio = (esquerda+direita)/2;
        if(valorProcurado == vetor[meio]){
            *posicao = meio;
            aux = 1;
        }
        if(vetor[meio]<valorProcurado){
            esquerda=meio+1;
        }else{
            direita= direita-1;
        }
    }

    if(aux==1){
        return true;
    }else
    return false;
}
