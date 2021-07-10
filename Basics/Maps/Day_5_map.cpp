#include <iterator>
#include <map>
#include <iostream>

using namespace std;

int main()
{

    map<int, int> g;
    
    g.insert(pair<int, int>(1, 40));
    g.insert(pair<int, int>(2, 30));
    g.insert(pair<int, int>(3, 60));
    g.insert(pair<int, int>(4, 20));
    g.insert(pair<int, int>(5, 50));
    g.insert(pair<int, int>(6, 50));
    g.insert(pair<int, int>(7, 10));
    
    map<int, int>::iterator itr;
    cout << "\nThe map g is : \n";
    cout << "\tKEY\tELEMENT\n";
    
    for(itr = g.begin(); itr != g.end(); ++itr){
        cout<< '\t' <<itr->first
            << '\t' << itr->second << '\n';
    }
    cout<<endl;
    
    map<int, int> g2(g.begin(),g.end());
    
    
    cout << "\nThe map g2 after"
    << " assign from g is : \n";
    cout << "\tKEY\tELEMENT\n";
    
    for(itr = g2.begin(); itr != g2.end(); ++itr){
         cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    
    int num;
    num = g2.erase(4);
    cout << "\ng2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = g2.begin(); itr != g2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    
    cout << endl;
    
    cout << "g.lower_bound(5) : "
         << "\tKEY = ";
    cout << g.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << g.lower_bound(5)->second << endl;
    cout << "g.upper_bound(5) : "
         << "\tKEY = ";
    cout << g.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << g.upper_bound(5)->second << endl;

    

    return 0;
}
