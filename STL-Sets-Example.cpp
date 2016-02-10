#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int y;
    cin>>y;
    set<int>st;
    
    int query;
    int x;
    
    
    for(int i=0;i<y;i++){
        
        cin>>query;
        cin>>x;
        
        if(query==1){st.insert(x);}
       
        else if(query==2){
            
            set<int>::iterator itr=st.find(x); 
            //Gives the iterator to the element val if it is found otherwise returns s.end() .

            if (itr==st.end()) { }
            
            else{ st.erase(x);}
        
        }
       
            
            else if(query==3){
                
                set<int>::iterator itr=st.find(x); 
                
                if (itr==st.end()){cout<<"No"<<endl;}
                
                else{ cout<<"Yes"<<endl;}
                
                
                
            }
        
        
    }
    
    return 0;
}
