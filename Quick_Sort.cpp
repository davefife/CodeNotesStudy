#include <bits/stdc++.h>
using namespace std;

void quickSort(vector <int> &arr) {
    
//reworking ektong's solution , my solution used 3 inputs, 
//but ektong does it with 1
   // Complete this function
    int size = arr.size();
    if(size < 2){
        return;
        
    }
    
    vector <int> leftvec;
    vector <int> rightvec;
    
    int divider =arr[0];
    
    for(int i =1; i<size; ++i){
        if(arr[i] <= divider){
           leftvec.push_back(arr[i]);
            
            
        }
        
        //interesting don't need two for loops
        else {
            
            rightvec.push_back(arr[i]);
        }
    }
        quickSort(leftvec);
        quickSort(rightvec);
    int index=0;
    
    //leftaray into original array because pass by reference
    for (int l=0;l<leftvec.size();++l){
        //interesting way to populate array remember this trick index++
       //simple but i was insert and push_back;
        arr[index++] = leftvec[l];
        cout << leftvec[l] << " ";
        
    }
    //adding the divider
    arr[index++]=divider;
    cout<<divider<<" ";
    
    //right array
    for(int r=0;r< rightvec.size();++r){
        arr[index++] = rightvec[r];
        cout << rightvec[r] << " ";
        
    }
    
    
   
        cout<< endl;
        


    
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}
