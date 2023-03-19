// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int left = 0;
	int s = 0;
	int s1 = 0;
	int cnt = 1;
	int right = size-1;
	int mid = right / 2;
	while (right >= left) {
		if (value == arr[mid]) {
			s = mid;
			s1 = mid;
			while (value == arr[s - 1]){
				cnt++;
				s--;
			}
			while (value == arr[s1 + 1]){
				cnt++;
				s1++;
			}
			return cnt;
		}
		if (value > arr[mid]) {
			left = mid + 1;
			mid = (right + left) / 2;
		}
		if (value < arr[mid]) {
			right = mid - 1;
			mid = (right + left) / 2;
		}
	}
  return 0;
}
