# the compiler to use
CC = clang

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall
  
#files to link:
LFLAGS = -lcs50
  
# the name to use for both the target source file, and the output file:
TARGET1 = file_utils
TARGET2 = checkers
  
#all: $(TARGET1) $(TARGET2)
  

#$(TARGET2): $(TARGET2).c $(TARGET1).c 
#	$(CC) $(CFLAGS) -o $(TARGET2) $(TARGET2).c $(TARGET1).c 

clang -g -Wall -o checkers checkers.c
idk