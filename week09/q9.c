#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

/*
file1:

a
c
d

*/

/*
file2:

b
d

*/

/*
output
a
b
c
d
d
*/

void merge(char* file1, char* file2) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    if(fp1 == NULL || fp2 == NULL) {
        printf("Invalid input file(s).");
        exit(1);
    }
    char line1[1000];
    char line2[1000];
    fgets(line1, 1000, fp1);
    fgets(line2,1000, fp2);
    while(1) {
        if (strcmp(line1,line2) < 0) {
            printf("%s", line1);
            if(!fgets(line1,1000, fp1)) {
                printf("%s", line2);
                break;
            }
        } else {
            printf("%s", line2);
            if(!fgets(line2,1000, fp2)) {
                printf("%s", line1);
                break;
            }
        }
    }
    while(fgets(line1, 1000, fp1)) {
        printf("%s", line1);
    }
    while(fgets(line2, 1000, fp2)) {
        printf("%s", line2);
    }
}

int main(int argc, char** argv) {
    assert(argc >= 3);
    merge(argv[1], argv[2]);
    return 0;
}