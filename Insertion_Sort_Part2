#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int ar_size, int *  ar) {
//more optimized, part two had different include files and did not allow vectors
//my code worked but this version was elegant on the forum, so I have it here to study


for (int i=1; i < ar_size; i++) {
    int tmp = ar[i];
    int idx = i-1;
    while (idx>=0 && ar[idx] > tmp) {
        ar[idx+1] = ar[idx];
        idx -= 1;
    }
    ar[idx+1] = tmp;
    for (int i=0; i<ar_size; i++)
        cout << ar[i] << " ";
    cout << endl;
}
}

int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}
