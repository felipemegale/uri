#include <stdio.h>

#define PASSWD 2002

int main()
{
    int pass;

    do
    {
        scanf("%d", &pass);

        if (pass == PASSWD)
            printf("Acesso Permitido\n");
        else
            printf("Senha Invalida\n");
    } while(pass != PASSWD);

    return 0;
}
