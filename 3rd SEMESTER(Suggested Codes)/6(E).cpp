// 6(E) To calculate addition, subtraction and multiplication of 2-dimensional matrix using function.

// addition
//# include <stdio.h>
//int add_matrix(int a[2][2], int b[2][2])
//{
//
//	int sum[2][2];
//	int i,j;
//	
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			sum[i][j] = a[i][j] + b[i][j];
//		}
//	}
//	printf("Addition: \n");
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<2;j++)
//		{
//			printf("%d ", sum[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int x[2][2]= {{1,2},{3,4}}, y[2][2] = {{1,2},{3,4}};
//	add_matrix(x,y);
//}


// subtraction
# include <stdio.h>
int subtract_matrix(int a[2][2], int b[2][2])
{

	int sub[2][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("Subtraction: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ", sub[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int x[2][2]= {{1,2},{3,4}}, y[2][2] = {{1,2},{3,4}};
	subtract_matrix(x,y);
}
