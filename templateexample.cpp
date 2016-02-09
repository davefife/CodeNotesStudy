/*Write the class AddElements here*/
template <class Toots>
    class AddElements {
    
    Toots element;
    int c;
    public:
    AddElements(Toots argument ){
        
        element = argument;
        
        
        
    }
    
    Toots add(Toots g){
       
        return element+g;
    }
    
};

//specialized template for a string type

template <>
    class AddElements <string>{
       string thingy;
    
    public:
    
    AddElements(string bean){thingy=bean;}
    string concatenate(string cheese){return thingy+cheese;}
        
    
    
};
