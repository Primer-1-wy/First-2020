/*8.字符串转换成十进制整数。输入一个以#结束的字符串，
滤去所有的非十六进制字符(不分大小写)，组成一个新的表示十六进制数字的字符串
然后将其转换为十进制数后输出。
如果过滤后字符串的首字符为“-”，代表该数是负数。试编写相应程序。
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
			j++;  //记录有效字符个数
		}
		else if(str[i]=='-' &&j==0&& flag==1 )  //是否是负数
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