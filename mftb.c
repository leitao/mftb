#include <stdio.h>

int main(){
    long long tb;

   asm volatile ("mftb %0" : "=r" (tb));

   printf("Timebase is %llx\n", tb);

   return 0;
}
