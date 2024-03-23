int binarySearchHelper(int input[], int si, int ei, int x){
if(si>ei){
    return -1;
}

int mid = (si+ei)/2;
if(input[mid]==x){
    return mid;
}
else if(input[mid]<x){
    return binarySearchHelper(input, mid+1, ei, x);
}
else{
return binarySearchHelper(input, si , mid-1, x);
}
}
int binarySearch(int input[], int size, int element) {
    int si = 0;
    int ei = size-1;
    return binarySearchHelper(input, si, ei, element);
}
