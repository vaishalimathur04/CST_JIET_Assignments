#include<iostream>
using namespace std;
int main()
{
	int s;
	int arr[s];
	int x,y,z;
	cout<<"enter size in an array";
	cin>>s;
	cout<<"enter elements in array:";
	for(x=0;x<s;x++)
	{
		cin>>arr[x];
	}
	for(x=0;x<s;x++)
	{
		for(y=x+1;y<s;y++)
		{
			if(arr[x]==arr[y])
			{
				for(z=y;z<s;z++)
				{
					arr[z]=arr[z+1];
				}
			s--;
			y--;
		}
	}
}
cout<<"array elements after deleting duplicates:";
 for(x=0;x<s;x++)
         {
              	cout<<arr[x];
}
}
