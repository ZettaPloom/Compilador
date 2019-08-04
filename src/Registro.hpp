#ifndef Registro_H
#define Registro_H
#include <string>
#include <iostream>
#include <vector>
#include "Posicion.hpp"
using namespace std;

class Registro
{
private:
    string nombre;
    string simbolo;
    vector<string> tipo;
    vector<Posicion> posiciones; //El primero es la linea, el segundo la columna
    int cantidadSimbolos = posiciones.size();

public:
    Registro(string nombre, string simbolo, vector<string> tipo)
    {
        this->nombre = nombre;
        this->simbolo = simbolo;
        this->tipo = tipo;
    }
    Registro(const Registro &origen)
    {
        this->nombre = origen.nombre;
        this->simbolo = origen.simbolo;
        this->tipo = origen.tipo;
    }
    void setNuevaPosicion(int fila, int columna)
    {
        Posicion p(fila,columna);
        posiciones.push_back(p);
        cantidadSimbolos = posiciones.size();
    }
    string getNombre()
    {
        return this->nombre;
    }
    string getSimbolo()
    {
        return this->simbolo;
    }
    vector<string> getTipo()
    {
        return this->tipo;
    }
    int getCantidadSimbolos()
    {
        return this->cantidadSimbolos;
    }
    vector<Posicion> getPosiciones()
    {
        return this->posiciones;
    }
};
#endif
