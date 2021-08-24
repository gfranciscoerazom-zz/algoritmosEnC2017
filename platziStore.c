// Esta es una tienda que vende productos de Platzi en la terminal
#include <stdio.h>
#include <string.h>

int main()
{
    char opcion[8];
    unsigned int amount, totalPrice, seguirComprando;
    amount = totalPrice = 0;

    do {
        printf("Elije el producto que buscas\n");
        printf("Ingrese gorra para comprar una\n");
        printf("Ingresa termo para comprar uno\n");
        printf("Ingrese playera para comprar una\n");
        printf("Ingrese taza para comprar una\n");
        scanf("%7s", opcion);

        if (strcmp(opcion, "gorra") == 0) {
            printf("Cada gorra cuesta $5 usd, cuantas quieres?\n");
            scanf("%d", &amount);
            totalPrice += (amount * 5);
            printf("El precio total es: $%d usd.\n", totalPrice);
            printf("---------------------------------------------\n");
            printf("En caso de querar otro peoducto presione 1 y para salir presione cualquier otro número.\n");
            scanf("%d", &seguirComprando);
        }
        else if (strcmp(opcion, "termo") == 0){
            printf("Cada termo cuesta $12 usd, cuantas quieres?\n");
            scanf("%d", &amount);
            totalPrice += (amount * 12);
            printf("El precio total es: $%d usd.\n", totalPrice);
            printf("---------------------------------------------\n");
            printf("En caso de querar otro peoducto presione 1 y para salir presione cualquier otro número.\n");
            scanf("%d", &seguirComprando);
        }
        else if (strcmp(opcion, "playera") == 0) {
            printf("Cada playera cuesta $23, cuantas quieres?\n");
            scanf("%d", &amount);
            totalPrice += (amount * 23);
            printf("El precio total es: $%d usd.\n", totalPrice);
            printf("---------------------------------------------\n");
            printf("En caso de querar otro peoducto presione 1 y para salir presione cualquier otro número.\n");
            scanf("%d", &seguirComprando);
        }
        else if (strcmp(opcion, "taza") == 0) {
            printf("Cada taza cuesta $7 usd, cuantas quieres?\n");
            scanf("%d", &amount);
            totalPrice += (amount * 7);
            printf("El precio total gorras es: $%d usd.\n", totalPrice);
            printf("---------------------------------------------\n");
            printf("En caso de querar otro peoducto presione 1 y para salir presione cualquier otro número.\n");
            scanf("%d", &seguirComprando);
        }
        else {
            printf("El producto especificado no existe, prueba otra opción");
            printf("En caso de querar otro peoducto presione 1 y para salir presione cualquier otro número.\n");
            scanf("%d", &seguirComprando);
        }
    } while (seguirComprando == 1);

    printf("Gracias por comprar\n");

    return 0;
}