//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(std::string nombre, std::string docIdentidad);
    Propietario(std::string nombre2);
    std::string mostrarInfo();
    std::string getNombre();
    std::string getdocIdentidad();
    int getEdad();
    void setNombre(std::string nombre);
    void setdocIdentidad(std::string id);
    void setedad(int edad);




};


#endif //PROPIETARIO_H
