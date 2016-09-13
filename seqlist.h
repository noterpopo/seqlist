#include<iostream>
using namespace std;


class SeqList
{
	private:
		int *list;
		int maxsize;
		int size;
	public:
		SeqList();
		~SeqList();
		int list_size();
		int list_insert(int i,int item);
		int list_del(int i);
		int list_get(int i);
		void list_display();
};

SeqList::SeqList()
{
	maxsize=1000;
	cout<<"������˳���Ĵ�С��"<<endl;
	cin>>size; 
	list=new int[maxsize];
	for(int j=0;j<size;j++)
	{
		cout<<"�������"<<j+1<<"�����ݣ�"<<endl;
		cin>>list[j];
	}
	list_display();
}
SeqList::~SeqList()
{
	delete []list;
}
int SeqList::list_size()
{
	return size;
}
int SeqList::list_insert(int i,int item)
{
	if(i<=size)
	{
		for(int j=size;j>=i;--j)
	       {
		     list[j]=list[j-1];
	       }
	    list[i-1]=item;
	    size=size+1;
	    list_display();
	}
	else
	    cout<<"������������"<<endl;
}
int SeqList::list_del(int i)
{
	size=size-1;
	for(int j=i;j<=size;++j)
	{
		list[j-1]=list[j];
	}
	list_display();
}
int SeqList::list_get(int i)
{
	return list[i-1];
}
void SeqList::list_display()
{
	cout<<"˳�������Ϊ��"<<endl;
	for(int j=0;j<size;j++)
	{
		cout<<list[j]<<" ";
	}
	cout<<endl;
}
