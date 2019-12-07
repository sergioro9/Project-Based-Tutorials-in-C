/* example from http://www.cplusplus.com/reference/cstdio/FILE/ */
#include <stdio.h>

int main()
{
   FILE * fp;
   char buffer [100];

   fp = fopen ("/etc/motd" , "r");
   if (fp == NULL) perror ("Error opening file");
   while ( ! feof (fp) ) {
       if ( fgets (buffer , 100 , fp) == NULL ) break;
       fputs (buffer , stdout);
   }
   fclose (fp);
   return 0;
}
