#include <stdio.h>

int main()
{
    int alderen;

    printf("Your age: \n");
    scanf("%d", &alderen);

    if (alderen < 18)
    {
        printf("Barnebillettt");
    }
    else if (alderen >= 18 && alderen < 66)
    {
        printf("Voksenbillett");
    }
    else if (alderen >= 66)
    {
        printf("Honnørbillett");
    }
    else
    {
        printf("Something went wrong. Try again");
    }

    return 0;
}
