/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int maximum(int* arr, int n){
    int max = arr[0];
    for(int i=1 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* ans = (bool*)malloc(sizeof(bool)*candiesSize);
    int max = maximum(candies, candiesSize);
    *returnSize = candiesSize;
    for(int i=0 ; i<candiesSize ; i++){
        if(candies[i] + extraCandies >= max){
            ans[i]=true;
        }else{
            ans[i]=false;
        }
    }
    return ans;
}
