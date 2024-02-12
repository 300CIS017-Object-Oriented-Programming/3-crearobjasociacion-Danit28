//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    Raza* pRaza;

public:
    Perro();
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();
    Veterinario * getVeterinario();
    Raza * getRaza();

    // Sirve para crear el objeto Propietario relacionandolo directamente con el objeto Perro
    // No es necesario crear el objeto Propietario aparte para hacer la relacion
    void agregarPropietario(std::string nombre, std::string docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);

    void agregarVeterinario(std::string nombre, int aniosExperiencia);

    void agregarRaza(std::string nombre, std::string paisOrigen);

    Perro(std::string nombre, int edad, std::string raza, std::string tamanio, std::string color );



    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(Raza *pRaza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif
