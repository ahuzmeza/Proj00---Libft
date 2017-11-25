


#include "includes/libft.h"

#include <stdio.h>

int main (int argc, char **argv)
{

/* ft_strlen */
	int a, b;
	char s1[] = "alin aaa b";
	a = ft_strlen(s1);
	b = strlen(s1);
	printf("ft_strlen: ");
	if (a == b)
		printf("	ok");
	else
		printf(" error");

	printf("\n");

/* ft_strcmp */ 
	
	printf("ft_strcmp: ");
	if (ft_strcmp(argv[0] ,"./a.out") == 0)
		printf("	ok");
	else
		printf(" error");

	printf("\n");

/* ft_strncmp */

	printf("ft_strncmp: ");
	if (ft_strncmp(argv[0] ,"./a.out",2) == 0)
		printf("	ok");
	else
		printf(" error");

	printf("\n");


/* ft_strcpy */

	printf("ft_strcpy: ");
	char s2[] = "abcdef-gh";
	char s3[256];
	ft_strcpy(s2,s3);
	if (ft_strcmp(s2,s3) == 0)
		printf("	ok");
	else
		printf("	error");
	printf("\n");


/* ft_strncpy */

	printf("ft_strncpy: ");
	char s4[] = "abcdefg";
	char s5[256];
	char s6[256];
	int n1	= 6;
	ft_strncpy(s5,s4,n1);
	   strncpy(s6,s4,n1);
	if (ft_strcmp(s5,s6) == 0)
		printf("	ok");
	else
		printf("	error");

	printf("\n");


/* ft_strcat */

	printf("ft_strcat: ");
	char dest1[] = "academy_";
	char dest2[] = "academy_";
	char src1[] = "plus+";
	ft_strcat(dest1, src1);
	char test1[256];
	char test2[256];
	ft_strcpy(test1, dest1);
	strcat(dest2, src1);
	ft_strcpy(test2,dest2);
	if (ft_strcmp(test1, test2) == 0)
		printf("	ok");
	else
		printf("	error");
	printf("\n");


/* ft_strncat */

	printf("ft_strncat: ");
	char dest21[] = "academy_";
	char dest22[] = "academy_";
	char test21[] = "plus+abc";
	char test22[] = "plus+aaa";

	ft_strncat(dest21,test21,5);

	   strncat(dest22,test22,5);
	
	if (ft_strcmp(dest21,dest22) == 0)
		printf("	ok");
	else
		printf("	error");

	printf("\n");


/* ft_strlcat */

	printf("ft_strlcat: ");
	char dest31[] = "thisstring";
	char dest32[] = "thisstring";
	char src31[] = "has15";
	char src32[] = "has15";
	int test31, test32;
	int n31, n32, a31, b31;
	
	a31 = strlen(dest31);
	b31 = strlen(src31);

	test31 = a31 + b31;
	test32 = ft_strlcat(dest31,src31,sizeof(dest31));	

	if (test31 == test32)
		printf("	ok");
	else
		printf("	error");

	printf("\n");


/* ft_strdup */
	
	printf("ft_strdup: ");
	char dest41[] = "mystring";
	char dest42[] = "mystring";
	char *src41;
	char *src42;

	src41 = ft_strdup(dest41);
	src42 =    strdup(dest42);

	if (strcmp(src41, src42) == 0)
		printf("	ok");
	else
		printf("	error");
	printf("\n");

/* ft_strchr */
	
	printf("ft_strchr");
	char s51[] = "ana are mere";
	char a51 = 'r';

	if (ft_strchr(s51,a51) == strchr(s51,a51))
		printf("	ok");
	else
		printf("	error");
	printf("\n");

/* ft_strrchr */
	
	printf("ft_strrchr");
	char s61[] = "ana are mere";
	char a61 = 'r';

	if (ft_strrchr(s61,a61) == strrchr(s61,a61))
		printf("	ok");
	else
		printf("	error");
	printf("\n");


/* ft_strstr */
	
	printf("ft_strstr");
	char s71[] = "ana are mere";
	char s72[] = "are";

	if (ft_strstr(s71,s72) == strstr(s71,s72))
		printf("	ok");
	else
		printf("	error");
	printf("\n");













	
}
