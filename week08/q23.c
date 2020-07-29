#include <stdio.h>
int hash(char *key, int N)
{
    int h = 0; char *c = key;
    for (c = key; *c != '\0'; c++)
        h = h + *c;
    return h % N;
}

int hash2(char *key, int N)
{
    int h = 0;  char *c = key;
    int a = 127; // a prime number
    for (c = key; *c != '\0'; c++)
        h = (a * h + *c) % N;
    return h;
}

int main(void) {
    printf("h(cat): %d\n", hash("cat", 10));
    printf("h2(cat): %d\n", hash2("cat", 10));
    printf("h(act): %d\n", hash("act", 10));
    printf("h2(act): %d\n", hash("act", 10));
    printf("h(actor): %d\n", hash("actor", 10));
    printf("h2(actor): %d\n", hash("actor", 10));

}