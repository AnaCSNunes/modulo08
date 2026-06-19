#include <iostream>
#include <string>

using namespace std;

class Veiculo
{
protected:
    string marca;

public:
    Veiculo(string m) : marca(m) {}
};

class Carro : public Veiculo
{
private:
    string modelo;

public:
    Carro(string m, string mod) : Veiculo(m), modelo(mod) {}

    void exibirDados()
    {
        cout << "Carro: " << marca << " " << modelo << endl;
    }
};

int main()
{
    Carro meuCarro("Toyota", "Corolla");
    meuCarro.exibirDados();

    return 0;
}