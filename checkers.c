#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include "handle_arguments.h"
//#include "file_utils.h"

int main(int argc, char **argv) 
{
	struct arguments args;
	setup(argc,argv, &args);
	//printf("setting matrix\n");
	//int *mat = malloc(args.width * args.hight * sizeof(int));
	
	//int size = width * cols;
	//int i=1;
	//printf("%i \n", size);
	//int a = 0;

	
	//for(a = 0; a < size; a++){
	//	mat[a] = i;
	//	printf("setting matrix %i \n", i);
	//	i++;
	//}	
	
	//mat[4] = 12;
	//mat[5] = 124563456;
	//mat[6] = 999912349;
	//printf("%i \n", mat[3]);
	//printf("%i \n", mat[4]);
	//printf("%i \n", mat[5]);
	//printf("%i \n", mat[6]);
	//printf("%i \n", mat[7]);
	//
	//for(int a =0; a < rows; a++){
	//	for(int i=0; i < cols; i++){
	//		printf("%i ", mat[cols*a+i]);
	//	}
	//	printf(" \n");
	//}
	
	//free(mat);
	
   //int offset = i * cols + j;
   // now mat[offset] corresponds to m(i, j)
   
	//int offset = i + rows * j;
	// not mat[offset] corresponds to m(i, j)
	
	//while(1){
	//   fgets(input, 10, stdin);
	//	printf("%s",input);
	//	f(strcmp(input, "quit\n") == 0)
	//	return 0;
	//}
	
    return 0;
}               
