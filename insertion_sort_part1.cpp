#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
//needs some cleanup, that last forloop a bit awkward and i-2 bit. it does pass all of the test cases however.

    vector <int> array = ar;
    int j;
    int itemToInsert;
    
    
    for(int i=0;i<array.size();i++){
        itemToInsert=array[i];
        while(array[i]<array[i-1]){
           
            array[i]=array[i-1];
            i--;
       if(i!=-2){
            for(int i=0;i<array.size();i++){
        cout<<array[i]<<' ';
        };
        cout<<endl;
        }
        
         if(itemToInsert<=array[i] ){
             
             array[i]=itemToInsert;
             i--;
         }
          
    }
        itemToInsert=array[i];
        
        
    };
         for(int i=0;i<array.size();i++){
        cout<<array[i]<<' ';
        };
        cout<<endl;
        

}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

insertionSort(_ar);
   
   return 0;
}
