/*统计英文字母、数字、空格和其他字符个数。
Description

输入一行字符，统计其中的英文字母、数字、空格和其他字符个数。


Input
输入一行字符。


Output
统计其中的英文字母、数字、空格和其他字符个数。


Sample Input 1 

ab12cde &% 3
Sample Output 1

5 3 2 2*/
#include<stdio.h>
int main()
{
	int i,c[4]={0};
	char s[80]={0};
	gets(s);
	for(i=0;s[i]!='\0';i++)
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
			c[0]++;
		else if(s[i]>'0'&&s[i]<'9')
			c[1]++;
		else if(s[i]==' ')
			c[2]++;
		else
			c[3]++;
	for(i=0;i<=3;i++)
		printf("%d ",c[i]);
}