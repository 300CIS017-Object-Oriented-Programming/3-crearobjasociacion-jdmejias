#ifndef RAZA_H
#define RAZA_H
#include <string>

class Raza{

    private:
    std::string nombre;
    std::string paisOrigen;

    public:
    Raza(std::string name,std::string pais);
    void setnombre(std::string name);
    std::string getnombre();
    void setPaisOrigen(std::string pais);
    std::string getPaisOrigen();


};
#endif //RAZA_H






