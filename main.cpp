#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

int main() {

    Perro *sara= new Perro();
    sara->ladrar();
    Propietario *jefe= new Propietario("Andres");
    jefe->setdocIdentidad("1111");
    jefe->setedad(25);
    std::string informacion= jefe->mostrarInfo();
    std::cout << informacion << std::endl;
    sara->agregarPropietario("Jhon","2222");
    sara->setNombre("Sara");
    sara->getPropietario()->setedad(30);

    std::cout << "El doc de Identidad del propietario de " << sara->getNombre() << " es: "<< sara->getPropietario()->getdocIdentidad() << std::endl;
    std::cout << "la edad del propietario es: " << sara->getPropietario()->getEdad() << std::endl;
    //veterinario
    Veterinario *carlos= new Veterinario("carlos", 8);
    sara->agregarVeterinario(carlos);
    std::cout << "el veterinario de Sara es: " << sara->getVeterinario()->getNombre() << " " <<" y tiene " << sara->getVeterinario()->getAniosExperiencia() <<" años de experiencia" <<std::endl;
    //Raza
    Raza *raza1= new Raza("Mastin Napolitano","Italia");
    Raza *raza2= new Raza("Maltes","Italia");
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");
    firulais.agregarRaza(raza1);
    std::cout << firulais.getNombre() << " es raza: " << firulais.getClassRaza()->getnombre()<< " y pais origen:" << firulais.getClassRaza()->getPaisOrigen() << std::endl;


    //eliminar
    delete sara;
    delete jefe;
    delete carlos;
    delete raza1;
    delete raza2;
    /*
    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;
    */
    return 0;
}
