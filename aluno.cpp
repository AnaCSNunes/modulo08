#include <iostream>
#include <string>

using namespace std;

class Aluno {
public:
    string nome;
    double nota1;
    double nota2;

    double calcularMedia() {
        return (nota1 + nota2) / 2.0;
    }

    void verificarAprovacao() {
        double media = calcularMedia();
        cout << "Aluno(a): " << nome << endl;
        cout << "Media: " << media << endl;
        
        if (media >= 7.0) {
            cout << "Situacao: Aprovado(a)!" << endl;
        } else {
            cout << "Situacao: Reprovado(a)." << endl;
        }
        cout << "------------------------" << endl;
    }
};

int main() {
    Aluno aluno1;
    aluno1.nome = "Lucas Martins";
    aluno1.nota1 = 8.5;
    aluno1.nota2 = 7.0;

    Aluno aluno2;
    aluno2.nome = "Mariana Costa";
    aluno2.nota1 = 5.5;
    aluno2.nota2 = 6.0;

    aluno1.verificarAprovacao();
    aluno2.verificarAprovacao();

    return 0;
}