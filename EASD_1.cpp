//karena algoritma bisa mempermudah
// static dan dynamic

// selection sort
// quadratic = bubblesort,selectionsort,insertionsort - long linear= quick sort, merge sort


#include <iostream>
using namespace std;

int zayyan[95];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true) {
		cout << "Masukan Panjang Element Array : ";
		cin >> n;

		if (n <= 95)
			break;
		else
			cout << "\n--------------------";
		cout << "\nMAKSIMUM PANJANG ARRAY ADALAH 95";
		cout << "\n-------------------------" << endl;
		cout << endl;
	}

	cout << "============================" << endl;
	cout << "\nMasukan elemnt array" << endl;
	cout << "============================" << endl;

	for (int i = 0;i < n; i++) {
		cout << (i + 1) << "). ";
		cin >> zayyan[i];
	}
}

void swap(int x, int y) {
	int temp;
	temp = zayyan[x];
	zayyan[x] = zayyan[y];
	zayyan[y] = temp;
}
void Algorithm(int low, int high) {
	int pivot, i, zyn;
	if (low > high)
		return;

	pivot = zayyan[low];
	i = low + 1;
	zyn = high;

	while (i <= zyn); {
		while ((zayyan[i] <= pivot) && (i <= high)) {
			i++;
			cmp_count++;
		}
		cmp_count++;
		while ((zayyan[zyn] > pivot) && (zyn >= low)) {
			zyn--;
			cmp_count++;
		}
	}
	cmp_count++;
	if (i < zyn) {
		swap(i, zyn);
		mov_count++;
	}
	if (low < zyn) {
		swap(low, zyn)
			mov_count++;
	}
}
