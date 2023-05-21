#include<iostream>
using namespace std;
//if/else - and/or/not
int main(){
    float nota1,nota2;
    cout<<"Informe a nota1\n";
    cin>> nota1;
    cout<<"Informe a anota2\n";
    cin>>nota2;
    float media = (nota1 + nota2)/2;
    cout<<"Media ="<<media<<endl;

    //comparações: igual: ==, diferente: !=, outros:>,<,
    //if(media >= 5){
    // cout<<"Aluno aprovado";
    //}
    //if(media>=5){
    //    cout<<"Aluno aprovado";
    //}else{
    //    cout<<"aluno reprovado\n";
    //}

    //0-2.5 D, 2,5- C, 5-7.5 b, 7.5-10 A
    if (media < 2.5){
        cout<<"Nota Final: D\n"; 
    }  else if(media < 5){
        cout<<" Nota Final: C\n";
    }  else if(media < 7.5){
        cout<<"Nota Final: B\n";
    }  else{
        cout<<"Nota Final: A\n";
    }
    //Operadores Lógicos: &&< ou: ||, Não:!
    float freq;
    cout<<"qual e a frequencia do aluno?\n";
    cin>>freq;

    //if(media >= 5 && freq >= 75){
    //  cout<<"Aluno Aprovado!\n";
    //}else{
    //   cout<<"Aluno Reprovado!\n";
    //}

    //if(media < 5 || freq < 75){
    //  cout<<"Aluno Reprovado!\n":
    //else{
    //  cout<<"aluno Aprovado!\n";
    //}
    //Operadores ternário
    (media >= 5 && freq >= 75)? cout<<"Aprovado": cout<<"Reprovado";
    return 0;

    }
