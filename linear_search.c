#include <stdio.h>

int LinearSearch(int numbers[], int n, int goal){
	
	for(int i=0; i<n; i++){
		if(numbers[i]==goal){
			return i;
		}
	}
	return -1;
}



int main(){
	int numbers[] = {34, 1, 98, 2, -1, 7};
	int n = sizeof(numbers);
	int X = 12; 
	int Y = 2;
	printf("%i\n", LinearSearch(numbers, n, X));
	printf("%i\n", LinearSearch(numbers, n, Y));
}