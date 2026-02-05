#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    int start =0,end= n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"reversed array is :";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}