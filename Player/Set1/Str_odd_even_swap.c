#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[20];
    printf("Enter the string");
    gets(str);
    int length=strlen(str);
    for(int i=0;i<length;i=i+2)
    {
    	if(str[i]!='\0')
    	{
    		int t;
    		t=str[i];
    		str[i]=str[i+1];
    		str[i+1]=t;
    	}
    }
    printf("%s",str);
    return 0;
}