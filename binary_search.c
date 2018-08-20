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



int main(){
	int numbers[] = {-1, 1, 2, 7, 34, 98};
	int n = sizeof(numbers);
	int X = 12; 
	int Y = 2;
	printf("%i\n", BinarySearch(numbers, 0, n-1, Y));
	printf("%i\n", BinarySearch(numbers, 0, n-1, X));
}