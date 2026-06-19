#include <iostream>
#include <string>
#include <vector>

class Restaurante {
private:
    std::string nome;
    int totalMesas;
    int mesasOcupadas;

public:
    Restaurante(std::string nomeRestaurante, int mesas) {
        nome = nomeRestaurante;
        totalMesas = mesas;
        mesasOcupadas = 0;
    }

    std::string getNome() {
        return nome;
    }

    int getMesasDisponiveis() {
        return totalMesas - mesasOcupadas;
    }

    bool reservarMesa() {
        if (mesasOcupadas < totalMesas) {
            mesasOcupadas++;
            std::cout << "Mesa reservada com sucesso no " << nome << "!\n";
            return true;
        } else {
            std::cout << "Desculpe, o " << nome << " está lotado no momento.\n";
            return false;
        }
    }

    void liberarMesa() {
        if (mesasOcupadas > 0) {
            mesasOcupadas--;
            std::cout << "Uma mesa foi liberada.\n";
        } else {
            std::cout << "Todas as mesas já estão livres.\n";
        }
    }

    void exibirStatus() {
        std::cout << "\n--- Status do Restaurante ---" << "\n";
        std::cout << "Nome: " << nome << "\n";
        std::cout << "Total de Mesas: " << totalMesas << "\n";
        std::cout << "Mesas Ocupadas: " << mesasOcupadas << "\n";
        std::cout << "Mesas Disponíveis: " << getMesasDisponiveis() << "\n";
        std::cout << "-----------------------------\n";
    }
};

int main() {
    Restaurante meuRestaurante("Sabor & Arte", 5);

    meuRestaurante.exibirStatus();

    meuRestaurante.reservarMesa();
    meuRestaurante.reservarMesa();
    meuRestaurante.reservarMesa();

    meuRestaurante.exibirStatus();

    meuRestaurante.liberarMesa();

    meuRestaurante.exibirStatus();

    return 0;
}