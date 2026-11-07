#include <stdio.h>
#include <unistd.h>

int main(void)
{
   printf("A: Before freopen\n");

   if(freopen("output.txt","w", stdout) == NULL) {
      perror("freopen");
      return 1;
   }
   printf("B: Printed using stdout\n");
   fflush(stdout);

   write(STDOUT_FILENO, "C: Written using FD 1\n", 22);
   fprintf(stderr, "stdout FD = %d\n", fileno(stdout));
   return 0;
}
