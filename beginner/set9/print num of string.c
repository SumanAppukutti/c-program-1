#include <stdio.h>
#include<string.h>
int main(void) {
	char s[100];
	int i,l;
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
		printf("%c",s[i]);
		}
	}
	return 0;
}
