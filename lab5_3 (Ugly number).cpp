#include <stdio.h>
#include <stdlib.h>

int mod(int a,int b){
	while(a%b==0){
		a=a/b;	
	}
	return a;
}
int ugly(int x){
	x=mod(x,2);
	x=mod(x,3);
	x=mod(x,5);
	if(x==1){
		return 1;
	}else{
		return 0;
	}
}
int countugly(int n){
	int i=1,c=1;
	while(n>c){
		i++;
		if((ugly(i))){
			c++;
		}
	}
	return i;
}
int main(){
	int num;
	scanf("%d",&num);
	int x=countugly(num);
	printf("%d",x);
	
	return 0;
}
