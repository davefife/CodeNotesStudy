
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int T;
    cin>>T;
    int num;
    
    
    for(int f=0;f<T;f++){
        cin>>num;
        
        vector<int> factorals;
        
        while(num % 2==0){
            factorals.push_back(2);
            num = num / 2;
            
        }
        
        int i = 3;
        int maxfact = sqrt(num);
        
        while (i<=maxfact){
            while (num % i == 0){
                
                factorals.push_back(i);
                
                num = num/i;
                
                maxfact = sqrt(num);
                
                
            }
            
            i=i+2;
            
        }
        if(num > 1){factorals.push_back(num);}
        
            int thingy=factorals[0];
            
            
            for(int e=0;e<factorals.size();e++){
                if(factorals[e]>thingy){thingy=factorals[e];}
            //cout<<factorals[e]<<endl;
            }
        cout<<thingy<<endl;
    }
    
  return 0;
}
