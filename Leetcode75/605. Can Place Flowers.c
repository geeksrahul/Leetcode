bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {    
    int i=0;
    if(n==0){
        return true;
    }
    if(flowerbedSize == 1){
        if(flowerbed[i] == 1 && n==1){
            return false;
        }else{
            return true;
        }
    }
    if(flowerbed[i]==0 && flowerbed[i+1]==0){
        flowerbed[i]=0;
        n--;
    }
    i+=2;
    while(i<flowerbedSize-1 && n!=0){
        if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
            flowerbed[i]=1;
            n--;
        }
        i++;
    }
    if(n!=0 && i<flowerbedSize && flowerbed[i-1]==0 && flowerbed[i]==0){
        n--;
    }
    printf("%d",i);
    return n==0 ? true : false ;
}
