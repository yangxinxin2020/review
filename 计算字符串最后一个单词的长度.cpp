#include<iostream>
#include<assert.h>

using namespace std;

static int  CountWord(const char *str)
{
    assert(str != NULL);
    const char *tmp  = str;
    int count = 0;
	int ret = 0;
    bool flag = false;
   
	while(*(char *)str++ != '\0')
    {
        if(*(str) == ' ')
            flag = true;
		++ret;
    }
    if(flag)
    { //
		
		while(*(str) == '\0')
			--str;
		while(*(str) == ' ')
			--str;
		ret = 0;
		while(*(str--) != ' ')
			++ret;
		str = (char *)(str+ret+1);
    }
	else
	{
		while(*(str--) != '\0');
	}
	//	str = (char *)(str+9);
	
    for(int i=0; i<ret;++i)
    {   
		
        if(*(str) != ' ')
		{
			++count;
		    --str;
 
		}
		else
			break;
    }
    return count;
}

int main() 
{
	char *str1 = "hello nowcoder";
    //char *str1 = "Hello ";//ok
	//char *str1 = "Hello nowcoder"; ok
	int count  = 0;
    count = CountWord(str1);
	//count = CountWord(str2);
	//count = CountWord(str3);
//蛇口工业区

    cout<<count<<endl;
    return 0;
}