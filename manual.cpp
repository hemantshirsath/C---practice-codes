#include<iostream>
using namespace std;
void input(int *arr,int n)
{
	cout<<"Enter "<<n<<" elements of an array ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void display(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void merge(int *arr1,int n1,int *arr2,int n2,int *arr3,int n3)
{
	int i=0;
	for(i=0;i<n2;i++)
	{
		arr3[i]=arr1[i];
	}
	for(int j=0;j<n2;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
}
int main()
{
	int n1,n2;
	cout<<"Enter size of an first array ";
	cin>>n1;
	int arr1[n1];
	input(arr1,n1);
	display(arr1,n2);
	cout<<endl<<"Enter size of second array ";
	cin>>n2;
	int arr2[n2];
	input(arr2,n2);
	display(arr2,n2);
	int n3=n1+n2;
	int arr3[n3];
	merge(arr1,n1,arr2,n2,arr3,n3);
	cout<<"Merged array is "<<endl;
	display(arr3,n3);
	return 0;
}