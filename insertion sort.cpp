#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter no of elements : ";
	cin>>n;
	int a[n];
	cout<<"Enter elements in array : \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int j=1;j<n;j++)
	{
		int key=a[j];
		int i=j-1;
		while(i>=0 && a[i]>key)
		{
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
	
	cout<<"\n*****Insertion Sort******\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
return 0;
}
