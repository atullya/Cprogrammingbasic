#include <stdio.h>
/*syntax
if(condition){
statement;
} else if(condition);{
statement;
}else if (conditon);
statement;
}
*/
int main(){
	int num1=2;
	int num2=78;
	int num3=8;
	if(num1> num2 && num1>num3){
		printf("num1 is greatest among all \n ");
	}else if(num2>num1 && num2>num3){
			printf("num2 is greatest among all \n ");
	}	
    else{
	  	printf("num3 is greatest among all \n ");
	}
	
	return 0;
}
