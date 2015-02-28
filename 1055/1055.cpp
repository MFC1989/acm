// 1055.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

# include<stdio.h>
# include<stdlib.h>
int main(){
	int n;int i;int flag=0; int k; 
	scanf("%d",&n);

	if(n>500){exit(0);}
	int a[500]={0x00};
	for(k=0;k<n;k++){
		scanf("%d",&a[k]);

	}


	for(k=0;k<n;k++){
		if(a[k]<=10000000){
			for( ;;){
				if(a[k]%2!=0){ a[k]=(3*a[k]+1);flag++;}
				if(a[k]%2==0){a[k]=a[k]/2; flag++;}
				if(a[k]==1)break;
			}

			if(flag%2!=0)
			{printf("I win!\n"); flag=0;}
			else{printf("I lost!\n");flag=0;}
		}

	}
}