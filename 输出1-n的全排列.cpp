#include<iostream>
using namespace std;
int n=0,a[10]={0},book[10]={0};
void dfs(int step)
{
	int i;
	if(step==n+1)//如果step==n+1说明前n个数字已经排好 
	{//输出一种全排列 
		for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
		return; 
	}
	//每次搜索都从1->n；一一尝试
	for(i=1;i<=n;i++)
	{
		if(book[i]==0)//判断数字是否被用过
		{
			a[step]=i;//存储当前位置的数字，以便满足条件输出 
			book[i]=1;//当前数字已经被用过，改变标志，防止重用
			dfs(step+1);//放好当前位置的数字后，安排下一个数字 
			book[i]=0; //回溯，当满足一种全排列后，进行下一种尝试 
		} 
	 } 
	 return ; 
}
int main()
{
	cin>>n;//输入只能为1-9之间的整数，表示1-n的全排列 
	dfs(1);//从第一个位置开始 
	return 0;
 } 
