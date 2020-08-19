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

	printf("-------------------------------------------\n");


	char *pc1 = &c;

	int *pi1 = &i;

	float *pf1 = &f;
	
	//---------------------------------------------
	
	printf("address of variable pointed by (pc1) = %p <==> address of (c) = %p / value of variable pointed by (pc1) = %c\n",pc1,&c,*pc1);

	printf("address of variable pointed by (pi1) = %p <==> address of (i) = %p / value of variable pointed by (pi1) = %d\n",pi1,&i,*pi1);

	printf("address of variable pointed by (pf1) = %p <==> address of (f) = %p / value of variable pointed by (pf1) = %.2f\n",pf1,&f,*pf1);

	printf("-------------------------------------------\n");

	//assign any type of pointer to a void pointer 
	
	char ch = 'd';

	void *pv1 = &ch;

	printf("address of variable pointed by (pv1) = %p <==> address of (ch) = %p / value of variable pointed by (pv1) = %c\n",pv1,&ch,*(char *)pv1); 


	printf("-------------------------------------------\n");
	
	//void points (pv1) points to the same variable pointed by pc1
	pv1 = pc1 ;

	printf("address of variable pointed by (pc1) = %p <==> address of (c) = %p / value of variable pointed by (pc1) = %c\n",pc1,&c,*pc1);

	printf("address of variable pointed by (pv1) = %p != address of (ch) = %p / value of variable pointed by (pv1) = %c\n",pv1,&ch,*(char *)pv1); 

	printf("---------------------------------------------\n");

	//(pv1) points to the variable pointed by pi1
	pv1 = pi1;

	printf("address of variable pointed by (pi1) = %p <==> address of (i) = %p / value of variable pointed by (pi1) = %d\n",pi1,&i,*pi1);

	printf("address of variable pointed by (pv1) = %p != address of (ch) = %p / value of variable pointed by (pv1) = %d\n",pv1,&ch,*(int *)pv1); 


	printf("---------------------------------------------\n");

	//(pv1) points to the same variable as (pf1)
	pv1 = pf1;

	printf("address of variable pointed by (pf1) = %p <==> address of (f) = %p / value of variable pointed by (pf1) = %.2f\n",pf1,&f,*pf1);

	printf("address of variable pointed by (pv1) = %p != address of (ch) = %p / value of variable pointed by (pv1) = %.2f\n",pv1,&ch,*(float *)pv1); 
}
