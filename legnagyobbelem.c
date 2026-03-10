int legnagyobb_elem(int tomb[], int meret) {
    int max = tomb[0];
    for (int i = 1; i < meret; i++) {
        if (tomb[i] > max) {
            max = tomb[i];
        }
    }
    return max;
}
