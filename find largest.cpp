#include<iostream>
#include<climits>
using namespace std;
int main() {
    int nums[] = {5,15,22,1,-15,-24};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0;i<size;i++)
    {
        largest = max(nums[i],largest);
        smallest = min(nums[i],smallest);

    }
    cout<<"smallest number is : "<<smallest<<endl;
    cout<<"largest number is : "<<largest<<endl;
    return 0;
}