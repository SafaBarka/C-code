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
}
