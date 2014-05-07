#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void fun(char *s)
{
 s=(char*)malloc(sizeof(char));
 *s=100;
 free(s);

}
void fun2(int *p)
{
   //*p=20;
   p=(int *)malloc(sizeof(int));
   *p=20;
   printf("%d\n",*p);

}

int main()
{
	char *k=NULL;
	int *p=NULL;

	fun(k);
	fun2(p);
	
	
}

