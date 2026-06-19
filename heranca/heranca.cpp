#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
protected:
    string nome;

public:
    Pessoa(string n) : nome(n) {}

    virtual void falar()
    {
        cout << nome << " está falando." << endl;
    }
};

class Professor : public Pessoa
{
private:
    string disciplina;

public:
    Professor(string n, string d) : Pessoa(n), disciplina(d) {}

    void falar() override
    {
        cout << "Professor(a) " << nome << " está ensinando " << disciplina << "." << endl;
    }
};

class Aluno : public Pessoa
{
private:
    int matricula;

public:
    Aluno(string n, int m) : Pessoa(n), matricula(m) {}

    void falar() override
    {
        cout << "Aluno(a) " << nome << " (matrícula: " << matricula << ") está aprendendo." << endl;
    }
};

int main()
{
    Pessoa p("Maria");
    Professor prof("Carlos", "Matemática");
    Aluno aluno("Ana", 101);

    p.falar();
    prof.falar();
    aluno.falar();

    return 0;
}
