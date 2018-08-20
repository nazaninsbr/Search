#include <stdio.h>

int BinarySearch(int numbers[], int start, int end, int goal){
	int mid = start+ (end-start)/2;
	if (end >= start){
		if(numbers[mid]==goal)
			return mid;
		else if(numbers[mid]>goal)
			return BinarySearch(numbers, start, mid-1, goal);
		else
			return BinarySearch(numbers, mid+1, end, goal);
	}
	return -1;
}


int ExponentialSearch(int numbers[], int arraySize, int goal){
	int i = 1;

	while(i<arraySize && goal>=numbers[0] && goal<=numbers[-1]){
		if(numbers[i]==goal)
			return i;
		if(numbers[i]<goal)
			i = i*2;
		if(numbers[i]>goal){
			return BinarySearch(numbers, i/2, i, goal);
		}
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

	printf("%i\n", ExponentialSearch(numbers, arraySize, X));
	printf("%i\n", ExponentialSearch(numbers, arraySize, Y));
	printf("%i\n", ExponentialSearch(numbers, arraySize, Z));
	printf("%i\n", ExponentialSearch(numbers, arraySize, W));
}