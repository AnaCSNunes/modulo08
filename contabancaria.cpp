#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
public:
    string titular;
    double saldo;

    void depositar(double valor) {
        saldo = saldo + valor;
    }

    void sacar(double valor) {
        saldo = saldo - valor;
    }
};

int main() {
    ContaBancaria minhaConta;
    
    minhaConta.titular = "Carlos Andrade";
    minhaConta.saldo = 500.0;

    minhaConta.depositar(250.0);
    minhaConta.sacar(100.0);

    cout << "Titular: " << minhaConta.titular << endl;
    cout << "Saldo final: R$ " << minhaConta.saldo << endl;

    return 0;
}