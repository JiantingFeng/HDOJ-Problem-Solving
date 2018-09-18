
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,m,sum;	 
	char s[100];
	while(~scanf("%d",&n))
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			scanf("%s",&s);
			m=strlen(s);
			for(i=0;i<m;i++)
			{
				if(s[i]>='0'&&s[i]<='9')
					sum++;
			}
			printf("%d\n",sum);
		}
	}
	  return 0; 
}