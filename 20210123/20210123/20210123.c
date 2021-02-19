#include<stdio.h>
int my_strlen1(char *ch)
{
	int count = 0;
	while (*ch != '\0')
	{
		count++;
		ch++;
	}
	return count;
}

int my_strlen2(char *ch)
{
	if (*ch == '\0')
	{
		return 0;
	}
	else
	{
		return 1+my_strlen2(ch + 1);
	}
}


int main()
{
	char ch[] ="abcdefj";
	int len1 = my_strlen1(ch);
	int len2 = my_strlen2(ch);
	printf("%d\n", len1);
	printf("%d\n", len2);

return 0;
}











