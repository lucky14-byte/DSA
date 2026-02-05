#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int smallest = arr[0];
    int largest = arr[0];
    int smallindex = 0;
    int largeindex = 0;
    
    for( int i = 1 ; i<n ; i++ )
    {
        if ( arr[i]<smallest ){
            smallest = arr[i];
            smallindex =i;

        }
        if (arr[i]>largest){
            largest = arr[i];
            largeindex = i;
        
        }
    }
    cout<<"smallest element is "<<smallest<<"at index "<<smallindex<<endl;
    cout<<"largest element is "<<largest<<"at index "<<largeindex<<endl;
    return 0;
    
}