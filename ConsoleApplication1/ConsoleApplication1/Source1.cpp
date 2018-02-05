#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>

int getNumb(int* number){
	int n = *number % 10;
	*number /= 10;
	return n;
}

void main(){
	int a, b, c;
	int set[10] = { 0 };
	scanf("%d %d %d", &a, &b, &c);
	int	number = a*b*c;

	while (number!=0){

		set[getNumb(&number)]++;

	}


	for (int i = 0; i < 10; i++){
		printf("%d %d\n", i, set[i]);
	}

}