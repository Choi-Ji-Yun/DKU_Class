#include<stdio.h>
#include<stdlib.h>
#include <sys/time.h>

// ����� ��ġ�� ���� �ٲ��ִ� swap �Լ�
int swap(int* arr, int l, int r) {
	int temp = arr[l];
	arr[l] = arr[r];
	arr[r] = temp;
}

// ���ҵ� �������� ����Ű (pivot)�� �������� ��ġ�� �����ϴ� partition �Լ�
int partition(int arr[], int l, int r) {
	int pivot = arr[l]; 

	while (l <= r) {
		while (arr[l] < pivot) l++;
		while (arr[r] > pivot) r--;

		if (l <= r) {
			swap(arr, l, r);
			l++; r--;
		}
	}
	
	return l;
}

// �� ���� �Լ�
void quick_sort(int* arr, int l, int r) {
	if (l < r) {
		int p = partition(arr, l, r);

		quick_sort(arr, l, p - 1);
		quick_sort(arr, p, r);
	}
}

// pivot�� �����ϰ� ������ �� ���� �Լ�
void quick_sort_random(int *arr, int l, int r) {
	
	int pivot = rand() % (r + 1 - l) + l;
	swap(arr, l, pivot);
	
	if (l < r) {
		int p = partition(arr, l, r);

		quick_sort_random(arr, l, p - 1);
		quick_sort_random(arr, p, r);
	}
}

// ����, ������, ��� �� �� �߰�ũ���� ���� ���� choose �Լ�
int choose(int a, int b, int c) {
	if (a >= b) {
		if (b >= c) return b;
		else if (a <= c) return a;
		else return c;
	}
	else if (a >= c) return a;
	else if (b >= c) return c;
	else return b;
}

// �߰� ���� pivot���� ������ �� ���� �Լ�
void quick_sort_median(int* arr, int l, int r) {

	int mid= choose(arr[l], arr[(l+r)/2], arr[r]);
	if (mid == arr[(l + r) / 2]) swap(arr, (l + r) / 2, l);
	else if (mid == arr[r]) swap(arr, r, l);
	if (l < r) {
		int p = partition(arr, l, r);
		quick_sort_median(arr, l, p - 1);
		quick_sort_median(arr, p, r);
	}
}

// ���� ���� 
void insertion_sort(int* arr, int size) {
	int i;
	for (i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;
		for (; key < arr[j] && j >= 0; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
}

int main() {
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;
	struct timeval stime, etime, gap;
	gettimeofday(&stime, null);
	quick_sort_median(arr, 0, size - 1);
	gettimeofday(&etime, null);
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	gap.tv_sec = etime.tv_sec - stime.tv_sec;
	gap.tv_usec = etime.tv_usec - stime.tv_usec;
	printf("\nelapsed time %ldsec : %ldusec\n", gap.tv_sec, gap.tv_usec);
	return 0;
}