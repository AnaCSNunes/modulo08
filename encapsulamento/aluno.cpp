#include <iostream>
#include <string>
#include <vector>

class Aluno {
private:
    std::string nome;
    int idade;
    std::string matricula;

public:
    Aluno(std::string novoNome, int novaIdade, std::string novaMatricula) {
        nome = novoNome;
        matricula = novaMatricula;
        
        if (novaIdade > 0) {
            idade = novaIdade;
        } else {
            idade = 0;
        }
    }

    std::string getNome() {
        return nome;
    }

    int getIdade() {
        return idade;
    }

    std::string getMatricula() {
        return matricula;
    }

    void setIdade(int novaIdade) {
        if (novaIdade > 0) {
            idade = novaIdade;
        }
    }
};

class Escola {
private:
    std::string nomeEscola;
    std::vector<Aluno> listaAlunos;

public:
    Escola(std::string nome) {
        nomeEscola = nome;
    }

    void matricularAluno(Aluno novoAluno) {
        if (novoAluno.getIdade() == 0) {
            std::cout << "Erro: Aluno '" << novoAluno.getNome() << "' possui idade invalida e nao foi matriculado.\n";
            return;
        }
        
        listaAlunos.push_back(novoAluno);
        std::cout << "Aluno '" << novoAluno.getNome() << "' matriculado com sucesso!\n";
    }

    void listarAlunos() {
        std::cout << "\n--- Alunos Matriculados na Escola " << nomeEscola << " ---\n";
        
        if (listaAlunos.empty()) {
            std::cout << "Nenhum aluno cadastrado no momento.\n";
            return;
        }

        for (Aluno &aluno : listaAlunos) {
            std::cout << "Nome: " << aluno.getNome() 
                      << " | Idade: " << aluno.getIdade() 
                      << " | Matricula: " << aluno.getMatricula() << "\n";
        }
        std::cout << "--------------------------------------------------\n";
    }
};

int main() {
    Escola minhaEscola("Colegio Avancado");

    Aluno aluno1("Lucas Silva", 15, "2026001");
    Aluno aluno2("Mariana Costa", -5, "2026002");
    Aluno aluno3("Pedro Santos", 16, "2026003");

    std::cout << "--- Processo de Matricula ---\n";
    minhaEscola.matricularAluno(aluno1);
    minhaEscola.matricularAluno(aluno2);
    minhaEscola.matricularAluno(aluno3);

    minhaEscola.listarAlunos();

    return 0;
}
