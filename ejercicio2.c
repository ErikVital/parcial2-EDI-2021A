//Erik Vital Muñoz

//Git no quiere nomas en mi compu, una disculpa y estoy tratando de subirlo en todas partes y que pueda ver mis tareas :c
#include <stdio.h>

#define N 5

int main()
{
	int matriz[N][N];
	int i, j;
	
	for(i=0 ; i < N ; i++)
	{
		for(j=0; j < N ; j++)
		{
			if(i==j)
			{
				matriz[j][i]=1;
				//printf("%d", matriz[j][i]);
			}
			else
			{
				matriz[j][i]=0;
				//printf("%d", matriz[j][i]);
			}
			printf("%d", matriz[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
