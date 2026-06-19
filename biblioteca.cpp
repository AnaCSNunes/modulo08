#include <iostream>
#include <string>
#include <vector>

class Livro {
private:
    std::string titulo;
    std::string autor;
    bool disponivel;

public:
    Livro(std::string novoTitulo, std::string novoAutor) {
        titulo = novoTitulo;
        autor = novoAutor;
        disponivel = true;
    }

    std::string getTitulo() {
        return titulo;
    }

    std::string getAutor() {
        return autor;
    }

    bool isDisponivel() {
        return disponivel;
    }

    void setDisponivel(bool status) {
        disponivel = status;
    }
};

class Biblioteca {
private:
    std::string nome;
    std::vector<Livro> acervo;

public:
    Biblioteca(std::string nomeBiblioteca) {
        nome = nomeBiblioteca;
    }

    void registrarLivro(Livro novoLivro) {
        acervo.push_back(novoLivro);
        std::cout << "Livro '" << novoLivro.getTitulo() << "' registrado com sucesso!\n";
    }

    void listarLivrosDisponiveis() {
        std::cout << "\n--- Livros Disponíveis na " << nome << " ---\n";
        bool encontrouLivros = false;

        for (Livro &livro : acervo) {
            if (livro.isDisponivel()) {
                std::cout << "- " << livro.getTitulo() << " (Autor: " << livro.getAutor() << ")\n";
                encontrouLivros = true;
            }
        }

        if (!encontrouLivros) {
            std::cout << "Nenhum livro disponível no momento.\n";
        }
        std::cout << "-------------------------------------------\n";
    }
};

int main() {
    Biblioteca minhaBiblioteca("Biblioteca Municipal");

    Livro livro1("Harry Potter e a Pedra Filosofal", "J.K. Rowling");
    Livro livro2("O Pequeno Príncipe", "Antoine de Saint-Exupéry");
    Livro livro3("O Alquimista", "Paulo Coelho");

    std::cout << "--- Registrando Livros ---\n";
    minhaBiblioteca.registrarLivro(livro1);
    minhaBiblioteca.registrarLivro(livro2);
    minhaBiblioteca.registrarLivro(livro3);

    minhaBiblioteca.listarLivrosDisponiveis();

    return 0;
}