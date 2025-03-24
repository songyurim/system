#include<stdio.h>
int main()
{
	int x;
	char y[30];
	
	printf("학번 :");
	scanf("%d",&x);
	printf("이름 :");
	scanf("%s",y);

	printf("학번: %d, 이름: %s",x,y);

	return 0;
}
