#include <stack>
#include <stdio.h>
#include <string.h>
int main ()
{
    char str[60];
    strcpy (str,"these ");
    strcat (str,"strings ");
    strcat (str,"are ");
    strcat (str,"concatenated.");
    puts (str);

	char test[10]="1234";
	if(test[7]=='\0') puts("aaa");
    return 0;
}
