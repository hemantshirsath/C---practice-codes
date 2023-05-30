// To find first and second largest element from an array 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int firstlargest=0;
    int secondlargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[firstlargest]){

            secondlargest=firstlargest;
            firstlargest=arr[i];
        }
        if(arr[i]>secondlargest && arr[i]!=secondlargest){
            secondlargest=arr[i];
        }

    }
    cout<<"First largest "<<arr[firstlargest]<<endl;
    cout<<"Second largest "<<arr[secondlargest]<<endl;
    cout<<"Lcm of number is "<<arr[firstlargest]*arr[secondlargest]<<endl;
    
    return 0;
}