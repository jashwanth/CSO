#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
 unsigned int noints, i, sum, loop;

 	srand( time(NULL) );

	char *arr;
	arr = malloc(1<<31);
	if (arr == NULL){
		printf("Unable to allocate memory\n");
		exit(0);
	}

	noints = 1 << 29;
	for(loop = 0; loop <= 20; ++loop)
		for(i = 0; i < noints; ++i)
			sum = sum + (int *) arr[ (unsigned) rand()  % noints];

	printf(" Garbage sum: %d \n", sum);
}

