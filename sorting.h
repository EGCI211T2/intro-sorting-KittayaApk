#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &a, int &b);
void bubblesort(int *a, int N);
void selectionsort(int *a, int N);
void display(int *a, int N);

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void display(int *a, int N) {
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubblesort(int *a, int N) {
    int i, j;
    int sorted;
    for (i = 0; i < N - 1; i++) {
        sorted = 0;
        for (j = 0; j < N - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                sorted = 1;
                display(a, N);
            }
        }
        if (sorted == 0) break;
    }
}
void selectionsort(int *a, int N) {
    int *p;
    int i, j;

    for (j = 0; j < N - 1; j++) {
        p = &a[j];

        for (i = j + 1; i < N; i++) {
            if (*p > a[i]) {
                p = &a[i];
            }
        }

        swap(a[j], *p);
    
    }
}
