#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>
#include <cstdlib>

using namespace std;

main(){
    char vetor[101];
    int i, aux;
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));
    cout<<"São 100 posições, onde está o I???"<<endl;
   for(i=1;i<101;i++){
        vetor[i]= 'l';
    }

    cout<<"VAI GAROTO"<<endl;
    aux=rand()%100+1;
    //cout<<aux<<endl;
    vetor[aux]='I';
    for(i=1;i<11;i++){
        cout.width(2);
        cout<<" "<<i;
    }
    cout<<endl;
    cout<<endl;
    for(i=1;i<101;i++){
        if(i%10==0){
            cout.width(3);
            cout<<vetor[i]<< "    "<<i-10<<endl;
        }else{
            cout.width(3);
            cout<<vetor[i];
        }
    }
    cout<<endl;
    cout<<"Onde está a letra diferente? "<<endl;
    cin>>aux;
    cout<<endl;

    if(vetor[aux]=='I'){
        cout<<"acertou!"<<endl;
    }else
        cout<<"errou!"<<endl;

    system("pause");

}


