#include <iostream>
#include <string>

using namespace std;

class Aula
{
private:
    string assunto;

public:
    Aula(string assunto)
    {
        this->assunto = assunto;
    }

    void preparar()
    {
        cout << this->assunto << ": Desmistificando a Linguagem C++" << endl;
    }
};

int main()
{

    Aula minhaAula("Programacao Orientada a Objetos");
    minhaAula.preparar();

    return 0;
}