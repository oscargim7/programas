/*
    Romero Escamilla Oscar Eduardo
    22110112
    2P
    Programación Orientada en Objetos
    Descripción de programa:
        - Desarrollo de 5 Objetos en C++.
*/

class Celular
{
    //Atributos
    char nombre;
    char marca;
    float precio;
    float ram;
    float espacio;
    char procesador;
    char color;
    float tamanio;

    //Métodos
    comunicarte(void);
    explorar(void);
    entretener(void);
    investigar(void);
}

int main()
{
    //Creación de objeto
    Celular micel;

    //Atributos referenciados por el objeto creado dentro de la clase Celular
    micel.nombre;
    micel.marca;
    micel.precio;
    micel.ram;
    micel.espacio;
    micel.procesador;
    micel.color;
    micel.tamanio;

    //Métodos referenciados por el objeto creado dentro de la clase Celular
    micel.comunicarte(void);
    micel.explorar(void);
    micel.entretener(void);
    micel.investigar(void);
}