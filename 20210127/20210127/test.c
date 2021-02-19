
#include <stdio.h>
#include <string.h>
#include <Math.h> 
int main()
{
	int i = 0;
	
	for (i = 0; i <=1000000; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;

		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp %10, count);
			tmp = tmp / 10;
		}

		if (sum == i)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}



//int main()
//{
//	int a=0;
//	int sum = 0;
//	int tmp = 0;
//	int n = 0;
//	scanf_s("%d%d", &a, &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum = sum + tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//void Reverse(char *str)
//{
//	char * reft = str;
//	char *light = str + strlen(str) - 1;
//	while (reft <= light)
//	{
//		char tmp = *reft;
//		*reft = *light;
//		*light = tmp;
//		reft++;
//		light--;
//	}
//}
//
//int main()
//{
//	char str[101] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		printf("%s\n", str);
//		memset(str, 0, sizeof(str)/sizeof(str[0]));
//	}
//
//
//
//	return 0;
//}
//

//int main()
//{
//	char str[] = { "I am a student"};
//	
//	Reverse(str);
//
//	printf("%s", str);
//
//
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 10,23,3,4,52,46,71,88,93,101 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}












