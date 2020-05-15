// Find the nth-largest number
#include <iostream>
using namespace std;

int partition(int a[], int st, int en) {
	int i = st-1;
	int pivot = a[en];
	int temp;
	for(int j = st ; j < en; j++) {
		if(a[j] < pivot) {
			i++;
			//Swap
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	i++;
	//Swap
	a[en] = a[i];
	a[i] = pivot;
	return i;
}

void quickSort(int a[],int st,int en, int index) {
	
	if(st < en) {
		int pos = partition(a, st, en);
		if(pos == index)
			return;
		else if(index < pos)
			quickSort(a, st, pos - 1, index);
		else
			quickSort(a, pos+1, en, index);
	}	
}

int main() {
	// your code goes here
	int a[] = {6, 8, 5, 7, 2, 1, 3, 4};
	int size = sizeof(a)/sizeof(a[0]);
	quickSort(a, 0, size - 1, 6);
	cout << a[6] << endl;
	return 0;
}