//
// Created by danie on 11/02/2024.
//

#ifndef RAZA_H
#define RAZA_H

#include <string>

class Raza {
private:
    std::string nombre;
    std::string paisOrigen;
public:
    Raza() = default; //Agrega constructor por defecto sin cuerpo
    Raza(std::string nombre, std::string paisOrigen);
    std::string getNombre();
    std::string getpaisOrigen();
    void setNombre(std::string nombre);
    void setPaisOrigen(std::string paisOrigen);



};

#endif //RAZA_H
