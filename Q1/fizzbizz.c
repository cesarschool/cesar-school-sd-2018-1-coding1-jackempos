#include <stdio.h>

void fizzbuzz(int start, int end)
{
 for(int cont = start; cont <= end; cont++)
 {
  
 if(cont%3 ==0 && cont%5 ==0)
{
 printf("FizzBuzz\n");
}
  else if ( cont%3 == 0)
{
 printf("fizz\n");
}
else if (cont%5 == 0)
{
 printf("buzz\n");
}

else
{
 printf("%d \n", cont);
}

int main()
{
fizzbuzz(1,6);
fizzbuzz(1,16);
fizzbuzz(1,100);
}
