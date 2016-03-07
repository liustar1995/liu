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
		cout<<"文件无法打开";
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
		cout<<"请重新输入";
	else if(b>c)
		cout<<"请重新输入";
	cout<<"数据长度为"<<a;
	arraysum(a,b,c);
	return 0;
}
