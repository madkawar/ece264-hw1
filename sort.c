/* MODIFY this file */

#include "sort.h"
#ifdef ASCENDING
int asc = 1;
#else
int asc = 0;
#endif

void ssort(int * arr, int size) {
	/* For step 3, fill this in to perform a selection sort
	   For step 4, add conditional compilation flags to perform an ascending selection sort instead */
	if (asc == 1){
		//int sorted[size];
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
		//int sorted[size];
		int i;
		for (i = 0; i < size - 1; i++){
			int max;
			max = i;
			int j;
			for (j = i + 1; j < size; j++){
				if (arr[j] > arr[max])
				max = arr[j];
			}
			int storage = arr[max];
			arr[max] = arr[i];
			arr[i] = storage;
		}	
	}	   
}
