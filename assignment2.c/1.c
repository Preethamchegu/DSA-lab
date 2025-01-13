#include<stdio.h>
int main()
{
	int *m1,*m2,p,q,l,m,i,j,k;
	
    printf("enter order of 1st matrix");
    scanf("%d %d",p,q);
    printf("enter order of 2nd matrix");
    scanf("%d %d",l,m);
    *m1=(int*)maolloc(sizeof(int)*(p*q));
    *m2=(int*)maolloc(sizeof(int)*(l*m));
    *mul=(int*)maolloc(sizeof(int)*(p*m));
    if(q!=l)
    {
    	printf("the matrices cannot be multiplied");
    	exit(0);	
	}
    else
	{
	
        printf("enter elements in matrix 1");
        for(i=0;i<p*q;i++)
        {
        	scanf("%d",m1);
        	m1++;
		}
		printf("enter elements in matrix 2");
        for(i=0;i<l*m;i++)
        {
        	scanf("%d",m2);
        	m2++;
		}
		for(i=0;i<p;i++)
		{
			for(j=0;j<m;j++)
			{
				sum=0
				for(k=0;k<l;k++)
				{
					sum=sum+(*(m1+i * *m2);
				}
             				
				
			}
		}
		
		
    }
}




