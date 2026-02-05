#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] = {34, 50, 23, 0, 5, 89, 1};
    int size = 7;
    int smallest = INT_MAX;
    int index = 0;

    for(int i=0;i<size; i++)
    {
        if(arr[i]<smallest){
            smallest = arr[i];
            index = i;
        }

    }
    cout<<"Smallest element in the array is: "<<smallest<<endl;
    cout<<"Index of smallest element is: "<<index<<endl;

    return 0;

}
