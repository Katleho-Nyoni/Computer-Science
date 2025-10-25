#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *Ft = fopen("./NotesFromUnderground.txt", "r");
    fclose(Ft);

    return 0;
}