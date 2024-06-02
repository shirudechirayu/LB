#include <stdio.h>

void displayASCII()
{
    printf("ASCII Table\n");
    printf("---------------------------\n");
    printf("Dec  Hex  Oct  Char\n");
    printf("---------------------------\n");

    for (int i = 0; i < 256; i++) 
    {
        printf("%3d  %3x  %3o   %c\n", i, i, i, (i >= 32) ? i : '.');
    }
}

int main() {
    
    displayASCII();

    return 0;
}