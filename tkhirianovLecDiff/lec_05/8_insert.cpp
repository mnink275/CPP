// Это моя версия, не из лекций! O(n^2) in worst-case, O(n) in best-case.
#include <iostream>


int main()
{
    using namespace std;

    int len = 10;
    int A[len] = {12,4,3,1,15,45,33,21,10,2};

    int k = 1;
    while (k < len) {
        int key = A[k];
        int i = k - 1;
        while (i > -1 && key < A[i]) {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = key;
    k++; 
    }

    for (int j = 0; j < 10; j++) {
            cout << A[j] << "\t";
    }

    return 0;
}