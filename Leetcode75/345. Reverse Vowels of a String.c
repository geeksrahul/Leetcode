bool isNotVowel(char c){
    switch(c){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': return false;
    }
    return true;
}
char* reverseVowels(char* s) {
    int low = 0;
    int high = strlen(s) - 1;
    char temp;
    while(low <= high){
        while(isNotVowel(s[low]) && low < high){
            low++;
        }
        while(isnotvowel(s[high]) && low < high){
            high--;
        }
        temp = s[low];
        s[low] = s[high];
        s[high] = temp;
        low++;
        high--;
    }
    return s;
}
