
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
		printf("û���ҵ�\n");
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
	printf("��������%d\n", max);



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
	///����  1/1   -1/2   +1/3   -1/4   +1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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
˼·��
1. ���������ʽ���Է�����
   a. �ñ��ʽ��Ҫ��100�������Ϊ����ż����Ϊ��
2. ����һ��ѭ����1~100���������ʽ�е�ÿһ�1.0/i, ע��˴�����ʹ��1��������ȫ��Ϊ0
	Ȼ��ʹ��flag��ǿ�����ż�������Ϊ����ż����Ϊ��
	Ȼ�����е�����Ӽ���
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
	//��д����   ��һ�£�1��100�����������г��ֶ��ٸ�����9
	int i = 0;
	int count = 0;
	for (i = 100; i >=9 ; i--)
	{
		if (i % 10 == 9)//ȡ��λ���ж��Ƿ���9��
		{
			printf("%d ", i);
			count++;
		}

		if (i / 10 == 9)//ȡʮλ���ж��Ƿ���9��
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
	//дһ�����룺��ӡ100~200֮�������
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		// �ж�i�Ƿ�Ϊ�������á�2��i��֮���ÿһ�����ݱ�i����ֻҪ��һ�����Ա��������Ͳ�Ϊ������
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}

		//����ѭ��֮�����i��j��ȣ�˵����2��i)֮����������ݶ����ܱ�i��������iΪ������

		if (i == j)
		{
			printf("%d ", i);
		}
	}
return 0;
}








int main()
{
	//��ӡ1000�굽2000��֮�������
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
	//���������������������������Լ��
	int a = 24;
	int b = 60;
	int i = 0;
	for (i = a; i >= 1; i--)
	{
		if (a%i == 0 && b%i == 0)
			break;
	}
	printf("a=%d��b=%d�����Լ����=%d\n", a, b, i);





	return 0;
}








int main()
{
	//��ӡ3�ı�����������1---100֮������3�ı��������֡�
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
	д���뽫���������Ӵ�С���
	int a[3] = { 100,450,789 };
	int i,j;
	int t = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			if (a[j] < a[j + 1])//�Ƚϴ�С
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 3; i++)//���
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


��һ��ѭ����a = 1��b = 1--->bС��20��if��������b % 3 == 1 % 3 == 1������b = b + 3, ��ʱb��ֵΪ4

��һ��ѭ����a = 2��b = 4--->bС��20��if��������b % 3 == 4 % 3 == 1������b = b + 3, ��ʱb��ֵΪ7

��һ��ѭ����a = 3��b = 7--->bС��20��if��������b % 3 == 7 % 3 == 1������b = b + 3, ��ʱb��ֵΪ10

��һ��ѭ����a = 4��b = 10--->bС��20��if��������b % 3 == 10 % 3 == 1������b = b + 3, ��ʱb��ֵΪ13

��һ��ѭ����a = 5��b = 13--->bС��20��if��������b % 3 == 13 % 3 == 1������b = b + 3, ��ʱb��ֵΪ16

��һ��ѭ����a = 6��b = 16--->bС��20��if��������b % 3 == 16 % 3 == 1������b = b + 3, ��ʱb��ֵΪ19

��һ��ѭ����a = 7��b = 19--->bС��20��if��������b % 3 == 19 % 3 == 1������b = b + 3, ��ʱb��ֵΪ22

��һ��ѭ����a = 8��b = 22--->b����20��if������ѭ��break���

����ӡa��8






