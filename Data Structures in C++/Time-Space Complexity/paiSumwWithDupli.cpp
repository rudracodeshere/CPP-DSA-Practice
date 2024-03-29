int pairSum(int *arr, int n, int num) {
    sort(arr, arr + n);
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i < j) {
        if (arr[i] + arr[j] < num) {
            i++;
        } else if (arr[i] + arr[j] > num) {
            j--;
        } else {
            if (arr[i] == arr[j]) {
                int numCount = j - i + 1;
                count += (numCount * (numCount - 1)) / 2;
				return count;
            } else {
                int tempL = i + 1;
                int tempR = j - 1;
                while (arr[tempL] == arr[i]) {
                    tempL++;
                }
                while (arr[tempR] == arr[j]) {
                    tempR--;
                }
                count += (((tempL - 1) - i + 1) * (j - (tempR + 1) + 1));
                i = tempL;
                j = tempR;
            }
        }
    }
    return count;
}