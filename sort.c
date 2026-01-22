/* MODIFY this file */

#include "sort.h"
//step 4 preprocessor directives
#ifdef ASCENDING
//asc acts as boolean value representing is ascending true or false 
int asc = 1;
#else
int asc = 0;
#endif

void ssort(int * arr, int size) {
	/* For step 3, fill this in to perform a selection sort
	   For step 4, add conditional compilation flags to perform an ascending selection sort instead */
	//if statement implements step 4
	if (asc == 1){
		//step 3 - selection sort ascending
		int i;
		for (i = 0; i < size - 1; i++){
			int min;
			min = i;
			int j;
			for (j = min + 1; j < size; j++){
				if (arr[j] < arr[min])
				min = j;
			}
			int storage =arr[min];
			arr[min] = arr[i];
			arr[i] = storage;
		}
	}
	else{
		//step 3 - selection sort descending
		int i;
		for (i = 0; i < size - 1; i++){
			int max;
			max = i;
			int j;
			for (j = max + 1; j < size; j++){
				if (arr[j] > arr[max])
				max = j;
			}
			int storage = arr[max];
			arr[max] = arr[i];
			arr[i] = storage;
		}	
	}	   
}
