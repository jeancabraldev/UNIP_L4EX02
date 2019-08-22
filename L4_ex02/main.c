#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Faça um programa onde o usuário informa qual tabuada ele deseja visualizar
     *e o programa deve exibir a tabuada do número informado pelo usuário.
     */

     int x, num;

     printf("\nInforme qual tabuala deseja visualizar: ");
     scanf("%d", &num);

     for(x = 0; x <= 10; x++){
        printf("\n%d X %d = %d", num, x, x * num);
     }
     return 0;
}
