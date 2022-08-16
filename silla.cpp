/*
    Romero Escamilla Oscar Eduardo
    22110112
    2P
    Programación Orientada en Objetos
    Descripción de programa:
        - Desarrollo de 5 Objetos en C++.
*/

class Silla
{
    //Atributos
     private:
        char material;
        float precio;
        float tamanio;
        char marca;
        char color;

    //Métodos
     public: 
        sentar(void);
        recargarse(void);
        colocar_cosas(void);
        poner_ropa(void);
}

int main()
{
    //Creación de objeto
    Silla misilla;

    //Atributos referenciados por el objeto creado dentro de la clase Silla
    misilla.material;
    misilla.precio;
    misilla.tamanio;
    misilla.marca;
    misilla.color;

    //Atributos referenciados por el objeto creado dentro de la clase Silla
    misilla.sentar(void);
    misilla.recargarse(void);
    misilla.colocar_cosas(void);
    misilla.poner_ropa(void);
}