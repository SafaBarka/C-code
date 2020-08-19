#include <stdio.h>

int main(){
	//integer array 
	//(array) is a collection of integer
	int array[3]={100,200,300};

	//assigned address of first elemnet in the (array) to the void pointer
	void *pv = array; //or pv = &array[0]

	printf("address of the element pointed by (pv) = %p <==> address of first elemnt in the array = %p\n",pv,&array[0]);

	printf("----------------------------------\n");

	//print the first , second  elements in the (array) using (pv)  void pointer
	//typcast the void pointer to (int *) before performing any arithmetic operation
	

	printf("array[0] = %d\n",*(int *)pv);

	printf("array[1] = %d\n",*((int *)pv + 1));

	printf("------------------------------------\n");
	//print address of first and second elements in (array)
		
	printf("address of first element (array[0]) = %lu\n",pv);

	printf("address of second element (array[1]) = %lu\n",(int *)pv +1);

	//in my case the integer size is 4 byte
	printf("size of int =  %lu\n",sizeof(int));
		
}
