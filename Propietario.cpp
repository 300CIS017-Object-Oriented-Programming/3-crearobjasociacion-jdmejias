//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"
#include <string>
//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}
Propietario::Propietario(std::string nombre2){
    nombre=nombre2;
}

std::string Propietario::getNombre()  {
    return nombre;
}
std::string Propietario::getdocIdentidad() {
    return docIdentidad;
}
int Propietario::getEdad() {
    return edad;
}
void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}
void Propietario::setdocIdentidad(std::string id) {
    docIdentidad = id;
}
void Propietario::setedad(int edad){
    this->edad = edad;
}
std::string Propietario::mostrarInfo(){
    std:: string cadena= "";
    std::string edad1 = std::to_string(edad);
    cadena= nombre + " " + docIdentidad + " " + edad1;
    return cadena;
}