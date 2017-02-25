#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>

int read_file( char* filename, char **buffer )
{
    
    FILE *file = fopen(filename, "r");

    if(!file) {
        printf("File error.\n", stderr);
        return -1;
    }
	
	struct stat st; stat(filename, &st);
    int size;
	size = st.st_size;
	*buffer =  malloc(sizeof(char)*size);
	if (buffer ==NULL){
		printf("Memory Error.\n", stderr);
		return -1;
	}
	printf("%s\n", *buffer);
   
	fread(*buffer, size, 1, file);
	
    fclose(file);
    return size;
}


int write_file( char* filename, char *buffer, int size)
{
	
	FILE *file = fopen(filename, "w");
	
	int a;
	
		/* for loop execution */
	for( a = size-1; a >= 0; a--){
		if(&buffer[a] != NULL)
			printf("%c\n", buffer[a]);
			fprintf(file, "%c", buffer[a]);
	}
	
	fclose(file);
	
	return 0;
}
