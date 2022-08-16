/*
    Romero Escamilla Oscar Eduardo
    22110112
    2P
    Programación Orientada en Objetos
    Descripción de programa:
        - Desarrollo de 5 Objetos en C++.
*/

class Mascota
{
    //Atributos
    private:
        char nombre;
        float altura;
        float peso;
        char raza;

    //Métodos
    public: 
        comer(void);
        correr(void);
        brincar(void);
        bailar(void);
}

int main()
{
    //Creación de objeto
    Mascota mimascota;

    //Atributos referenciados por el objeto creado dentro de la clase Mascota
    mimascota.nombre;
    mimascota.altura;
    mimascota.peso;
    mimascota.raza;

    //Atributos referenciados por el objeto creado dentro de la clase Mascota
    mimascota.comer(void);
    mimascota.correr(void);
    mimascota.brincar(void);
    mimascota.bailar(void);
}