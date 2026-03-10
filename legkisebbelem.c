int legkisebb_elem(int tomb[], int meret) {
    int min = tomb[0];
    for (int i = 1; i < meret; i++) {
        if (tomb[i] < min) {
            min = tomb[i];
        }
    }
    return min;
}