/*
    Romero Escamilla Oscar Eduardo
    22110112
    2P
    Programación Orientada en Objetos
    Descripción de programa:
        - Desarrollo de 5 Objetos en C++.
*/

class Tele 
{
    //Atributos
    char modelo;
    float precio;
    float tamanio;
    char marca;
    char color;

    //Métodos
    informar(void);
    entretener(void);
    explorar(void);
    relajar(void);
}

int main()
{
    //Creación de objeto
    Tele mitele;

    //Atributos referenciados por el objeto creado dentro de la clase Tele
    mitele.modelo;
    mitele.precio;
    mitele.tamanio;
    mitele.marca;
    mitele.color;

    //Atributos referenciados por el objeto creado dentro de la clase Tele
    mitele.informar(void);
    mitele.entretener(void);
    mitele.explorar(void);
    mitele.relajar(void);
}