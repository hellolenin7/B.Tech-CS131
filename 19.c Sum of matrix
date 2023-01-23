#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],sum[20][20],m,n,r,c,i,j;
	printf("Enter the no. of row and coloumn of first matrix:\n");
	scanf("%d%d",&m,&n);
	printf("Enter the no. of row and coloumn of second matrix:\n");
	scanf("%d%d",&r,&c);
	if(m!=r && n!=c)
		exit(0);
	else
	{
		printf("Enter the elements of first matrix:\n");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
				}
			}
		printf("Enter the elements of second matrix:\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				scanf("%d",&b[i][j]);
			}
		}
		printf("The first matrix is:\n");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("The second matrix is:\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				sum[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("The sum of the matrix is:\n");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("%d\t",sum[i][j]);
			}
			printf("\n");
		}
	}
}

