#include <stdio.h>


int main(){

	char c = 'M';

	int i = 45;

	float f = 34.67;

	//----------------------------
	
	char *pc = &c;

	int *pi = &i;

	float *pf = &f;

	//-----------------------------
	
	char c1 ='l';

	void *pv = &c1;

	//-----------------------------
	
	printf("address of variable pointed by (pc) = %p <==> address of (c) = %p / value of variable pointed by (pc) = %c\n",pc,&c,*pc); 

	printf("address of variable pointed by (pi) = %p <==> address of (i) = %p / value of variable pointed by (pi) = %d\n",pi,&i,*pi);

	printf("address of variable pointed by (pf) = %p <==> address of (f) = %p / value of variable pointed by (pf) = %.2f\n",pf,&f,*pf);

	printf("---------------------------------------------\n");
	//assign void pointer to any type of pointers
	
	//now pc points to the variable pointed by pv <==> pc and pv point to the same variable
	pc = pv;

	printf("address of variable pointed by (vp) = %p <==> address of (c1) = %p / value of variable pointed by (pv) = %c\n",pv,&c1,*(char *)pv); 


	printf("address of variable pointed by (pc) = %p != address of (c) = %p / value of variable pointed by (pc) = %c\n",pc,&c,*pc); 

	//pf , pc , pv point to the same variable c1
	pf = pv;

	printf("address of variable pointed by (pf) = %p != address of (f) = %p / value of variable pointed by (pf) = %c\n",pf,&f,*(char *)pf);//if we don't cast pf we get a warning , but the resut is what we expect 

	pi = pv;

	printf("address of variable pointed by (pi) = %p != address of (i) = %p / value of variable pointed by (pi) = %c\n",pi,&i,*pi);


}
