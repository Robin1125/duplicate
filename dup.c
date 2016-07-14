#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int n,i,j,c=0,pos;
	scanf("%d",&n);
	
	int *t= malloc(n*sizeof(int));
	int *a= malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		scanf("%d",&t[i]);
		a[i]=t[i];
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i] == a[j]){
				pos=i;
				a[j]=999999999;
			}
		}
		if(a[pos] == a[i] && a[pos] != 999999999)
			printf("%d ",a[i]);
	}
	
	
		
	return 0;
}
