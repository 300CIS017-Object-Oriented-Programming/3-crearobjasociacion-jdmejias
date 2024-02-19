#include "Veterinario.h"
#include <string>

Veterinario::Veterinario(std::string name , int anios){
    nombre= name;
    aniosExperiencia = anios;
}

void Veterinario::setNombre(std:: string name){
    nombre= name;
}
int Veterinario::setAniosExperiencia(int anios){
    aniosExperiencia=anios;
}
int Veterinario::getAniosExperiencia(){
    return aniosExperiencia;
}
std::string Veterinario::getNombre(){
    return nombre;
}