#include <stdio.h>

int main()
{
    float lengde = 10.8;
    float bredde = 3.14;
    float arealet = lengde * bredde;

    printf("Rektangelet er %gcm bredt og %gcm langt. Arealet er %.3fcm^2", lengde, bredde, arealet);

    return 0;
}
