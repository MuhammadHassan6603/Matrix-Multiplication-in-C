#include <stdio.h>
int i,j,k;
void matrixadd(int a[2][2],int b[2][2],int Res[2][2])
{
	for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        	for(k=0;k<2;k++)
        	{
            	Res[i][j]=Res[i][j]+a[i][k]*b[k][j];
        	}
        }
    }
}
int main()
{
	int A[2][2]={{2,2},{2,2}};
    int B[2][2]={{3,3},{3,3}};
    int Res[2][2];
    matrixadd(A,B,Res);
    printf("Multiplication of Matrix is : \n");
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		for(k=0;k<2;k++)
        		{
            		printf("%i\t",Res[i][j]);
        		}
			printf("\n");
		}
	}
}
