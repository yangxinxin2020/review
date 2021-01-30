// TEST20210127.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void main()
{
	char str[10]="Hello";
	char *p = "HELLO";
	cout<<strlen(str)<<endl;//5
	cout<<sizeof(str)<<endl;//10
}
/*
void main()
{
	char str[]="Hello";
	char *p = "HELLO";
	cout<<strlen(str)<<endl;//5
	cout<<sizeof(str)<<endl;//6
}
*/

/*int main(int argc, char* argv[])
{
	printf("Hello World!\n");
	return 0;
}
*/
