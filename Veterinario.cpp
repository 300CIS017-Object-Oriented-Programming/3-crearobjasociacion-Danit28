//
// Created by danie on 11/02/2024.
//

#include "Veterinario.h"

Veterinario::Veterinario(std::string nombre, int aniosExperiencia) {
    this->nombre = nombre;
    this->aniosExperiencia = aniosExperiencia;
}

std::string Veterinario::getNombre()  {
    return nombre;
}

void Veterinario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Veterinario::setAniosExperiencia(int aniosExperiencia) {
    this->aniosExperiencia = aniosExperiencia;
}

int Veterinario::getAniosExperiencia() {
    return aniosExperiencia;
}