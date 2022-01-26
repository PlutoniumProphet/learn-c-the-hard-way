#include <stdio.h> 

int main(int argc, char *argv[])
{
    int i; // is leaving this undeclared bad form? It's defined in the loop

    if (argc == 1) {
        printf("You only hav one agrument. You suck. \n");
    } else if (argc > 1 && argc < 4) {
        printf("Here's your arguments: \n");

        for (i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        } 
        printf("\n");
    } else {
        printf("You have too many arguments. You suck. \n");
    }

    return 0;
}
