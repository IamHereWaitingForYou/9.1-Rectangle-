#include<iostream>
using namespace std;
int n=0,a[10]={0},book[10]={0};
void dfs(int step)
{
	int i;
	if(step==n+1)//���step==n+1˵��ǰn�������Ѿ��ź� 
	{//���һ��ȫ���� 
		for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
		return; 
	}
	//ÿ����������1->n��һһ����
	for(i=1;i<=n;i++)
	{
		if(book[i]==0)//�ж������Ƿ��ù�
		{
			a[step]=i;//�洢��ǰλ�õ����֣��Ա������������ 
			book[i]=1;//��ǰ�����Ѿ����ù����ı��־����ֹ����
			dfs(step+1);//�źõ�ǰλ�õ����ֺ󣬰�����һ������ 
			book[i]=0; //���ݣ�������һ��ȫ���к󣬽�����һ�ֳ��� 
		} 
	 } 
	 return ; 
}
int main()
{
	cin>>n;//����ֻ��Ϊ1-9֮�����������ʾ1-n��ȫ���� 
	dfs(1);//�ӵ�һ��λ�ÿ�ʼ 
	return 0;
 } 
