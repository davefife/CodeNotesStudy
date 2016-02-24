#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
  I finally figured it out. The order of the output is the order of the nodes, by number, 1-N, omitting the starting node (distance 0). So the example has 4 nodes, 2 edges: (2 1), (3 1), starting node is 1. The order of the result is then (omitting node 1) node 2=6, node 3=6, node 4=-1.

*/

struct node
{
    int data;
    node* left;
    node* right;
};

vector<int> xholder;
vector<int> yholder;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tc;
    cin>>tc;
    cout<<tc;
    
    int numN;
    
    int numE;
    
    int x;
    int y;
    
    node *start = new node;
    
    for(int j=0;j<tc;j++){
    
    
        cin>>numN;
    

        cin>>numE;
    
  
    
        for(int i=0;i<numE;i++)
        {   
            node *x = new node;
            node *y = new node;
            cin>>x->data;
            cin>>y->data;
            
            *x->right=*y;
            *y->left=*x;
            
            
           xholder.push_back(i);
           yholder.push_back(i);
           xholder[i]=x->data;
           yholder[i]=y->data;
        
        
        }
        cin>>start->data;
        cout<<start->data;
        
        
        
        
        
        
        
       
            
    }
    
    
    
    
    return 0;
}
