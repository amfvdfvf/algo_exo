#include <stdio.h>

int main(void) {
    int tab[6] = {31, 41, 59, 26, 41, 58};
    int size = sizeof(tab) / sizeof(tab[0]);
    int j;

    for (int i = 0; i < size; i++){
        int smallest = i;
        for (j = i+1; j < size; j++){
            if (tab[j]<tab[smallest])
                smallest = j;
        }
        int temp = tab[i];
        tab[i] = tab[smallest];
        tab[smallest] = temp;
    }
    for (int i = 0; i < size; i++){
        printf("%d,", tab[i]);

    }

    return 0;
}
