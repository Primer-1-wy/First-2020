/*P241-8-6.c
 ɾ���ַ��� ����һ���ַ�����������һ���ַ� ch��
 ���ַ��������е� ch �ַ�ɾ����������ַ�����
 Ҫ����͵��ú��� delchar(s,c)��
 �ú������ַ��� s �г��ֵ����� c �ַ�ɾ����
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