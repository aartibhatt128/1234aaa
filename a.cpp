#include<iostream>
using namespace std;
int main()
{
	int num,n,z=0,o=0,rem;
	cin>>num;
	while(num--)
	{
		cin>>n;
		o=0,z=0,rem=0;
		while(n>0)
		{
			rem=n%10;
			if(rem==0)
			z++;
			else if(rem==1)
			o++;
			n=n/10;
			
		}
		if(o==1&&z>=1)
		cout<<"Yes";
		else if(z==1&&o>=1)
		cout<<"Yes";
		else if(z==o)
		cout<<"No";
		else
		cout<<"No";
	}
}
