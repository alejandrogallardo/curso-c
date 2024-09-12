#include <stdio.h>
#include <stdlib.h>

void change_value(char *letter)
{
    *letter = 'b';
}

int main()
{
    //int *saludo;
    int valor = 10;
    int *puntero = &valor;
    printf("SALUDO: %d\n", valor);
    printf("Direccion puntero: %p\n", puntero);
    
    char l;
    l = 'a';
    // Paso por referencia, esto evita crear otro espacio en memoria
    change_value(&l);
    printf("Change Value: %c\n", l);


    char *t = malloc(1); // asignacion de espacio en memoria
    char *t2 = malloc(sizeof(char)); // Otra forma de asignar espacio en memoria
    if (t == NULL)
    {
        fprintf(stderr, "Error: could not allocate memory\n");
        return(1);
    }
    *t = 'a';
    change_value(t); // ya no se pone & porque la direccion en memoria ya esta crado
    printf("%c\n", *t);
    free(t);

    char str[] = "Hola perros";
    printf("MYSTR %c", str);
    char *ptr = str;
    printf("PTR %c", *ptr);
    printf("Caracteres de la cadena: ");
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    

    return(0);
}