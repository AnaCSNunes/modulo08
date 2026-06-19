#include <iostream>
#include <string>

using namespace std;

class Funcionario {
protected:
    string nome;
    double salario;

public:
    Funcionario(string n, double s) : nome(n), salario(s) {}

    virtual double calcularSalarioTotal() {
        return salario;
    }

    void exibirDados() {
        cout << "Nome: " << nome << " | Salario Total: " << calcularSalarioTotal() << endl;
    }
};

class Gerente : public Funcionario {
public:
    Gerente(string n, double s) : Funcionario(n, s) {}

    double calcularSalarioTotal() override {
        return salario * 1.20;
    }
};

int main() {
    Funcionario func("Joao", 3000.0);
    Gerente ger("Maria", 5000.0);

    func.exibirDados();
    ger.exibirDados();

    return 0;
}