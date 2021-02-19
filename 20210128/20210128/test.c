#include <stdio.h>
char * my_strcpy(char *dst, const char *str)
{
	char *eps = dst;
	while (*eps++ = *str++);
	return dst;
}

int main()
{
	char str[] = "abcdef";
	char dtr[20];
	char *sp = dtr;
	my_strcpy(dtr, str);
	printf("%s", sp);
	

	return 0;
}





//void swap_arr(int arr[], int sz)
//{
//	
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap_arr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//int my_strlen(char *str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//size_t my_strlen(const char * str)
//{
//	const char *ese = str;
//	while (*ese++!='\0');
	/*return (ese - str - 1);*/
//}

//int main()
//{
//	char str[] = "abcdef";
//	int re=my_strlen(str);
//	printf("%d\n", re);
//	return 0;
//}
//




//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}