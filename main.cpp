#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

int main() {

    // Instanciar
    Perro firulais;
    Perro *maxPerro = new Perro("Max",2,"Labrador","Mediano","Cafe");
    std::string infoMartin;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");
    maxPerro->ladrar();

    Propietario *martin = new Propietario("Martin");
    martin->setEdad(25);
    martin->setDoc("1005110032");
    infoMartin = martin->mostrarInfo();
    std::cout << infoMartin << std::endl;

    maxPerro->agregarPropietario("Daniela Tellez Cobo","1006107081");

    std::cout<< "El documento de identidad del Propietario del perro "<< maxPerro->getNombre() << " es " << maxPerro->getPropietario()->getDoc()<<std::endl;

    maxPerro->agregarVeterinario("Carlos Ramirez", 12);

    std::cout<< "El veterinario del perro "<<maxPerro->getNombre()<< " es " << maxPerro->getVeterinario()->getNombre();
    std::cout<< " y tiene  "<<maxPerro->getVeterinario()->getAniosExperiencia() << " anios de experiencia " << std::endl;

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;

    Raza *raza1 = new Raza();
    Raza *raza2 = new Raza();

    raza1->setPaisOrigen("Italia");
    raza1->setNombre("Mastin Napolitano");

    raza2->setNombre("Maltes");
    raza2->setPaisOrigen("Italia");

    firulais.setRaza(raza1);

    std::cout<< "La raza del perro "<<firulais.getNombre() << " es " << firulais.getRaza()->getNombre()<< " de pais de origen " << firulais.getRaza()->getpaisOrigen()<< std::endl;


    return 0;
}
