#include <stdio.h>

void printnum(int num[]) {
    for (int i = 0; i < 10; ++i) {
        printf("%d\t", num[i]);
    }
    printf("\n");
}

int partition(int r[], int low, int high) {
    //int tmp = r[(sizeof(r) / sizeof(int)) / 2];
    int tmp = r[low];
    while (low < high) {
        while (low < high && r[high] >= tmp) {
            high--;
        }
        if (low < high) {
            r[low] = r[high];
            low++;
        }
        while (low < high && r[low] < tmp) {
            low++;
        }
        if (low < high) {
            r[high] = r[low];
            high--;
        }
    }
    r[low] = tmp;
    
    return low;
}

void Quick_sort(int r[], int s, int t) {
    if (s < t) {
        int i = partition(r, s, t);
        Quick_sort(r, s, i - 1);
        Quick_sort(r, i + 1, t);
    }
}

int main() {
    int num[10] = {0};
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &num[i]);
    }
    Quick_sort(num, 0, 9);
    printnum(num);
    return 0;
}
