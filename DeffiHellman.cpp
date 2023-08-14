#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int a,q,xa,xb,ya,yb,x,y,ka,kb,m,n;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of q:");
	scanf("%d",&q);
	printf("enter the value of Xa:");
	scanf("%d",&xa);
	printf("enter the value of Xb:");
	scanf("%d",&xb);
	x=pow(a,xa);
	ya=x%q;
	printf("value of Ya: %d",ya);
	y=pow(a,xb);
	yb=y%q;
	printf("\nvalue of Yb: %d",yb);
	m=pow(yb,xa);
	ka=m%q;
	printf("\nvalue of Ka: %d",ka);
	n=pow(ya,xb);
	kb=n%q;
	printf("\nvalue of Kb: %d",kb);
}
