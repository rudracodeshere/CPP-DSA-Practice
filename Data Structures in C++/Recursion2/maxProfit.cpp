int maximumProfit(int budget[], int n) {

    int count[10000] = {0};
    for (int i = 0; i < n; ++i) {
        count[budget[i]]++;
    }
    for (int i = 9999; i >= 1; --i) {
        count[i - 1] += count[i];
    }
    int maxProfit = 0;
    for (int x = 1; x <= 9999; ++x) {
        int profit = count[x] * x;
        maxProfit = max(maxProfit, profit);
    }
    return maxProfit;
}