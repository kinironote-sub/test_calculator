#include "stdio.h"
int main(){
	int n,m;
	printf("入力:");
	scanf("%d %d",&n,&m);
	printf("入力した数字は%dと%dです。",n,m);
	
	printf("%d/%dは%fです。",n,m,(double)n/(double)m);
}
