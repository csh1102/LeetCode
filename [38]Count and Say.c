char* countAndSay(int n) {
    if(n == 1) {
        return "1";
    }
    if(n == 2) {
        return "11";
    }
    char* prev = countAndSay(n - 1);
    int prevLen = strlen(prev);
    int count = 1;
    int resIndex = 0;
    char* res = (char *)malloc(sizeof(char) * (prevLen *10));
    char prevChar = prev[0];
    for(int i = 1; i < prevLen; i++) {
        if(prev[i] == prevChar) {
            count++;
        } else{
            res[resIndex++] = count + '0';
            res[resIndex++] = prevChar;
            prevChar = prev[i];
            count = 1;
        }
    }
    res[resIndex++] = count + '0';
    res[resIndex++] = prevChar;
    res[resIndex] = '\0';
    return res;
}