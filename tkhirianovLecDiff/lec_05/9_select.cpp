// Это моя версия, не из лекций! O(n^2) in worst-case, O(n^2) in best-case.
#include <iostream>


int main()
{
    using namespace std;

    int len = 10;
    int A[len] = {12,4,3,1,15,45,33,21,10,2};

    int k = 0;
    while (k < len-1) {
        int mark = k;
        for (int i = k + 1; i < len; i++) {
            if (A[mark] > A[i]) {
                mark = i;
            }
        }
        int tmp = A[k];
        A[k] = A[mark];
        A[mark] = tmp;
        k++; 
    }

    for (int j = 0; j < len; j++) {
            cout << A[j] << "\t";
    }

    return 0;
}