#include<stdio.h>
#include<stdlib.h>
#include<time.h> //if this is not included it show error

int main()
{
int n;
srand(time(0)); // If this line is not included it prints same number again and again
n = rand() % 10 +1; //Generates random number between 1 to 100
printf("The random number is %d\n",n);

}
