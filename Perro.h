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
    Veterinario* nVeterinario;
    Raza* nRaza;
public:
    Perro();
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();

    // Sirve para otorgarle a la variable de instacia Ppropietario un nuevo Propietario, por eso me
    // pide nombre y documento, lo que hace con esto es crear un nuevo propietario con un constructor,
    //luego relaciona este nuevo Ppropietario creado y lo coloca en la variable de instancia del Perro.
    void agregarPropietario(std::string nombre, std::string docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);

    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
    void agregarVeterinario(Veterinario *veterinario);
    Veterinario* getVeterinario();
    void agregarRaza(Raza *raza);
    Raza* getClassRaza();
};
#endif
