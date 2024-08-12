#include <iostream>

using namespace std;

double coletaPeso();
double coletaAltura();
double retornaIMC();
string classificaIMC(double imc);

int main()
{
    double imc = retornaIMC();
    string classificao = classificaIMC(imc);
    cout << "O seu IMC é: " << imc << ", você se classifica como: " << classificao << "." << endl;

    return 0;
}

double coletaPeso(){
    double peso;
    cout << "Digite o seu peso: ";
    cin >> peso;
    return peso;
}

double coletaAltura(){
    double peso;
    cout << "Digite o sua altura: ";
    cin >> peso;
    return peso;
}

double retornaIMC(){
    double peso = coletaPeso();
    double altura = coletaAltura();
    return peso / (altura * altura);
}

string classificaIMC(double imc){
    
    if(imc < 16.9){
        return "Muito abaixo do peso";
    } else if(imc >= 17 && imc <= 18.4){
        return "Abaixo do peso";
    } else if(imc >= 18.5 && imc <= 24.9){
        return "Peso normal";
    } else if(imc >= 25 && imc <= 29.9){
        return "Acima do peso";
    } else if(imc >= 30 && imc <= 34.9){
        return "Obesidade grau I";
    } else if(imc >= 35 && imc <= 40){
        return "Obseidade grau II";
    } else {
        return "Obseidade grau III";
    }
}