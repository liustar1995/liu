#include<iostream>
#include<fstream>
using namespace std;

void arraysum(int n,int b,int c)
{
	int *a=new int[n];
	int sum=0;
	ifstream in("D:\\number.txt");
	if(! in)
	{
		cout<<"�ļ��޷���";
	}
	cin>>a[n];
	for(int i=b;i<c;i++)
		sum+=a[i];
}
int main(void)
{
	int a;
	int b,c;
	if(b>a||c>a)
		cout<<"����������";
	else if(b>c)
		cout<<"����������";
	cout<<"���ݳ���Ϊ"<<a;
	arraysum(a,b,c);
	return 0;
}
