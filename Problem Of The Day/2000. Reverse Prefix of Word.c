// date : 1 may 2024
void reverse(char* str,int low,int high){
    char temp;
    while(low<high){
        temp = str[low];
        str[low] = str[high];
        str[high] = temp;
        low++;
        high--;
    }
}
char* reversePrefix(char* word, char ch) {
    int i=0;
    while(word[i]!=NULL){
        if(word[i] == ch){
            reverse(word,0,i);
            break;
        }
        i++;
    }
    return word;
}
