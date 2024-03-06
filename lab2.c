#include <stdlib.h>
#include <stdio.h>

int function(int x){
	x=x-2;
    if (x>2 && x<=30)
        x=function(x);
	return x;
}

int main(){
	int a=20, i=0;

	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;
}

