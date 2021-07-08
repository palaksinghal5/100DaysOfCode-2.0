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
   
   cout << "Size of Vector: " << g1.size() << endl;
   cout << "Capacity of Vector: " << g1.capacity() << endl;
   cout << "Maximum size of Vector: " << g1.max_size() << endl;
   
   g1.resize(4);
   
   cout<< "After Resizing: "<<*(g1.end()) << endl;
   
   g1.shrink_to_fit();
   
   cout<<"After Shrinking to fit: "<< *(g1.end()) << endl;
   
   if(g1.empty()){
       cout<<"Vector empty"<<endl;
   }
   else{
       cout<<"Vector not empty"<<endl;
   }
   
  //reserve fn in vector 
   std::vector<int>::size_type sz;

  std::vector<int> foo;
  sz = foo.capacity();
  std::cout << "making foo grow:\n";
  for (int i=0; i<100; ++i) {
    foo.push_back(i);
    if (sz!=foo.capacity()) {
      sz = foo.capacity();
      std::cout << "capacity changed: " << sz << '\n';
    }
  }

  std::vector<int> bar;
  sz = bar.capacity();
  bar.reserve(100);   // this is the only difference with foo above
  std::cout << "making bar grow:\n";
  for (int i=0; i<100; ++i) {
    bar.push_back(i);
    if (sz!=bar.capacity()) {
      sz = bar.capacity();
      std::cout << "capacity changed: " << sz << '\n';
    }
  }
   return 0;
   
}   
