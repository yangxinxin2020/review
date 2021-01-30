#include<iostream>
#include<assert.h>

using namespace std;
/*
static void *Mymemcpy(void *des,const char *str2,size_t n)
{
	assert(des != NULL && str2 != NULL && n>0);
	int uchrunks = n /sizeof(des);
	int si = n % sizeof(des);

	unsigned long *S = (unsigned long *)str2;
	unsigned long *D = (unsigned long *)des;

	while(--uchrunks)
	{
		*D++ = *S++;
	}
	while(--si)
	{
		*(char *)D++  = *(char *)S++;
	}

	return des;
}*/

static void *Mymemcpy(void *dest,const void *src,size_t len)
{
	assert(dest != NULL && src!= NULL && len >0 );
	void *ret = dest;
	if( src >= dest || (char *)dest >= (char *)src + len)
	{
		while(len--)
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest + 1;
			src  = (char *)src  + 1;
		}

	}
	else
	{
		dest = (char *)dest + len -1 ;
		src = (char *)src +len -1;
		while(len--)
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest - 1;
			src  = (char *)src  - 1;

		}
	}
	return ret;
}

/*static void *Mymemcpy(void *dest,const void *src, size_t len)
{   //char Str1[20] = "Hello";
	//01 02 03 04
	//char *Str2 = "aaaa";
	//01 02 03 04
	assert( dest != NULL && src != NULL && len>0);
    //dest  01 * 03 04 05
	void * ret = dest;
	//	char Str1[20] = "Hello";
	//  char *Str2 = "aaaa";
	//src 01 02 03 *src 05
	if(src >= dest || (char *)dest >=(char *)src + len) //
		                  //dest 01 02 03...... * 05 06
						  //src  *src len 03 04 05 06
	{
		while(len--)
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest + 1;
			src  = (char *)src  + 1;
		}
	}
	else
	{
		//内存有重叠。从高地址复制
		src =(char *)src + len -1;
		dest = (char *)dest +len -1;
		while(len--)
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest - 1;
			src  = (char *)src  - 1;

		}
	}
	return ret;
}*/
void main()
{
	char Str1[20] = "Hello";
	char *Str2 = "aaaa";
	Mymemcpy(Str1,Str2,3);
//	memcpy(Str1,Str2,3);
	for(int i=0; i<sizeof(Str1)/sizeof(Str1[0]); ++i)
	{
		cout<<Str1[i];
	}
	cout<<endl;

}