
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


#include <string>
#include<vector>

using namespace std;

class Estudiante {
    string nombre;  // Atributo privado
    int edad;       // Atributo privado
    float promedio;
    vector<string> materias;

public:
    Estudiante();                         // Constructor por defecto
    Estudiante(string nombre, int edad,float promedio,vector <string> materias);  // Constructor con parámetros

    // Métodos para interactuar con los atributos
    void setNombre(string nombre);
    string getNombre() const;

    void setEdad(int edad);
    int getEdad() const;

    void setPromedio(float promedio);
    float getPromedio() const;

    void setMaterias(vector <string> materias);
    vector<string> getMaterias() const;

    void mostrarEstudianteinicio() const ;
    void materiasEstudiante(Estudiante& estudiane) const;
    void mostrarEstudiantefinal() const;

};

#endif //ESTUDIANTE_H