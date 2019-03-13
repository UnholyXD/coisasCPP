#include <iostream>
#include <string>

using namespace std;

bool buscaValor(int vetor[10], int valorProcurado, int *posicao);
void imprimeVetor(int vetor[10]);

main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int valorProcurado, posicao;;
    bool achou;

    imprimeVetor(vetor);

    cout<<"\nqual numero tu buscas?"<<endl;
    cin>>valorProcurado;



    if(buscaValor(vetor, valorProcurado, &posicao)== true){
        cout<<"Valor encontrado na posicao "<<posicao;
    }else{
        cout<<"Valor nao encontrado";
    }
}

void imprimeVetor(int vetor[10]){
        for(int i=0; i<10;i++){
        cout<<vetor[i]<<" | ";
    }
}
bool buscaValor(int vetor[10], int valorProcurado, int *posicao){
       int aux;
       for(int i=0; i<10;i++){
        if(vetor[i] == valorProcurado){
            *posicao = i;
            aux=1;
        }
    }
    if(aux==1){
        return true;
    }else
    return false;
}
