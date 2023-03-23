#include<stdio.h>
int main(){
	int n,i,rem, fact,sum=0;
	
	printf("enter a number:");
	scanf("%d", &n);
	
	int temp= n;
	
	
	while(n){
		i=1;
		fact =1;
		rem =n%10;
		
		while(i <=rem){
			fact *= i;
			i++;
		}
		
		sum += fact;
		n=n/10;
	}
	if(sum == temp)
	printf("%d is a strong number\n",temp);
	else
	printf("%d is not a strong number\n",temp);
	
	return 0;
}
	
	
	