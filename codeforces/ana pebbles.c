
#include <stdio.h>
int main()
{
	int k,n,w,i,x,t=0;
	scanf("%d %d %d",&k, &n,&w);
	for(i=1;i<=w;i++) t=t+k*i;
	x=t-n;
	if(x<0) printf("0");
	else printf("%d",x);
	return 0;
}


