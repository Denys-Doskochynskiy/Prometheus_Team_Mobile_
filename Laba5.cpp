
void merge(int start, int mid, int end) {
		int temp[5];
		int i = start, j = mid + 1, k = 0;

		while (i <= mid && j <= end) {
			if (this->A[i] >= this->A[j]) {
				temp[k] = this->A[i];
				k += 1; i += 1;
			}
			else {
				temp[k] = this->A[j];
				k += 1; j += 1;
			}
		}

		while (i <= mid) {
			temp[k] = this->A[i];
			k += 1; i += 1;
		}

		while (j <= end) {
			temp[k] = this->A[j];
			k += 1; j += 1;
		}

		// copy temp to original interval
		for (i = start; i <= end; i += 1) {
			this->A[i] = temp[i - start];
		}
	}

	void mergeSort(int start, int end) {

		if (start < end) {
			int mid = (start + end) / 2;
			mergeSort(start, mid);
			mergeSort(mid + 1, end);
			merge(start, mid, end);
		}

	}
};
