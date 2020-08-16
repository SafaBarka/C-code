#include <stdio.h>

int main(){
	//(vp) is a void pointer. 
	void *vp;

	int a = 100 ;

	float f = 12.2;

	char ch = 'a';

	//because (vp) is a void pointer , so you can assign the address of any type of variable to it 
	vp =&a;//vp references a 

	printf("value of (vp):%p  <==> the address of (a):%p \n",vp,&a);

	//displaying the value of (a) by dereferencing the pointer (vp)
	//before dereferncing a void pointer it must be typecasted to appropriate pointer type
	//type of (vp) temporarily changes from void pointer to pointer to int or (int *)
	printf("value of (a) by dereferencing  (vp):%d <==> value of (a):%d \n",*(int *)vp , a);

	printf("----------------------------------------\n");	

	vp = &f;

	printf("value of (f) by dereferencing (vp) %.2f  <==> value of (f) %.2f\n",*(float *)vp,f);

	printf("----------------------------------------\n");

	vp = &ch;

	printf("value of (ch) by dereferencing (vp):%c <==> value of (ch):%c\n",*(char *)vp ,ch);

	printf("----------------------------------------\n");

	int *ptr;

	printf("(vp) points to the address = %p\n",vp);	
	//assign a void pointer to an int  pointer
	
	ptr = vp;

	printf("(ptr) points to the address = %p  <==> (vp) points to the address = %p\n",ptr,vp);

	printf("(ptr) = %d <==> (vp) = %d\n",*ptr,*(int *)vp);

	printf("(ptr) = %c <==> (vp) = %c\n",*ptr,*(char *)vp);

	printf("----------------------------------------\n");

	*ptr = 3;

	printf("(ptr) = %d <==> (vp) = %d\n",*ptr,*(int *)vp);
	
	printf("-------------------------------------------\n");

	int one_d[5] = {12,19,25,34,46} ;

	int i;

	void *vp2 = one_d;

	printf("address of (one_d) = %p <==>  value of (vp2) = %p\n",&one_d,vp2);


	printf("display elements of (one_d) using variable(one_d)\n");
	
	for(int i = 0 ; i < 5 ; i++){
		printf("%d ",one_d[i]);
	}
	printf("\n");

	printf("display elements of (one_d) by dereferencing the void pointer (vp2)\n");

	//pointer arithmetic in void pointer 
	for(int i = 0 ; i < 5 ; i++){
		printf("%d ",*((int *)vp2 + i)); // ((int *)vp2)[i]
	}
	printf("\n");

	printf("-----------------------------------------------\n");

	void *p1;

	int *p2;

	p2 = one_d;

	printf("%d\n",p2[0]);

	p2 = p1;

	printf("(p2) points to the address = %p <==> (p1) points to the address = %p\n",p2,p1);

	//segmentation fault
	//printf("%d\n",p2[0]);
	


}
