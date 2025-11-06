int search(string &pat, string &txt) {
    int strLength = txt.size();
    int windowLength = pat.size();

    if (windowLength > strLength) return 0; // quick guard

    // frequency map for pattern
    array<int, 26> patFreq = {0};
    for (char c : pat) patFreq[c - 'a']++;

    // frequency map for current window in text (first window)
    array<int, 26> winFreq = {0};
    for (int i = 0; i < windowLength; i++) winFreq[txt[i] - 'a']++;

    int cnt = 0;
    if (winFreq == patFreq) cnt++; // check the first window

    // slide the window: new char index i, old char index i - windowLength
    for (int i = windowLength; i < strLength; i++) {
        char newChar = txt[i];
        char oldChar = txt[i - windowLength];

        // remove old char
        winFreq[oldChar - 'a']--;
        // add new char
        winFreq[newChar - 'a']++;

        if (winFreq == patFreq) cnt++;
    }

    return cnt;
}
