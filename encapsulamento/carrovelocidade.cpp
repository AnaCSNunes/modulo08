#include "Carro.h"
#include <iostream>

Carro::Carro(std::string marcaInicial) {
    marca = marcaInicial;
    velocidade = 0;
}

void Carro::acelerar(int valor) {
    velocidade = velocidade + valor;
    std::cout << marca << " acelerou! Velocidade atual: "
              << velocidade << " km/h" << std::endl;
}

void Carro::frear(int valor) {
    velocidade = velocidade - valor;

    if (velocidade < 0) {
        velocidade = 0;
    }

    std::cout << marca << " freou! Velocidade atual: "
              << velocidade << " km/h" << std::endl;
}

std::string Carro::getMarca() {
    return marca;
}

int Carro::getVelocidade() {
    return velocidade;
}
