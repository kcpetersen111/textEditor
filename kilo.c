#include "unistd.h"
#include "stdio.h"
#include "termios.h"

void enableRawMode(){

}

int main(){
	printf("Hello, World!\n");

	enableRawMode();

	char c;

	while(read(STDIN_FILENO, &c, 1) == 1 && c != 'q'){
		printf("%c\n",c);
	}
	return 0;
}
