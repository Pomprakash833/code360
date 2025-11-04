


int binarysearch(const vector<int>& arr, int k, int s, int e) {
    int start = s;
    int end = e;
    while (start <= end) {
        // Correct way to calculate mid to prevent overflow
        int mid = start + (end - start) / 2;

        if (arr[mid] == k) {
            return mid;
        } else if (k > arr[mid]) {
            start = mid + 1;
        } else { // k < arr[mid]
            end = mid - 1;
        }
    }
    return -1; // Element not found
}
int findPivot(const vector<int>& arr, int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0]) { 
            s = mid + 1;
        }
        else { 
            e = mid;
        }
    }
    return s;
}
int search(const vector<int>& arr, int n, int k) {
    int pivotIndex = findPivot(arr, n);
    if (k >= arr[pivotIndex] && k <= arr[n - 1]) {
        return binarysearch(arr, k, pivotIndex, n - 1);
    } 
    else {
        return binarysearch(arr, k, 0, pivotIndex - 1);
    }
}
