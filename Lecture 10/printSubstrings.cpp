void printSubstrings(char input[]) {
    int n = strlen(input);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            for (int k = i; k < j; k++) {
                cout << input[k];
            }
            cout << endl;
        }
    }
}
