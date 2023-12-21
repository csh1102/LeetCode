int getBits(int x) {
    int count = 0;
    while (x > 0) {
        count++;
        x /= 10;
    }
    return count;
}
int getBit(int x, int index) {
    return ((int)(x / pow(10, index))) % 10;
}
bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    if (x < 10) {
        return true;
    }
    int pos = 0;
    int len = getBits(x);

    while (pos < len / 2) {
        int left = getBit(x, len-pos-1);
        int right = getBit(x,pos++);
        if (left != right) {
            return false;
        }
    }
    return true;
}