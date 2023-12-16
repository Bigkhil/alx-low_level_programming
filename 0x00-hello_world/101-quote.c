#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
#define SIZE sizeof(MESSAGE)

int main(void){
	    if (write(STDERR_FILENO, MESSAGE, SIZE) != SIZE) {
		            return 1;
			        }
	        return 0;
}

