#include<stdio.h>

#include<stdlib.h>

int main()
{

	int size = 0;
	int *ptr = NULL;


	printf("Enter number of element :");
	scanf("%d",&size);

	ptr = calloc(size , sizeof(int));          //step1 : Allocate the memory


	if(ptr == NULL)
	{
		printf("Unable to allocate thr memory\n");

	}
	else

	{
		printf("Memory succsfully allocated");
	}

	// step 2 :use the memory


	free(ptr);     // step 3: free the memory     

	return 0;            
}