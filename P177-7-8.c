/*8.�ַ���ת����ʮ��������������һ����#�������ַ�����
��ȥ���еķ�ʮ�������ַ�(���ִ�Сд)�����һ���µı�ʾʮ���������ֵ��ַ���
Ȼ����ת��Ϊʮ�������������
������˺��ַ��������ַ�Ϊ��-������������Ǹ������Ա�д��Ӧ����
*/
#include <stdio.h>
# define MAXLEN 81
int main()
{
	char str[MAXLEN];
	int digit, j=0, flag=1, number,i=0;
	gets(str);
	for(i= 0; str[i]!='\0';i++) {
		if((str[i] >='0'&& str[i]<='9')||(str[i]>='A'&& str[i]<='F')||(str[i]>='a'&& str[i]<='f')){
			str[j] = str[i];
			j++;  //��¼��Ч�ַ�����
		}
		else if(str[i]=='-' &&j==0&& flag==1 )  //�Ƿ��Ǹ���
			flag=-1;
	}
	str[j] = '\0';
	puts(str);
	number= 0;
	for(i= 0; str[i]!='\0';i++) {
		if( str[i]>= '0' && str[i]<='9') 	digit = str[i]- '0'; 
		else if(str[i]>='A' && str[i]<='F')	digit = str[i]-'A'+ 10;
		else if(str[i]>='a' && str[i]<='f')	digit = str[i]- 'a' + 10;
		number = number * 16 + digit;
	}
	if( number==0) printf("\n%d\n", number);
	else printf( "%d\n", flag * number);
	return 0;
}