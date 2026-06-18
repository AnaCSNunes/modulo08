#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public:
    string nome;
    int idade;

    void exibirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
    }
};

int main() {
    Pessoa pessoa1;
    
    pessoa1.nome = "Ana Silva";
    pessoa1.idade = 25;

    pessoa1.exibirDados();

    return 0;
}