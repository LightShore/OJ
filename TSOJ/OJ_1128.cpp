/*题目内容
题目描述:
已知n个人（编号分别为1、2、3，……、n）围坐在一张圆桌周围，从编号为1的人开始报数，数到m的那个人出列；
他的下一个人又从1开始报数，数到m的那个人又出列，依次规律重复下去，直到圆桌周围的人全部出列
输入描述：
一行：人数n和间隔数m
输出描述：
出列顺序，每个编号之间用一个空格分开 
样例输入:
9 5
样例输出:
5 1 7 4 3 6 9 2 8*/
#include <stdio.h>
int main()
{
	int a[10000],b[10000],i,n,m,x,k,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++) a[i]=i+1;
	i=0;
	while(a[1]!='\0')
	{
		for(x=1;x!=m;x++)
		{
			if(i=n-1)
			    i=i-n;
			i++;
		}
		printf("%d ",a[i]);
		i++;
		if(i=n-1) i=i-n;
		j=i;
		for(k=0;k<j;k++) b[k]=a[k];
		for(k=j;a[k]!='\0';k++) b[k]=a[k+1];
		for(k=0;k<n;k++) a[k]=b[k];
	}
	printf("%d ",a[0]);
	return 0;
}
