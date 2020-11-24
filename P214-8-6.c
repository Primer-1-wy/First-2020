/*P241-8-6.c
 删除字符： 输入一个字符串，再输入一个字符 ch，
 将字符串中所有的 ch 字符删除后输出该字符串。
 要求定义和调用函数 delchar(s,c)，
 该函数将字符串 s 中出现的所有 c 字符删除。
*/
#include<stdio.h>
void delchar(char *str, char c);
void main()
{
	char c;
	char str[80];
	gets(str);
	c=getchar();
	delchar(str, c);
	printf("result: ");
	puts(str);
}
void delchar(char *str, char c)
{
	int i, j;
	i = j = 0;
	while(str[i] != '\0')
	{
		if(str[i] != c)
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
}