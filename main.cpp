#include <iostream>
#include <cstdlib>
#include "sorting.h"

using namespace std;

int main(int argc, char * argv[]) {
    int i, N;
    int *a;

  
    if (argc > 1) {
        cout << "argc is " << argc << endl;
        N = argc - 1;
        a = new int[N];

        for (i = 1; i < argc; i++) {
            cout << "argv[" << i << "] " << argv[i] << endl;
            a[i - 1] = atoi(argv[i]);
        }
    }
    
    else {
        cout << "How many numbers? ";
        cin >> N;

        a = new int[N];
        cout << "Enter numbers: ";
        for (i = 0; i < N; i++) {
            cin >> a[i];
        }
    }

    cout << "Before sorting: ";
    display(a, N);

    sort(a, N);

    cout << "After sorting: ";
    display(a, N);

    delete[] a;
    return 0;
}
