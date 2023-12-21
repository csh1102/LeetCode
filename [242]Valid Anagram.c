bool isAnagram(char* s, char* t) {
    int ss = strlen(s);
    int st = strlen(t);
    if (s == NULL || t == NULL) {
        return false;
    }
    if (ss != st) {
        return false;
    }
    int table[26] = {0};

    for (int i = 0; i < ss && i < st; i++) {
        table[s[i] - 'a']++;
        table[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (table[i] != 0) {
            return false;
        }
    }
    return true;
}