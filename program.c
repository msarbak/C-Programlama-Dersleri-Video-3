#include "stdio.h"
#include "conio.h"



int main(){
	
	float a = 10 , b = 3;
	double x =10 , y = 3;
	float d = a / b;
	double z = x / y;
	
	if(d == z) printf("esit");
	else printf("esit degil");
	
	printf("\n\nfloat sonuc:  %.14f\n",d);
	printf("double sonuc: %.14lf\n",z);
	
	int g = 100;
	printf("\n%d\n",sizeof g);
	g= 10000;
	printf("\n%d\n",sizeof g);
	
	float h = 100;
	printf("\n%d\n",sizeof h);
	h= 10000;
	printf("\n%d\n",sizeof h);
	
	double pi = 3.14;
	int n = pi;
	printf("\n%d",n);
	
	const double p;
	printf("\ng: ");
	scanf("%lf",&p);
	printf("%lf\n",p);
	
	printf("\ng: ");
	scanf("%lf",&p);
	printf("%.15lf\n",p);
	
	return 0;
}