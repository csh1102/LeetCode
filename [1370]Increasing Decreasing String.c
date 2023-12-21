char* sortString(char* s) {
    if(s == NULL)
        return NULL;
    int count[26] = {0};
    int size = 0;
    int index = 0;
    int ind = 0;
    int flag = 0;
    while(*s != '\0'){
        count[*s - 'a']++;
        s++;
        size++;
    }
    char *res = (char *)malloc(sizeof(char) * size + 1);
    while(index < size){
        if(!flag){
            for(ind = 0; ind < 26; ind++)
                if(count[ind]){
                    res[index++] = ind + 'a';
                    count[ind]--;
                }
        } else{
            for(ind = 25; ind >= 0; ind--)
                if(count[ind]){
                    res[index++] = ind + 'a';
                    count[ind]--;
                }
        }
        flag = !flag;
    }
    res[index] = '\0';
    return res;
}