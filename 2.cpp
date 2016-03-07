#include<iostream>
#include<fstream>
using namespace std;

void arraysum(int n)
{
	int *a=new int[n];
	int sum=0;
	ifstream in("D:\\number.txt");
	if(! in)
	{
		cout<<"文件无法打开";
	}
	cin>>a[n];
	for(int i=0;i<n;i++)
		sum+=a[i];
}
int main(void)
{
	int a;
	cout<<"数据长为"<<endl;
	cin>>a;
	arraysum(a);
	cout<<"和为"<<endl;
	return 0;
}