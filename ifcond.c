/*If condition: It tells the program to perform certain task only
Syntax: If(condition)
statement;
         
*/
#include <stdio.h>
int main(){
	int age;
	printf("Enter your age:");
	scanf("%d",age);
	if(age>18){
	printf("You can vote\n");
	printf("You cannot vote\n");
     }

	
	return 0;
}

