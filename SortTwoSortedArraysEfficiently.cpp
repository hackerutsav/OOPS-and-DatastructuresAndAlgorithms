#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter n";
	int n,i,index1=0,index2=0,m;
	cout<<"enter no of numbers in array1 and array2";
	cin>>n>>m;
	int A[n],B[m],C[n+m];
	cout<<"Enter elements of 1st array";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter elements of second array";
    for (i=0;i<m;i++)
    {
    	cin>>B[i];
    }
    while (index1<=n-1 && index2<=m-1)
    {
    	if (A[index1]<B[index2]) 
    	{
    		C[index1+index2]=A[index1];
    		index1++;
    	}
    	else
    	{
    		C[index1+index2]=B[index2];
    		index2++;
    	}	
    }
    cout<<index1<<endl<<index2;
    if (index1==n) {
    	for (i=index2;i<m;i++)
    	{
    		C[index1+index2] = B[index2]; 
    		index2++;
    	}
    }
        if (index2==m) {
    	for (i=index1;i<n;i++)
    	{
    		C[index1+index2] = A[index1]; 
    		index1++;
    	}
    }
    for(i=0;i<index1+index2;i++)
    {
    	cout<<C[i]<<'\n';
    }
    return 0;
}	