#include "reverse.h"

char reverse(char *str, int8_t length)
{

    if ( str == NULL ) {
        return 2;
    }

    int8_t i = 0;
    char *rev_str = NULL;
    char temp = 1;
    rev_str = &temp;

    for(i = 0; i<=length; i++) {
	    *rev_str = *(str+length-i);
	    printf("%c ", *rev_str);	
    }
  
    return 0;
} 

int main()
{
	char *str = "This is the string";

	reverse(str, 18);
	printf("\n");

	char *ptr = "some NUMmbers12345";
	
	reverse(ptr,18);
	printf("\n");

	char *abc = "Does it reverse \n\0\t correctly?";

	reverse(abc,32);
	printf("\n");

	return 0;
}

