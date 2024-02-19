#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
class Veterinario{
    private:
        std::string nombre;
        int aniosExperiencia;
    public:
        Veterinario(std::string nombre, int anios);
        void setNombre(std::string name);
        int setAniosExperiencia(int anios);
        std::string getNombre();
        int getAniosExperiencia();

};

#endif //VETERINARIO_H