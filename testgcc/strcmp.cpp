#include <string.h>   
#include <stdio.h>   
int main(void)   
{   
char *buf1 = "bbbaa", *buf2 = "bbb", *buf3 = "ccc";   
int ptr;   
ptr = strcmp(buf2, buf1);   
if (ptr > 0)   
printf("buffer 2 is greater than buffer 1n");   
else   
printf("buffer 2 is less than buffer 1n");   
ptr = strcmp(buf2, buf3);   
if (ptr > 0)   
printf("buffer 2 is greater than buffer 3n");   
else   
printf("buffer 2 is less than buffer 3n");   
return 0;   
}  
