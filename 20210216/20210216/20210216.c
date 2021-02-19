#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
//int diff_bit(int m, int n)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((((m >> i) & 1) == 1) != (((n >> i) & 1) == 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
int diff_bit1(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main()
{
	int m, n;
	int i;
	int count=0;
	scanf("%d %d", &m, &n);
	int ret = diff_bit1(m, n);
	printf("%d ", ret);
	return 0;
}




//int int_cmp(const void *s1, const void *s2)
//{
//	return (*(int *)s1 - *(int *)s2);
//}
//void _swap(void *s1, void *s2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *((char *)s1+i);
//		*((char *)s1 + i) = *((char *)s2 + i);
//		*((char *)s2 + i )= tmp;
//	}
//}
//void my_bubble(void *base, int count, int size, int(*cmp)(void *, void *))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (cmp((char *)base + j *size, (char *)base +(j + 1) * size) > 0)
//			{
//				_swap((char *)base + j * size,(char *)base + (j + 1)*size,size);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,8,4,5,6,9,3,7,0 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_bubble(arr, sz, sizeof(int), int_cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//struct stu
//{
//	char name[10];
//	int age;
//};
//int cmp_stu_by_age(const void *s1,const void *s2)
//{
//	return ((struct stu *)s2)->age - ((struct stu *)s1)->age;
//}
//int cmp_stu_by_name(const void *p1, const void *p2)
//{
//	return strcmp(((struct stu *)p1)->name, ((struct stu *)p2));
//}
//int main()
//{
//	struct stu arr[] = { {"wang",24},{"zhao",40},{"zhang",34} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	return 0;
//}




//int int_cmp(const void *s1,const void *s2)
//{
//	return (*(int *)s1 - *(int *)s2);
//}
//int main()
//{
//	int arr[] = { 1,2,8,4,5,6,9,3,7,0 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), int_cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}




//int find(int arr[3][3], int k, int r, int c)
//{
//	int x = 0;
//	int y = c - 1;
//	while (x < r && y>=0)
//	{
//		if (arr[x][y] < k)
//			x++;
//		else if (arr[x][y] > k)
//			y--;
//		else
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int ret=find(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//
//	return 0;
//}

//int is_left_move(char *s1, char *s2)
//{
//	int len2 = strlen(s2);
//	int len1 = strlen(s1);
//	if (len2 != len1)
//	{
//		return 0;
//	}
//	strncat(s2, s2, len2);
//	if (strstr(s2, s1))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//


//void reverse(char *left, char *right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//
//char* left_move(char *str, int k)
//{
//	assert(str);
//	int len = strlen(str);
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len - 1);
//	reverse(str, str + len - 1);
//	return str;
//}
//int is_left_move(char *s1, char *s2)
//{
//	int len = strlen(s2);
//	while (len--)
//	{
//		left_move(s2, 1);
//		if (strcmp(s1, s2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	if (is_left_move(arr2, arr1))
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//char * left_move(char *str, int k)
//{
//	assert(str);
//	int len=strlen(str);
//	int j;
//	for (j = 0; j < k; j++)
//	{
//		int i;
//		char tmp = *str;
//		//剩下的len-1个字符往前挪动
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//	return str;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 1;
//	left_move(arr, k);
//	printf("%s", arr);
//	return 0;
//}









//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a=1;a<=5;a++)
//		for(b=1;b<=5;b++)
//			for(c=1;c<=5;c++)
//				for(d=1;d<=5;d++)
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3)) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//
//
//
//	return 0;
//}











