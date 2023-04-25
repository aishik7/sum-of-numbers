#include <stdio.h>

void sum(int n1){

int sum=0,m;

while(n1>0){

m=n1%10;

sum=sum+m;

n1=n1/10;

}

printf("Sum of digits of the number is %d", sum);


}
int main()
{
	int m;
	printf("Enter the number: ");

scanf("%d",&m);

sum(m);
return 0;
}
