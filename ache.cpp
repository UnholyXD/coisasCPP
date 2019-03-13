#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <cstdlib>

using namespace std;

main(){
    char vetor[301];
    int i, aux;
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));
    cout<<"São 300 posições, onde está o I???"<<endl;
   for(i=1;i<301;i++){
        vetor[i]= 'l';
    }

    cout<<"VAI GAROTO"<<endl;
    aux=rand()%301;
    //cout<<aux<<endl;
    vetor[aux]='I';

    for(i=1;i<301;i++){
        if(i%20==0){
            cout<<" "<<vetor[i]<<endl;
        }else{
            cout<<" "<<vetor[i];
        }
    }
    cout<<endl;
    cout<<"Onde está a letra diferente? "<<endl;
    cin>>aux;
    cout<<endl;

    if(vetor[aux]=='I'){
        cout<<"acertou!";
    }else
        cout<<"errou!";

    system("pause");

}

