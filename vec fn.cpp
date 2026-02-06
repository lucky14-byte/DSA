#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>vec ;
    cout<<"size = "<<vec.size()<<endl; // for size
    vec.push_back(25);
    cout<<"after puch back size = "<<vec.size()<<endl; // for size

    for(int val : vec) {
        cout<<val<<endl;
    }

 return 0;   
}

