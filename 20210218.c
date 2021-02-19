#include<stdio.h>
#include<string.h>

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	int result;
//	int pre_result;
//	int nex_older_result;
//	result = pre_result = 1;
//	while (n > 2)
//	{
//		 
//		nex_older_result = pre_result;
//		pre_result = result;
//		result = nex_older_result + pre_result;
//		  n--;
//	}
//	return result;
//}
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}



//double pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * pow(n, k - 1);
//	else
//		return 1.0 / (pow(n, -k));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf\n", ret);
//
//
//	return 0;
//}



//int DigitSum(size_t n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()
//{
//	size_t num = 0;
//	scanf_s("%d", &num);
//	size_t ret = DigitSum(num);
//	printf("%d \n",ret);
//
//	return 0;
//}


//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char *str)
//{
//	int len = my_strlen(str);
//	char * ringt = str;
//	char * left = str + len - 1;
//
//	while (ringt < left)
//	{
//		char tmp = *ringt;
//		*ringt = *left;
//		*left = tmp;
//		ringt++;
//		left--;
//	}
//}

//void reverse_string(char *str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(my_strlen(str+1) >= 2)
//		reverse_string(str+1);
//
//	*(str + len - 1) = tmp;
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}





//void printbit(int  num)
//{
//	int i;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	printbit(-1);
//	printf("\n");
//	printbit(10);
//	printbit(5);
//
//	return 0;
//}
















