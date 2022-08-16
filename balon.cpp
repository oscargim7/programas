/*
    Romero Escamilla Oscar Eduardo
    22110112
    2P
    Programación Orientada en Objetos
    Descripción de programa:
        - Desarrollo de 5 Objetos en C++.
*/

class Balon
{
    //Atributos
     private:
        char nombre;
        float precio;
        float tamanio;
        char marca;
        char color;

    //Métodos
     public: 
        patear(void);
        lanzar(void);
        ejercitar(void);
        rematar(void);
}

int main()
{
    //Creación de objeto
    Balon mibalon;

    //Atributos referenciados por el objeto creado dentro de la clase Balon
    mibalon.nombre;
    mibalon.precio;
    mibalon.tamanio;
    mibalon.marca;
    mibalon.color;

    //Atributos referenciados por el objeto creado dentro de la clase Balon
    mibalon.patear(void);
    mibalon.lanzar(void);
    mibalon.ejercitar(void);
    mibalon.rematar(void);
}