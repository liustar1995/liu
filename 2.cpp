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
		cout<<"�ļ��޷���";
	}
	cin>>a[n];
	for(int i=0;i<n;i++)
		sum+=a[i];
}
int main(void)
{
	int a;
	cout<<"���ݳ�Ϊ"<<endl;
	cin>>a;
	arraysum(a);
	cout<<"��Ϊ"<<endl;
	return 0;
}