#include <stdio.h>
#include <stdio.h>
main( )
{
     FILE *fp;
     char stuff[25];
     int index;
     fp = fopen("TENLINES.TXT","w"); 
     strcpy(stuff,"This is an example line.");
     for (index = 1; index <= 10; index++)
     	fprintf(fp,"%s Line number %d\n", stuff, index);
     fclose(fp); 
}
