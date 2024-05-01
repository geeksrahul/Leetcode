char* mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int i,j,k;
    char* word3 = (char*)malloc(sizeof(char)*(len1+len2+1));
    i = j = k = 0;
    while(i<len1 && j<len2){
        word3[k++] = word1[i++];
        word3[k++] = word2[j++];
    }
    while(i<len1){
        word3[k++] = word1[i++];
    }
    while(j<len2){
        word3[k++] = word2[j++];
    }
    word3[k]='\0';
    return word3;
}
