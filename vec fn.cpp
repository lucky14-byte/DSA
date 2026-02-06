#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>vec ;
    cout<<"size = "<<vec.size()<<endl; // for size
    vec.push_back(25); //for add the element at the end
    vec.push_back(35);
    vec.push_back(45);
    cout<<"after puch back size = "<<vec.size()<<endl; // for size

    vec.pop_back(); // for remove the last element
    cout<<vec.front()<<endl; // for first element
    cout<<vec.back()<<endl; // for last element
    cout<<vec.at(0)<<endl; // for element at index 0

    for(int val : vec) {
        cout<<val<<endl;
    }

 return 0;   
}

