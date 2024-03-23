double geometricSum(int k) {
    if(k == 0){
        return 1;
    }
    int a = 1;
    for(int i = 0; i < k; i++){
        a *= 2;
    }
    return (1.0/a) + geometricSum(k-1);
}
