#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
 
int main(int argc, char *argv[])
{
	//Initialise variables (bad comment)
	int i, j, *a;
	int N = 0;
 
	// initialisation
	assert(argc > 1);
	sscanf(argv[1], "%d", &N);

	assert(N > 0);
	
	a = malloc(N*sizeof(int));
	assert(a != NULL);
	for (i = 2; i < N; i++) a[i] = 1;
 
	// computation
	for (i = 2; i < N; i++) {
		if (a[i] == 1) {
			for (j = i; i*j < N; j++) a[i*j] = 0;
		}
	}
 
	// results
	for (i = 2; i < N; i++) {
		if (a[i]) printf("%d\n",i);
	}
	return EXIT_SUCCESS;
}

/*

a = malloc(20)

Memory

0
...
100 | Allocated *pointer returns here
... |Allocated
... |allocated
120
...

1023




a = pointer

pointer is at 0x100

a[0] = *0x100
a[1] = *0x104

*/


/*
	N = atoi(argv[1]);

'1' (char)

"1" (char*)

'\0'

'\1'
*/

