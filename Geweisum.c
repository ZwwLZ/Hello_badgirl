#include<stdio.h>
//8.	����������a�У�10��Ԫ�أ���ʼֵΪ1001��1000��2001��1030��5201��4110��2111��3300��6013��3123��
//��ÿ����λ֮�ͣ�ǧλ����λ��ʮλ����λ����С���������������ǰ����������顣
int main()
{
	int a[] = {1001,1000,2001,1030,5201,4110,2111,3300,6013,3123};
	int i, ge = 0, shi = 0, bai = 0, qian = 0,sum=0,t,j;
	printf("����ǰ������\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("����������\n");
	for(j=0;j<10;j++)
	{ 
		for (i = 0; i < 10; i++)
		{
			ge = a[i] % 10;
			shi = a[i] / 10 % 10;
			bai = a[i] / 100 % 10;
			qian = a[i] / 1000;
			
			if (sum > ge + bai + shi + qian && i!=0)
			{
				t = a[i - 1];
				a[i - 1] = a[i];
				a[i] = t;
			}
			sum = ge + bai + shi + qian;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}