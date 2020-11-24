char* f_strcat (char s1[], char s2[]);

int main (void)
{ 
	char t1[80],t2[80];
	gets(t1);
	gets(t2);
	puts(f_strcat(t1,t2));
	free(f_strcat(t1,t2));
 return 0;
} 
/*
功能：连接s1和s2两个字符串
参数：s1，s2，字符串
返回值：无
*/
char * f_strcat (char s1[], char s2[]) 
{ 
	char *s;
	int i,j,k;
	s=calloc(80*sizeof(char));
	for(i=0;i<strlen(s1);i++)
		s[i]=s1[i];

	for(j=i,k=0;k<strlen(s2);j++,k++)
		s[j]=s2[k];
	
	s[j]='\0';
	return s;
} 
