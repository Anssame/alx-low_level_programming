#include "main.h" 
/*
 *@dest:pointers to destination input
 *@src:pointer to source input 
 *
 *return: pointer to resulting string @dest
*/ 
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

		/*iterate through eachsrc array without the null bytes*/
		for (c2 = 0; src[c2] ; c2++)
		/*apend srcc2]to dest [c] while overwriting the null byte in dest*/
		dest [c++] = src[c2];
		return (dest);
		}
