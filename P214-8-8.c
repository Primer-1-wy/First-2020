/*P242-8-8.c
 判断回文：判断输入的一串字符是否为“回文”。所谓“回文”是指顺读和倒读都一样
的字符串。如“XYZYX”和“xyzzyx”都是回文。试编写相应程序。
*/
#include <stdio.h>
void main()
{
	char s[80];
	int mirror(char *p);
	gets(s);
	if(mirror(s) != 0)
		printf("YES\n");
	else
		printf("NO\n");
}
int mirror(char *p)
{
	char *q;
	q = p;
	while(*q != '\0')//找到字符串尾部
		q++;
	q--;
	while(p < q)
	{
		if(*p != *q)
			return 0;
		p++;
		q--;
	}
	return 1;
}