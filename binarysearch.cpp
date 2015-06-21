#include<iostream>
using namespace std;
int binary_search(int A[],int n, int key)
{
	int step_count=0;
	int start=0;
	int end=n-1;
	int mid;
	step_count+=4;
	while (start < end) 
	{
		mid = (start+end)/2;
		step_count+=3;
		if (A[mid] == key) {
			step_count+=1;
			cout<<"Found at " << mid;
			break;
		}
		
		else if (A[mid]<key)
		{
			step_count+=1;
			start=mid+1;
		}
		
		
		else
		{
			step_count+=1;
			end=mid-1;
		}
		cout<<"Start is \n" << start;
		cout<<"end is\n" << end;
		step_count+=2;

	}
	step_count+=1;
	if(start>=end)
	{
		step_count+=1;
		cout<<"not found";
	}
	step_count+=1;
	cout <<"no of steps is " <<step_count;
	return 0;
}




int main(){
	int A[100],n=100;

	for(int i=0;i<n;i++)
	{
		A[i]=i+1;
	}
	binary_search(A,n,101);
	
	return 0;
}