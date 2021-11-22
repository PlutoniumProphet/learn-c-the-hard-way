#include <stdio.h>
/* This is a comment. */

int main(int argc, char *argv[])
{
    int distance = 100;
    double price = 10.99;

    // This is also a comment.
    printf("You are %d miles away.\n", distance);
    printf("I can walk %d0 miles...\n", distance);
    printf("And I can walk 1000 more...\n");
    // this will try a double....
    printf("The price of all this travelling will be %lf!\n", price);

    return 0;
}
