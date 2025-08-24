/*You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now the array is rotated at some pivot point unknown to you.*/
int search(vector<int>& arr, int n, int k) {
    int i = 0, j = n - 1;

    while (i <= j) {
        int mid = i + (j - i) / 2;

        if (arr[mid] == k) return mid;

        // Check if left half is sorted
        if (arr[i] <= arr[mid]) {
            if (k >= arr[i] && k < arr[mid]) {
                j = mid - 1; // search left
            } else {
                i = mid + 1; // search right
            }
        }
        // Right half is sorted
        else {
            if (k > arr[mid] && k <= arr[j]) {
                i = mid + 1; // search right
            } else {
                j = mid - 1; // search left
            }
        }
    }

    return -1;
}