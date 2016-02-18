
////////////////////////////////////
//pointers
int a;
int *p;
p= &a;  //ampersand is at the memory location
a=5;
print p;  //204   //address of p assigned to &a
print &a; //204  //address of a
print &p ; //64  //the address of p not the value it holds

print *p  //5 gives value at location it points to call dereference
*p=8      
print a; // 8 *p is also the address a

////
char c;
char *px;  //can also point to custom made Datatypes (classes)

//if
int a=49;  //prefer two seperate init with assign for less confusion
int b=32;
int *p=&a;
//then
*p = b;  //this does not dereference it only assigns value of b to a
*p=&b;   //this assigns value of *p to b

void *p;  //can give memory address but canot give value a it 

//pointer arithmetic
p+1; //will not add by one but add by 4  or the size of a byte or the datatype

*p+1; // deref gives garbage number because integer is not allocated to memory address

//we also use pointer variables to dereference for
// Access and Modify value

int **q; //can store adrres ofp type int** POINTER to POINTer
q=&p;
int ***r;// Pointer to pointer to pointer must store a **

r=&q;
//can use *(*p) to help follow


// pointers allow return of values in local scope to other scopes
// pass address as argument and pointer as parameter

void doThing(*p){
*p =(*p)+3;
}

doThing(&a);


//
int A[]={2,4,5,8,1};
printf("%d\n",A);    //2984736  loction in mem
printf("%d\n",&A[0]); //2984736  location in mem
printf("%d\n",A[0]); //2
printf("%d\n",*A);   //2



// this below shows compiler just carries 4 bytes or size of pointer not the whole size of array as argument
int sumOfElements(int A[]){  //compiler sees int* A call by reference st also pass size of array
    int i, sum =0;
    int size = sizeOf(A)/sizeOf(A[0]);  //put this in main method and pass to eumOfElements instead, as another parameter
    for(i=0;i< size;i++ {
       sum+=A[i];
    }
    return sum;
}
                             

int main(){
    int A[]={1,2,3,4,5};
    int total = sumOfElements(A);
 
    int total = sumOfElments(A,size);
}

//////////////////////////////////////////////////////


"John" //this string is a char array of size 5 *byte size because the final is NULL char or '\0'value of zero. however if length funct it will show only 4


//arrays only passed to functions by reference Starting addres, compiler does not allow passing full array.


//to use multiarray its datatype for deref so

int (*p)[3] =b;

//dynamic memory review

malloc
calloc
realloc
free

//c++
new 
delete


p = (int*)malloc(sizeof(int)); // meme alloction static cast because malloc returns void not int

free(p);  //clears memory from heap 

//malloc reurn null on noth

p = new int[20];
delete[] p;

//no typecasting with new;

malloc -  void malloc(size_t size) //returns a void pointer that gives adress of first bite

void *p =malloc( n* sizeof(int)) //more typical  wher n is number of ints

//to use memory cast void int datatype
 
int *p =(int*)malloc( n* sizeof(int)  //typecasting


calloc -- void*calloc(size_t num, size_t size)  //takes two arguments first is how many, second is size in bytes. caloc sets all byte pos with 0 so it nitializes whereas malloc doees not

realloc -- void* realloc(void* ptr, size.t size) //re allocates to change memory size extend memory block

//if second param  realloc size zero it is like using free()
//if first param of realloc is NULL i is like malloc


//pointer as function returns

int Add(int* a, int* b){
    int c =(*a)+(*b);  //dereferencing
    return c;
}



int main(){ 
  int a =2, b=4;

  int c = Add(&a,&b);
}

// okay to pass from bottom to top in call stack but to return from top to bottm in call stack  as things leave the scope chain memory gets overwritten be careful of scope


//function pointer

int Add(int a, int b){

return a+b;

}



int main(){

  int(*p)(int,int);
  p = &Add;
  c = (*p)(2,3);  //deref
  printf("5d",c);

}


int * func (int,int) //declaring a function that would return * int
int *(func)(int, int) //declaring a function pointer

//function pointers allow call backs 
// a function that takes a function ointe as argument


void A()
{
 printf ("hello")
}
void B(void(*ptr)()) // function pointer as argument
{
  ptr();  //call- back function that "ptr" points to
}
int main()
{
  void(*p)()=A;   // could also write B(A) for the two statements
  B(p)             // because name of a function returns a pointer
}

b(A) //A is a callback function

// (const void *ptr)


//Rule of 3   assignment copy delete

//Reellearning youtube video on Rule of 3
// to avoid a shallow copy need overloaded assignment operator

//can use constructor to create a shallow copy then you need overloaded assigment operator to write a deep copy constructor
//write destructor

//if you have a class that has members that can act in heap state
//write your own deconstructor constructor operator overloaded

#include<iostream>
#include<string>
//charcterheader file
class GCharacter{

  friend std::ostream& operator<<(std:: ostream& os, const GCharacter& gc);
  
  public:
     static const int DEFAULT_CAPACITY=5;
     // constructor
     GCharacter(STD::String name= "John", int capcity = DEFAULT_CAPACITY);
     
     //Copy Constructor
     GCharacter(const GCharacter& source);

     //overloaded asignment operator
     GCharacter& operator=(const GCharacter& source);
   
     //Destructor
     ~GCharacter();

     
     //Insert funct to ad a new tool to array
     void insert(const std::string& toolName);

     private:
          // Data members
      std::sring name;
      int capacity;
      int used;
      std:: string "toolholder";

      

    
    

};





#include "GCharacter.h"
using namespace std;

//constructor
GCharacter :: GCharacter(string n, int cap){

    name = n;
    capacity = cap;
    used = 0;
    toolHolder = new string(cap)

}


//copy constructor
GCharacter:: GCHaracter(const GCharacter& source){
   cout<<" coy constructor called"<<endl;
   name = source.name;
   capacity = source.capacity;
   used = source.used;
   toolHolder = new String[source.capacity] // doing a deep copy need a new string array

   copy(source.tollHolder, source.toolHolder + used, toolHolder);

   //could have used for loop

}

//overloaded assignment operator

GCharacter& GCharacter:: operator = (const GCharacter& source){

   cout<< "Overloaded Assignment called" <<endl;

   if(this== &source){return *this;}
// bottom lines same as copy construct
   name = source.name;
   capacity = source.capacity;
   used = source.used;


   copy(source.tollHolder, source.toolHolder + used, toolHolder);

   return *this;
}

// destructor

GCharacter::~GCharacter(){
  cout << "Destructor called for " << this.name
   << " @ this mem location"<< this< endl;
   
  delete[] toolHolder;

}

// inserting a new tool into tooholder
void GCharacter::insert(const string& toolName){
   if(used==capacity){

  cout << cant add more tools
} else{
    toolholder[used] = toolName;
    used++;

}

}
std::ostream& operator<<(std::ostream& os, const GCharacter& gc){
     os << "Game Character " << gc.name <<"has tols"<< std::endl << "|";
for(int i=; i< gc.used; i++){
   od <<.toolholder[i] + "|";

}

return os << std::endl;
      


}



