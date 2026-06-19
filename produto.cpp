#include <iostream>
#include <string>

using namespace std;

class Produto {
protected:
    string nome;
    double preco;

public:
    Produto(string n, double p) : nome(n), preco(p) {}

    virtual void exibirDados() {
        cout << "Produto: " << nome << " | Preco: R$ " << preco << endl;
    }
};

class Livro : public Produto {
private:
    string autor;

public:
    Livro(string n, double p, string a) : Produto(n, p), autor(a) {}

    void exibirDados() override {
        cout << "Livro: " << nome << " | Autor: " << autor << " | Preco: R$ " << preco << endl;
    }
};

class Eletronico : public Produto {
private:
    string marca;

public:
    Eletronico(string n, double p, string m) : Produto(n, p), marca(m) {}

    void exibirDados() override {
        cout << "Eletronico: " << nome << " | Marca: " << marca << " | Preco: R$ " << preco << endl;
    }
};

int main() {
    Livro livro1("O Alquimista", 45.90, "Paulo Coelho");
    Livro livro2("Dom Casmurro", 32.50, "Machado de Assis");

    Eletronico eletronico1("Smartphone", 2500.00, "Samsung");
    Eletronico eletronico2("Notebook", 4200.00, "Dell");

    livro1.exibirDados();
    livro2.exibirDados();
    eletronico1.exibirDados();
    eletronico2.exibirDados();

    return 0;
}