#include <stdio.h>

int InterpolationSearch(int numbers[], int arraySize, int goal){
	int lo = 0;
	int hi = (arraySize - 1);

	while(goal<=numbers[hi] && goal>=numbers[lo] && lo<=hi){
		int pos = lo + ( ( (double)(hi-lo) /(numbers[hi]-numbers[lo])) * (goal - numbers[lo]));
		if(numbers[pos]==goal)
			return pos;
		else if(numbers[pos]>goal)
			hi = pos -1;
		else
			lo = pos + 1;
	}
	return -1;
}


int main(){
	int numbers[] = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
	int arraySize = sizeof(numbers);

	int X = 12; 
	int Y = 18;
	int Z = 120;
	int W = -12;  

	printf("%i\n", InterpolationSearch(numbers, arraySize, X));
	printf("%i\n", InterpolationSearch(numbers, arraySize, Y));
	printf("%i\n", InterpolationSearch(numbers, arraySize, Z));
	printf("%i\n", InterpolationSearch(numbers, arraySize, W));
}