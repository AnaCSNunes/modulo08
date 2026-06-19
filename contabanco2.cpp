#include <iostream>
#include <string>

using namespace std;

class ContaBancaria
{
private:
    string titular;
    double saldo;

public:
    ContaBancaria(string t, double s) : titular(t), saldo(s) {}

    string getTitular() const { return titular; }
    double getSaldo() const { return saldo; }

    void depositar(double valor)
    {
        if (valor > 0)
        {
            saldo += valor;
            cout << "Deposito de R$ " << valor << " realizado!" << endl;
        }
        else
        {
            cout << "Valor invalido para deposito!" << endl;
        }
    }

    bool sacar(double valor)
    {
        if (valor > 0 && valor <= saldo)
        {
            saldo -= valor;
            cout << "Saque de R$ " << valor << " realizado!" << endl;
            return true; // Corrigido: adicionado ';'
        } // Corrigido: removido ';' desnecessário daqui
        else
        {
            cout << "Saldo insuficiente ou valor invalido!" << endl;
            return false; // Corrigido: adicionado ';'
        }
    }
}; // Corrigido: adicionado ';' no fim da classe

int main()
{
    ContaBancaria conta("Joao Silva", 1000.00);
    cout << "Titular: " << conta.getTitular() << endl;
    cout << "Saldo inicial: R$ " << conta.getSaldo() << endl;

    conta.depositar(500.00); // Corrigido: era 'deposito'
    conta.sacar(200.00);
    conta.sacar(2000.00);

    cout << "Saldo final: R$ " << conta.getSaldo() << endl;

    return 0;
}