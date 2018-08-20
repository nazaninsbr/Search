#include <stdio.h>

int JumpSearch(int numbers[], int arraySize, int jumpSize, int goal){
	int i = 0; 
	while(jumpSize*i < arraySize){
		if(jumpSize*(i+1) < arraySize){
			if(numbers[jumpSize*i]<goal && numbers[jumpSize*(i+1)]>goal){
				for(int j=i; j<=jumpSize*(i+1); j++){
					if(numbers[j]==goal)
						return j;
				}
			} else {
				i++;
			}
		} else {
			for(int j=i; j<arraySize; j++){
				if(numbers[j]==goal)
					return j;
			}
			i = arraySize;
		}
	}
	return -1;
}



int main(){
	int numbers[] = {-1, 1, 2, 7, 12, 23, 25, 30, 34, 60, 63, 65, 71, 77, 90, 98};
	int arraySize = sizeof(numbers);
	int jumpSize = arraySize/6;

	int X = 12; 
	int Y = 63;
	int Z = 120; 

	printf("%i\n", JumpSearch(numbers, arraySize, jumpSize, X));
	printf("%i\n", JumpSearch(numbers, arraySize, jumpSize, Y));
	printf("%i\n", JumpSearch(numbers, arraySize, jumpSize, Z));
}