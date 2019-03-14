#include <iostream>
#include <stack>

using namespace std;

void mostraPilha(stack <int> pilha);

int main (){
    setlocale(LC_ALL,"portuguese");
    stack <int> pilha;
    pilha.push(10);
    pilha.push(30);
    pilha.push(20);
    pilha.push(5);
    pilha.push(1);

    cout << "Esta é a pilha: ";
    mostraPilha(pilha);

    cout << "\nTamanho da Pilha: " << pilha.size();
    cout << "\nMostrando topo da Pilha: " << pilha.top();

    cout << "\nRemovendo item da Pilha: ";
    pilha.pop();
    mostraPilha(pilha);
}

void mostraPilha(stack <int> pilha){
    while (!pilha.empty()){
        cout << " || " << pilha.top();
        pilha.pop();
    }
    cout << '\n';
}
