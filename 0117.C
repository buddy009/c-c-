
#include <stdio.h>
int main()
{
	int i= 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", i, j, i*j);
		}
		printf("\n");
	}





	return 0;
}











int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left= 0;
	int sz = sizeof(a)/sizeof(a[0]);
	int right= sz-1;
	int fout = 4;
	int mid=0;
	while (left <= right)
	{
		 mid = (left + right) / 2;

		if (a[mid] < fout)
		{
			left = mid + 1;
		}
		else if (a[mid] > fout)
		{
			right = mid - 1;
		}
		else
		{
			printf("%d ", mid);
			break;
		}

	}
	if (left>right)
	{
		printf("没有找到\n");
	}
	



	return 0;
}







int main()
{
	int a[10] = { 145,23,83,444,5,456,7,89,965,10 };
	int i;
	int max = a[0];
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("最大的数是%d\n", max);



	return 0;
}





int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i,j;
	int tem = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++)
		{
			if (a[j] < a[j+1])
			{
				tem = a[j];
				a[j] = a[j+1];
				a[j+1] = tem;
			}
				
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d", a[0]);


	return 0;
}





int main()
{
	///计算  1/1   -1/2   +1/3   -1/4   +1/5 …… + 1/99 - 1/100 的值，打印出结果
	int i;
	double sum = 0;
	int flag = 1;
	for (i = 2; i <= 100; i++)
	{
		sum += flag*1.0/i;
		flag = -flag;
	}
	printf("sum=%lf\n", sum);



	return 0;
}


/*
思路：
1. 从上述表达式可以分析出
   a. 该表达式主要由100项，基数项为正，偶数项为负
2. 设置一个循环从1~100，给出表达式中的每一项：1.0/i, 注意此处不能使用1，否则结果全部为0
	然后使用flag标记控制奇偶项，奇数项为正，偶数项为负
	然后将所有的项相加即可
*/




#include <stdio.h>


int  main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}





int main()
{
	//编写程序   数一下，1到100的所有整数中出现多少个数字9
	int i = 0;
	int count = 0;
	for (i = 100; i >=9 ; i--)
	{
		if (i % 10 == 9)//取个位，判断是否有9；
		{
			printf("%d ", i);
			count++;
		}

		if (i / 10 == 9)//取十位，判断是否有9；
		{
			printf("%d ", i);
			count++;
		}

	}

	printf("count=%d\n", count);

return 0;
}











int main()
{
	//写一个代码：打印100~200之间的素数
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		// 判断i是否为素数，用【2，i）之间的每一个数据被i除，只要有一个可以被整除，就不为素数。
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}

		//上述循环之后，如果i和j相等，说明【2，i)之间的所有数据都不能被i整除，则i为素数。

		if (i == j)
		{
			printf("%d ", i);
		}
	}
return 0;
}








int main()
{
	//打印1000年到2000年之间的闰年
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d ", i);
		}
	}




	return 0;
}










int main()
{
	//给定两个数，求这两个数的最大公约数
	int a = 24;
	int b = 60;
	int i = 0;
	for (i = a; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
			break;
	}
	printf("a=%d和b=%d的最大公约数是=%d\n", a, b, i);





	return 0;
}








int main()
{
	//打印3的倍数的数。从1---100之间所有3的倍数的数字。
	int i = 0;
	for (i = 3; i <= 100; i+=3)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}



	return 0;
}






int main()
{
	写代码将三个数安从大到小输出
	int a[3] = { 100,450,789 };
	int i,j;
	int t = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			if (a[j] < a[j + 1])//比较大小
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 3; i++)//输出
	{
		printf("%d ", a[i]);
	}
return 0;
}



int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}


第一次循环：a = 1，b = 1--->b小于20，if不成立，b % 3 == 1 % 3 == 1成立，b = b + 3, 此时b的值为4

第一次循环：a = 2，b = 4--->b小于20，if不成立，b % 3 == 4 % 3 == 1成立，b = b + 3, 此时b的值为7

第一次循环：a = 3，b = 7--->b小于20，if不成立，b % 3 == 7 % 3 == 1成立，b = b + 3, 此时b的值为10

第一次循环：a = 4，b = 10--->b小于20，if不成立，b % 3 == 10 % 3 == 1成立，b = b + 3, 此时b的值为13

第一次循环：a = 5，b = 13--->b小于20，if不成立，b % 3 == 13 % 3 == 1成立，b = b + 3, 此时b的值为16

第一次循环：a = 6，b = 16--->b小于20，if不成立，b % 3 == 16 % 3 == 1成立，b = b + 3, 此时b的值为19

第一次循环：a = 7，b = 19--->b小于20，if不成立，b % 3 == 19 % 3 == 1成立，b = b + 3, 此时b的值为22

第一次循环：a = 8，b = 22--->b大于20，if成立，循环break提出

最后打印a：8






