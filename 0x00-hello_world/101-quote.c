#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
#define SIZE sizeof(MESSAGE)

int main(void){
	    if (write(STDERR_FILENO, MESSAGE, SIZE) != SIZE) {
		            return 1;
			        }
	    putchar('\n');
	        return 0;
}

