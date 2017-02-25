#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include "file_utils.h"

int main(int argc, char **argv) 
{
    if(argc != 3) {
        printf("Need an correct argument.\n");
        return -1;
    }
	
	char *buffer;
	
    int size = read_file(argv[1], &buffer);
	
	if(size == -1){
		return-1;
	}

	printf("%s\n", buffer); 
	//if(!result) return -1;
	
	write_file(argv[2], buffer, size);
	
    //fputs(result, stdout);
    free(buffer);
	
    return 0;
}               
