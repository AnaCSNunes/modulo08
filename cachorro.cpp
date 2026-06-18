#include <iostream>
#include <string>

using namespace std;

class Cachorro
{
public:
    string nome;
    string raca;

    void latir()
    {
        cout << "Ralf Ralf! O cachorro " << nome << " esta latindo." << endl;
    }
};

int main()
{
    Cachorro meuCachorro;

    meuCachorro.nome = "Rex";
    meuCachorro.raca = "Pastor Alemao";

    meuCachorro.latir();

    return 0;
}