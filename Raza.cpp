#include "Raza.h"
#include <string>


void Raza::setnombre(std::string name){
    nombre=name;
}
std::string Raza::getnombre(){
    return nombre;
}
void Raza::setPaisOrigen(std::string pais){
    paisOrigen=pais;
}
std::string Raza::getPaisOrigen(){
    return paisOrigen;
}
Raza::Raza(std::string name,std::string pais){
    nombre= name;
    paisOrigen= pais;
}