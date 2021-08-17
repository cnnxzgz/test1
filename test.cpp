#include<stdio.h>

/***
main()
{ int i=0,s=0;
  for
(;;)
  {
   
if(i==3||i==5) continue;
   
if (i==6) break;
   
i++;
   
s+=i;
  };
 
printf("%d\n",s);
}


#include <iostream>
using namespace std;
class D{
int d;
public: 
D(int x=1):d(x){}
~D(){cout<<"D";}}; 
int main(){ 
D d[]={D(3),D(3),D(3)};
D* p=new D[2];
delete[]p;
return 0; }


#include<stdio.h>
#include<string.h>

void Func(char str_arg[100])
{
    printf("%d\n",sizeof(str_arg));
}
int main(void)
{
    char str[]="Hello";
    printf("%d\n",sizeof(str));
    printf("%d\n",strlen(str));
    char*p=str;
    printf("%d\n",sizeof(p));
    Func(str);
}



#include<stdio.h>

int main(){

int a=10,b=4,c=20,d=6,e=0;
e=a++*b+c*--d;

printf("%d",e);
}

***/


/*** 
#include "stdio.h"
class A
{
    public:
    A()
    {
        printf("1");
    }
    A(A &a)
    {
        printf("2");
    }
    A &operator=(const A &a)
    {
        printf("3");
        return *this;
    }
};
int main()
{
    A a;
    A b = a;
}
***/

#include<stdio.h>
int main()
{
	char c[10];
	int i=0;
	for(;i<10;i++)
		scanf("%c",&c[i]);
	for(i=0;i<10;i++)
		c[i]=c[i]+'1';//输入：0123456789,输出：abcdefghij  //输入：abcdefghij，输出：挀敃枟槞殯 
		//c[i]=c[i]+1;//输入：0123456789,输出：123456789:    //输入：abcdefghij,输出：bcdefghijk 
	for(i=0;i<10;i++)
		printf("%c",c[i]);
	
}



