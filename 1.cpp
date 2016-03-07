#include<iostream>
#include<fstream>
using namespace std;

void Sum(float a[],int size)
{   int sum=0;
	for(int i=0;i<size;i++)
    sum+=a[i];
}

int main(void)
{
	const int n=100;
	int sum=0;
	float number[n];
	ifstream in("D:\\number.txt");
	if(! in)
	{
		cout<<"不能打开文件"<<endl;
	}

	cout<<"Please input"<<n<<"number:\n";
	for(int i=0;i<n;i++)
			cin>>number[n];
	    Sum(number,n);

		cout<<"数组和"<<sum<<endl;
		in.close();
return 0;
}

    