#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>         /* defines options flags */
#include <sys/types.h>     /* defines types used by sys/stat.h */
#include <sys/stat.h>      /* defines S_IREAD & S_IWRITE  */

void fun_dat_dat (){
  printf("DAT -> DAT\n");
}
void fun_read_dat (){
	printf("READ DAT\n");
}
void fun_stdin_dat (){
	printf("STDIN -> DAT\n");
}
void fun_stdin_stdout (){
	printf("STDIN -> STDOUT\n");
}

int main(int argc, char *argv[]){
	
	printf("Ime programa: %s\n", argv[0]);

	if(argc == 1){
		fun_stdin_stdout();	
	}else if(argc == 2){
		fun_read_dat();
	}else if(argv[1][0] == '-'){
		fun_stdin_dat();
	}else if(argc == 3){
		fun_dat_dat();	
	}
	
	return 0;
}
