#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//xxx.open() -> SE JÁ TIVER UM ARQUIVO COM O NOME arrozcovo.txt VAI SER SUBSTITUIDO, ENTÃO SE QUISER PRESERVAR DADOS NO ARQUIVO, NÃO FAÇA ISSO.
//xxx.open() -> SE JÁ TIVER UM ARQUIVO COM O NOME arrozcovo.txt VAI SER SUBSTITUIDO, ENTÃO SE QUISER PRESERVAR DADOS NO ARQUIVO, NÃO FAÇA ISSO.
//xxx.open() -> SE JÁ TIVER UM ARQUIVO COM O NOME arrozcovo.txt VAI SER SUBSTITUIDO, ENTÃO SE QUISER PRESERVAR DADOS NO ARQUIVO, NÃO FAÇA ISSO.
//xxx.open() -> SE JÁ TIVER UM ARQUIVO COM O NOME arrozcovo.txt VAI SER SUBSTITUIDO, ENTÃO SE QUISER PRESERVAR DADOS NO ARQUIVO, NÃO FAÇA ISSO.
//xxx.open() -> SE JÁ TIVER UM ARQUIVO COM O NOME arrozcovo.txt VAI SER SUBSTITUIDO, ENTÃO SE QUISER PRESERVAR DADOS NO ARQUIVO, NÃO FAÇA ISSO.

int main(){

    ofstream arquivoDeSaida; //cout replacement, tudo que foi feito com arquivoDeSaida, poderia ser feito com cout, cout porem vai mostrar na tela, 
    //arquivodeSaida (variavel do tipo ofstream), vai botar no arquivo.

    arquivoDeSaida.open("arrozcovo.txt", ios::app); //.txt não é necessário, é mais pra concepção humana e pra facilitar na hora do windows abrir o programa, 
    //já que ele sabe qual o programa default pra abrir arquivos .txt
    //IOS:APP NÃO SOBRESCREVE QUE NEM O OPEN()
    //IOS:APP NÃO SOBRESCREVE QUE NEM O OPEN()
    //IOS:APP NÃO SOBRESCREVE QUE NEM O OPEN()
    //IOS:APP NÃO SOBRESCREVE QUE NEM O OPEN()
    //IOS:APP NÃO SOBRESCREVE QUE NEM O OPEN()
    //IOS:APP NÃO SOBRESCREVE QUE NEM O OPEN()
    //IOS:APP NÃO SOBRESCREVE QUE NEM O OPEN()
    //IOS:APP NÃO SOBRESCREVE QUE NEM O OPEN()
    string arroz = "398249aaaa";

    if(arquivoDeSaida){ //se abrir, arquivoDeSaida será true, logo entra no if
        //cout << 88 // se tivesse mostrando na tela, como não é na tela e sim no arquivo, faz da forma abaixo
        arquivoDeSaida << arroz << endl;  //100000 + ";"; NÃO FUNCIONA PRA ADICIONAR VIRGULA, APAGA O CONTEUDO TODO. O problema é fazer assim, não adiantar botar assim em outra variavel e usar
        arquivoDeSaida << "maGAROTAO;" << endl; //endl pra quebra de linha
        
        arquivoDeSaida.close();
    }else{
        cout << "Erro ao abrir o arquivo arrozcovo.txt";
    }
}