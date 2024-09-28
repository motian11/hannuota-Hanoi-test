#include<stdio.h>
void print(char x,char y)
{
	printf("%c->%c\n",x,y);

}
void move(int num, char start, char temp, char end)
{
	if (num == 1)
	{
		print(start, end);
	}
	else
	{
		
		move(num - 1,start,end,temp);
		print(start, end);
		move(num - 1,temp,start,end );

	}
}
int main()
{
	int num;
	char a = 'A',b='B',c='C';
	scanf_s("%d", &num);
	printf("汉诺塔A上的数目:%d\n",num);
	move(num,a, b, c);

}