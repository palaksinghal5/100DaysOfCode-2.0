#include <iostream>
#include <vector> 

using namespace std;

int main()
{
   vector<int> g1;
   
   for(int i=1;i<=5;i++){
       g1.push_back(i);
   }
   //regular iterators can be used for modifying value
   cout << "Output of begin and end: ";
   for(auto i = g1.begin(); i!=g1.end(); ++i ){
       cout<<*i<<" ";
   }
   //constant iterators cannot be used to modily values; give error
   cout << "\nOutput of cbegin and cend: ";
   for(auto i =g1.cbegin(); i!=g1.cend(); ++i){
       cout<<*i<<" ";
   }
   
   cout << "\nOutput of rbegin and rend: ";
   for(auto ri = g1.rbegin(); ri!=g1.rend(); ++ri ){
       cout<<*ri<<" ";
   }
   
   cout<< "\nOutput for crbegin and crend: ";
   for(auto ri = g1.crbegin(); ri!=g1.crend(); ++ri){
       cout<<*ri<<" ";
   }
   
   return 0;
   
}   
