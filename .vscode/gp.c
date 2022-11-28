#include <stdio.h>
int main()
{
	float u=1,d=2,s=1,j=1,n,t;
	printf("enter the range : ");
	scanf("%f",&n);
	printf("1 \n");
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			u=(-1);
			d=i;
			t=u/d;
			printf("%.0f/%.0f \n",u,d);
			s=s+t;
		}
		else
		{
			u=1;
			d=i;
			t=u/d;
			printf("%.0f/%.0f \n",u,d);
			s=s+t;
		}
		
	}
	printf("the sum of series is %f ",s);
}