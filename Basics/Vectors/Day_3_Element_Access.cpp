#include <iostream>
#include <vector> 

using namespace std;

int main()
{
   vector<int> g1;
   cout << "Size of Vector: " << g1.size() << endl;
  
   for(int i=1;i<=5;i++){
       g1.push_back(i);
   }
   
   cout<<"Reference Operator at g1[2]: "<<g1[2]<<endl;
   cout<<"at pos 2: "<<g1.at(2)<<endl;
   cout<<"Value at front: "<<g1.front()<<endl;
   cout<<"Value at back: "<<g1.back()<<endl;
   
   int* pos = g1.data();
   cout<<"First Element is: "<<*pos;
   return 0;
   
}   
