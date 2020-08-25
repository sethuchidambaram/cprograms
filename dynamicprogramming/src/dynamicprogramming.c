/*
 ============================================================================
 Name        : dynamicprogramming.c
 Author      : sethu
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fib(int n);

int f[100]={0,1,1};

int main(void) {



	int result=fib(10);
	printf("%d\n",result);



}



int fib(int n)
{
	int ans;
	if(f[n] != 0)
    return f[n];

	ans=fib(n-1)+fib(n-2);
	f[n]=ans;

	return ans;


}
