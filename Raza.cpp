//
// Created by danie on 11/02/2024.
//

#include "Raza.h"

Raza::Raza(std::string nombre, std::string paisOrigen) {
    this->nombre = nombre;
    this->paisOrigen = paisOrigen;
}

std::string Raza::getNombre()  {
    return nombre;
}

void Raza::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Raza::setPaisOrigen(std::string paisOrigen) {
    this->paisOrigen = paisOrigen;
}

std::string Raza::getpaisOrigen() {
    return paisOrigen;
}
