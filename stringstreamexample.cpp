#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    
    string stringy=str;
    vector<int> vec;
    stringstream stst(stringy);
    int f;
    char comma;
    
    while(stst>>f){
        
            
        stst>>comma;
        vec.push_back(f);
        
        
   
}
    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
