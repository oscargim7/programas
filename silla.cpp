class Silla
{
    //Atributos
    char material;
    float precio;
    float tamanio;
    char marca;
    char color;

    //Métodos
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