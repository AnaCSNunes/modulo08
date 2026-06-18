#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    string especie;
    string som;

    void emitir_som()
    {
        cout << "O(A) " << especie << " faz: " << som << endl;
    }
};

int main()
{
    Animal meuAnimal;

    meuAnimal.especie = "Gato";
    meuAnimal.som = "Miau Miau";

    meuAnimal.emitir_som();

    return 0;
}