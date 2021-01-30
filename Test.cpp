#include<iostream>
#include<stack>
#include<cstring>
#include <assert.h>

#include<string.h>
#include"memcopy.h"
using namespace std;
#include<ctype.h>

//strlen() strcat()  strcmp()  strcpy() assert()
//memset() memcmp()  memcpy()  memmove()
//strncat()  strncmp()  strncpy()
//strcasecmp("abc","ABC") 实现
/*************************************************/
//strcat()实现
/*char *MyStrcat(char *des ,const char *src)
{
	assert(des != NULL && src != NULL);
	char *tmp = des;
	while(*tmp != '\0')
		tmp++;
	while((*tmp++ = *src++) != '\0');
	return des;			
} 
char *MyStrncat(char *des,const char *src,size_t n)
{
	assert(des != NULL && src != NULL && n>0);
	char *tmp = des;
	while(*tmp != '\0')
		tmp++;
	while((*tmp++ = *src++) && --n);
	return des;
}*/
//strlen()实现
/*static int Mystrlen(const char *src)
{
	assert(src != NULL);
	int con = 0;
	while((*src++) != '\0')
		++con;
	return con;
}*/

//strcmp()实现
/*
static int MyStrcmp(const char *str1,const char *str2)
{
	assert(str1 != NULL && str2 != NULL);
	while((*str1) &&((*str1) == (*str2)))
	{		
		str1++;
		str2++;
	}
	if(*(unsigned char *)str1   >  *(unsigned char *)str2)
	{
		
		cout<<"str1 > str2";
		return 1;
	}
	else if(*(unsigned char *)str1 < *(unsigned char *)str2)
	{
		cout<<"str1 < str2";
		return -1;
	}
	else
	{
		cout<<"str1 = str2";
		return 0;
	}

}

static int Mystrncmp(const char *str1,const char *str2,size_t n)
{
	assert(str1 != NULL && str2 != NULL && n > 0);
	while((*str1) &&((*str1) == (*str2)) && n )
	{		
		str1++;
		str2++;
		--n;
	}
	if(*(unsigned char *)str1   >  *(unsigned char *)str2)
	{
		
		cout<<"str1 > str2";
		return 1;
	}
	else if(*(unsigned char *)str1 < *(unsigned char *)str2)
	{
		cout<<"str1 < str2";
		return -1;
	}
	else
	{
		cout<<"str1 = str2";
		return 0;
	}

}*/
//strcpy()
/*
static char *Mystrcpy(char *str,const char *src)
{
	assert(str !=NULL && src != NULL);
	char *p  = str;
	while((*str++ = *src++) != '\0');
	return p;
}
static char *Mystrncpy(char *str,const char *src,size_t n)
{
	assert(str != NULL && src != NULL && n > 0);
	char *p = str;
	while(((*str++ = *src++) != '\0') && --n);
	return p;
}*/
//memset()
//menset(str,0,sizeof(a));
//memcmp()
// int memcmp(const void *str1, const void *str2, size_t n)) 把存储区 str1 和存储区 str2 的前 n 个字节进行比较。
/*
//文化落后始作俑者.
static int Mymemcmp(const char *str1,const char *str2,size_t n)
{
	assert( str1 != NULL && str2 != NULL &&  n >0);
	const  char *pDes = str1;
	const  char *pSrc = str2;
	while((*pDes) && *pDes == *pSrc)
	{
		pDes++;
		pSrc++;
	}
	if(*(unsigned char *)pDes > *(unsigned char *)pSrc)
	{
		cout<<"str1 > str2"<<endl;
		return 1;
	}
	else if(*(unsigned char *)pDes < *(unsigned char *)pSrc)
	{
		cout<<"str1 > str2"<<endl;
		return -1;
	}
	else
	{
		return 0;
	}

}*/
//memcpy()
//C 库函数 void *memcpy(void *str1, const void *str2, size_t n) 从存储区 str2 复制 n 个字节到存储区 str1。
//static void *Mymemcpy()
/*#include <assert.h>
void assert( int expression );*/
//strncat()  strncmp()  strncpy()
/*
static int Mystrcasecmp(  char *s1,   char *s2)
{
	   char *p1 = s1;
	   char *p2 = s2;
	unsigned char c1,c2;
	if(p1 == p2)
		return 0;
	do
	{
		c1 = tolower(*p1++);
		c2 = tolower(*p2++);
		if(c1 == '\0')
			break;
	}while( c1 == c2);

	return c1 - c2;
}
*/

/*
void main()
{	//char *strcat(char *,const char*);

	char c[20] = "aaaa";
	const char *d = "bbbyyyyyy";
//	strcat(c,d);
	char str[] = "Hellowwwww";
	 char *s1 = "qwewqe";
	 char *s2 = "QWERTY";
	int strca = 0;
//	MyStrcat(c,d);

//	int len;
//	len = Mystrlen(str);
//	cout<<"len = "<<len<<endl;
//	MyStrcmp(Str1,Str2);
//	cout<<endl;
//	cout<<strcmp(Str1,Str2)<<endl;
//  Mystrcpy(c,d);
    
//  MyStrncat(c,d,5);
//	Mymemcmp(Str1,Str2,6);
//  memmove(c,Str1,strlen(Str1)+1);//
	for(int j = 0; j< sizeof(c)/sizeof(c[0]); ++j)
		cout<<c[j];//aaaabbb
	cout<<endl;
//	Mystrncmp(Str1,Str2,11);
	cout<<endl;
//	cout<<Mystrcasecmp(s1,s2);
//	Mystrncpy(c,d,4);	
//	cout<<strncmp(Str1,Str2,11);
	cout<<endl;
   // strncat(c,Str2,strlen(Str2)+1);//
	for(int i = 0; i< sizeof(c)/sizeof(c[0]); ++i)
		cout<<c[i];//aaaabbb
	cout<<endl;

	//cout<<*p<<endl;
}

*/
struct stu
   {
		int num;
		char name[10];
		int age;
};
void fun(struct stu *p)
{
	printf("%s\n",(*p).name);
	return;
}
void main()
{
	//struct stu students[3] = {{9801,"zhang",20},
	//							{9802,"wang",19},
	//							{9803,"zhao",18}};
    //      fun(students+1);
	//		return ;
//	union
//		{
//			short k;
//			char i[2];
//}*s, a;
//s = &a;
//s->i[0] = 0x39;
//s->i[1] = 0x38;
//printf("%x\n",a.k);
unsigned char a = 200; //255
			unsigned char b = 100; //255
			unsigned char c = 0;   //255
			c = a + b;
			printf("%d %d", a+b,c);
			printf("%d",300%256);


}

//strlen
//sizeof()
/*1、数制转换
  2、字节对齐
*/
/*
#pragma pack(4)
typedef union Test
{
	unsigned long a;//4
	unsigned short c;//2
	unsigned short usLevel[7];//14
}Test;
void main()
{
	Test t;
	cout<<"sizeof(Test)="<<sizeof(Test)<<endl;
}*/
/*
#pragma pack(4)

unsigned short *pucCharArray[10][10];
typedef union unRec
{
	unsigned long ullndex;//4 
	unsigned short usLevel[7];//14 +2
	unsigned char ucPos;//1
}REC_S;

REC_S stMax, *pstMax;

void main()
{
	cout<<sizeof(pucCharArray)<<endl;//400
	cout<<sizeof(stMax)<<endl;       //16
	cout<<sizeof(pstMax)<<endl;      //4
	cout<<sizeof(*pstMax)<<endl;     //16
}*/
/*
void main()
{
   char *pcColor = "CSOFTX3000";
   char acColor[] = "CSOFTX3000";
   
   cout<<strlen(pcColor)<<endl;//10
   cout<<strlen(acColor)<<endl;//10
   cout<<sizeof(pcColor)<<endl;//4
   cout<<sizeof(acColor)<<endl;//11
}*/
///////////////////////////////////////////////////
//2 字节对齐  空间换时间
/*typedef struct Test   // 位域
{
	char a:3;//1+3
	int  b:2;//4
	short c:2;//2+2
}Test;
void main()
{
	cout<<sizeof(Test)<<endl; //1
}*/
/*typedef struct Test   // 位域
{
	char a:3;
	char b:3;
	char c:2;
}Test;
void main()
{
	cout<<sizeof(Test)<<endl; //1
}*/
/*
typedef struct Test
{

}tt;
void main()
{
	cout<<sizeof(Test)<<endl; //1
}
*/
/*
#pragma pack(4)
typedef struct Test
{
	short a;//2+2
	struct t
	{
		int b;   //4
		double c;//8
		char d;  //1+3
	}tt;
	long e;//4
}Test;

void main()
{
	cout<<"sizeof(Test)="<<sizeof(Test)<<endl;// #pragma pack(4) 24  #pragma pack(1) 19
}*/
	
/*typedef struct Test
{
	short a;//2+6
	struct  //24
	{
		int b;  // 4+4
		double c;//8
		char d;//1+7
	};
	long e;//4+4
}Test;
void main()
{
	cout<<sizeof(Test)<<endl;
}*/
/*
typedef struct Test
{
	char a;   //1 +1
	short c;  //2 
	double b; //8
}Test;

void main()
{
	cout<<sizeof(Test)<<endl; //16
}
*/
/*
typedef struct T
{	
	
	int a;//4
	long b;//4
	double d;//8
}TEST;
*/
/*typedef struct T
{	
	char b;  //1+1
	short a; //2
	int c;   //4
	double d;//8
}TEST;*/
/*typedef struct T
{
	short a; //2
	char b;  //1+1
	int c;   //4
	double d;//8
}TEST;
void main()
{
	cout<<sizeof(TEST)<<endl;
}
*/
/*
typedef struct Test
{
	char a;  //1+3
	short b; //2+2
	double c;//8
}Test;

typedef struct TA1
{
	char a; //1+1
	short b;//2
}TA1;
typedef struct TA2
{
	
	short b;//2
	char a; //1+1
}TA2;
typedef struct TB1
{
	char a;   //1+7
	double b; //8
}TB1;
typedef struct TB2
{
	double b; //8
	char a;   //1+7
}TB2;
typedef struct TC1
{
	short a;  //2+6
	double b; //8
}TC1;

typedef struct TC2
{
	short F;
	double b;
	short a;
}TC2;


void main()
{	Test t;
	cout<<"sizeof(TA1) = "<<sizeof(TA1)<<endl; 
	cout<<"sizeof(TA2) = "<<sizeof(TA2)<<endl; 
	cout<<"sizeof(TB1) = "<<sizeof(TB1)<<endl; 
	cout<<"sizeof(TB2) = "<<sizeof(TB2)<<endl; 
	cout<<"sizeof(TC1) = "<<sizeof(TC1)<<endl; 
	cout<<"sizeof(TC2) = "<<sizeof(TC2)<<endl; 
	
}
*/
/*typedef struct Test
{
	char a;  //1 + 7
	double b;// 8
	int c;   // 4 + 4

}Test;
void main()
{	Test t;
	t.a = 'a';
	t.b = 123.123;
	t.c = 4;
	cout<<"sizeof(Test) = "<<sizeof(Test)<<endl; //sizeof(Test) = 24
}
*/
/*
typedef struct Test
{
	char a;
	char b;
	char c;

}Test;
void main()
{
	cout<<"sizeof(Test) = "<<sizeof(Test)<<endl; //sizeof(Test) = 3
}

*/


//1数制转换
////////////////2进制转换///////////////////////
/*static void Con_2( unsigned int val)
{
	stack<int> st;
	if(val == 0)
	{
		st.push(0);
	}
	else
	{
		while(val)
		{
			st.push(val%2);
			val /=2;
		}
	}
	while(!st.empty())
	{
		cout<<st.top();
		st.pop();
	}
	cout<<endl;
}*/
/*
static void Con_8(unsigned int val)
{
	stack<int> st;
	if(val == 0)
	{	
		st.push(0);
	}
	else
	{	
		while(val)
		{
			st.push(val%8);
			val /= 8;
		}
	}
	while(!st.empty())
	{
		cout<<st.top();
		st.pop();
	}
	cout<<endl;
}*/
/*
static void Con_i_To_16(unsigned int val)
{   
	stack<char> st;

	if(val == 0)
	{
		st.push('0');
	}
	else
	{
		while(val)
		{
			st.push("0123456789ABCDEF"[val%16]);
			val /= 16;
		}
	}

	while(!st.empty())
	{
		cout<<st.top();
		st.pop();
	}
	cout<<endl;
}
void main()
{
	unsigned int value;
	while(1)
	{
		cout<<"input value:>";
		cin>>value;
		//Con_2(value);
		//Con_8(value);
		Con_i_To_16(value);
	
			
	}
}
*/

/*
1、strlen()  sizeof()
2、数组指针 指针数组  函数指针 指针函数
3、复杂指针的解析以及化解
---------------------------
*/
/*
*********************************
int (*func)(int *,int (*)(int *));
typedef int Ar(int *,pFun fun);
typedef int (*pFun)(int *);
Ar ar;
*********************************

*********************************
int (*fun[5])(int *);
///1typedef int Ar(int *);
///1typedef Ar *myFun[5];
///1myFun fun;
//////////////////////
typedef (*func)(int *);
func fu[5]; 
*********************************

*********************************
int (*(*fun)[5])(int *);
typedef int  Ar(int *);
typedef Ar *(*fun)[5];


typedef int (*Fun)(int *);
typedef Fun(*fun)[5];
Fun func;
*********************************

*********************************
int (*(*func)(int *))[5];
typedef int Ar[5];
typedef Ar* (*pFun)(int *);
*********************************

*********************************
int *(*fun(int*))[5];
typedef int *Ar[5];
typedef Ar *pFun(int *);
*********************************/
/*
int *(*(*fun)(int *))[10];
typedef int *Ar[10];//指针数组
typedef Ar *(*pFun)(int *);//指向指针数组的函数指针
*/
/*
Ar * myFun(int *)
{
	static int a[10] = {1,2,3,4,5,6,7,8,9,10};
	static int *array[10];
	for(int i=0; i<10; ++i)
	{
		array[i] = &a[i];
	}
	return &array;
}


void main()
{
	pFun fun;
	fun = &myFun;
}
*/

///////////////////////////////
//int * ( *  (* func)(int *))[10];
//     指向指针数组的函数指针
//int (*func[5])(int *);
//int *( *fun(int *))[10];
//指向指针数组的指针函数
/*
int (*func)(int *,int (*)(int *));
           指针             指针
*/
//用变量a给出下面的定义
/*
int a;
int *a;
int **a;
int a[10];
int *a[10];
int (*a)[10];
int (*a)(int a);
int (*a[10])(int a);
*/




/*
short *ar[10][10];
short (*a)[10][10];
void main()
{  //57.42
	cout<<sizeof(ar)<<endl;
	cout<<sizeof(a)<<endl;
}*/
/*
void fun(char str[])
{
	cout<<strlen(str)<<endl;//5
	cout<<sizeof(str)<<endl;//4
}

void main()
{
	char str[] = "Hello";
	cout<<strlen(str)<<endl;//5
	cout<<sizeof(str)<<endl;//6
	fun(str);
}
*/






/*void main()
{
	char *str = "Hello";
	cout<<strlen(str)<<endl;//5
	cout<<sizeof(str)<<endl;//4
}*/
/*
void main()
{	static char str[10];//用0初始化
	for(int i=0; i<5; ++i)
	{
		str[i]  = 'a' + i;//a b c d e 
	}
	cout<<strlen(str)<<endl;//5
	cout<<sizeof(str)<<endl;//10
}*/
/*
char str[10];
void main()
{
	for(int i=0; i<5; ++i)
	{
		str[i]  = 'a' + i;//a b c d e 
	}
	cout<<strlen(str)<<endl;//5
	cout<<sizeof(str)<<endl;//10
}
*/
/*
void main()
{
0018FF3C  61 62 63 64 65 CC CC CC CC CC CC  abcde烫烫烫
0018FF47  CC 88 FF 18 00 F9 19 42 00 01 00  虉.....B...
	char str[10];/////0000000000
	for(int i=0; i<5; ++i)
	{
		str[i]  = 'a' + i;//a b c d e 
	}
	cout<<strlen(str)<<endl;//?
	cout<<sizeof(str)<<endl;//10

}*/


///0 ASCLL 48 
/// A 65
/// a 97


/*void main()
{   //八进制以内的值
	int val =	"\0\1\2\3\4"[2]; //2
	int va = "012345679"[3]; //51
	char v = "012345679"[3]; //3
}
*/

/*
void main()
{
	char str[10] = {'H','e',0,'l','o'};
	cout<<strlen(str)<<endl;//2
	cout<<sizeof(str)<<endl;//10
}*/
/*
void main()
{
	char str[10] = {'H','e','\0','l','o'};
	cout<<strlen(str)<<endl;//2
	cout<<sizeof(str)<<endl;//10
}
*/
/*void main()
{
	char str[10] = {'H','e','0','l','l','o'};
	cout<<strlen(str)<<endl;//6
	cout<<sizeof(str)<<endl;//10
}
*/

//总结：char str[]="dfdsfd";时候，后面有\0   char str[]={'H','e','l'} '\0' 未知，所以strlen未知
//      char str[10] ="abcde"; strlen(str) = 5 sizeof(str) = 10 
/*
void main()
{
	char str[10] = {'H','e','l','l','o'};
	cout<<strlen(str)<<endl;//5
	cout<<sizeof(str)<<endl;//10
}*/
/***********************************************************************
void main()
{
	char str[] = {'H','e','l','l','o'};
	cout<<strlen(str)<<endl;//?  没有\0
	cout<<sizeof(str)<<endl;//5
}
*/
/************************************************************************/
/*	str	0x0018ff3c "Hello"
	[0]	0x48 'H'
	[1]	0x65 'e'
	[2]	0x6c 'l'
	[3]	0x6c 'l'
	[4]	0x6f 'o'
	[5]	0x00 ''
	[6]	0x00 ''
	[7]	0x00 ''
	[8]	0x00 ''
	[9]	0x00 ''

*/
/*
void main()
{
	char str[10] = "Hello";
	cout<<strlen(str)<<endl;//5
	cout<<sizeof(str)<<endl;//10
}
*/

/************************************************************************/
  /* str	0x0018ff40 "Hello"
	[0]	0x48 'H'
	[1]	0x65 'e'
	[2]	0x6c 'l'
	[3]	0x6c 'l'
	[4]	0x6f 'o'
	[5]	0x00 ''
	*/
/*
void main()
{
	char str[] = "Hello";
	cout<<strlen(str)<<endl;//5
	cout<<sizeof(str)<<endl;//6
}*/