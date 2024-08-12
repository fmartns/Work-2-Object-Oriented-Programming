#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
    double altura;
    double peso;
    double imc;
    string classificacao;

    void calcularIMC() {
        imc = peso / (altura * altura);
        classificarIMC();
    }

    void classificarIMC() {
        if (imc < 16.9) {
            classificacao = "Muito abaixo do peso";
        } else if (imc >= 17 && imc <= 18.4) {
            classificacao = "Abaixo do peso";
        } else if (imc >= 18.5 && imc <= 24.9) {
            classificacao = "Peso normal";
        } else if (imc >= 25 && imc <= 29.9) {
            classificacao = "Acima do peso";
        } else if (imc >= 30 && imc <= 34.9) {
            classificacao = "Obesidade grau I";
        } else if (imc >= 35 && imc <= 40) {
            classificacao = "Obesidade grau II";
        } else {
            classificacao = "Obesidade grau III";
        }
    }

public:
    Pessoa(double a, double p) : altura(a), peso(p) {
        calcularIMC();
    }

    double getIMC() const {
        return imc;
    }

    string getClassificacao() const {
        return classificacao;
    }
};

int main() {
    double altura, peso;

    cout << "Digite a sua altura (em metros): ";
    cin >> altura;

    cout << "Digite o seu peso (em kg): ";
    cin >> peso;

    Pessoa pessoa(altura, peso);

    cout << "O seu IMC é: " << pessoa.getIMC() << ", você se classifica como: " << pessoa.getClassificacao() << "." << endl;

    return 0;
}
