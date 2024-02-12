//
// Created by danie on 11/02/2024.
//

#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>

class Veterinario {
private:
    std::string nombre;
    int aniosExperiencia;
public:
    Veterinario() = default; //Agrega constructor por defecto sin cuerpo
    Veterinario(std::string nombre, int aniosExperiencia);
    std::string getNombre();
    int getAniosExperiencia();
    void setNombre(std::string nombre);
    void setAniosExperiencia(int aniosExperiencia);




};

#endif //VETERINARIO_H
