/*P242-8-8.c
 �жϻ��ģ��ж������һ���ַ��Ƿ�Ϊ�����ġ�����ν�����ġ���ָ˳���͵�����һ��
���ַ������硰XYZYX���͡�xyzzyx�����ǻ��ġ��Ա�д��Ӧ����
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
	while(*q != '\0')//�ҵ��ַ���β��
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