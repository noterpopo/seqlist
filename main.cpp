#include"seqlist.h"
int menu(SeqList &sl,int &pos,int &data,int &cho);
void insert(SeqList &sl,int &pos,int &data);
void remove(SeqList &sl,int &pos);
void get(SeqList &sl,int &pos);
int main()
{
	int position,data,choose;
	SeqList demo;
	menu(demo,position,data,choose); 
}
int menu(SeqList &sl,int &pos,int &data,int &cho)
{
	cout<<"请输入操作对应的数字："<<endl<<"1.插入"<<endl<<"2.删除"<<endl<<"3.查找"<<endl<<"4.退出"<<endl;
	cin>>cho;
	switch(cho)
	{
		case 1:
			insert(sl,pos,data);
			break;
		case 2:
		    remove(sl,pos);
			break;
		case 3:
		    get(sl,pos);
		    break;
		case 4:
			return 0;
		default:
			cout<<"输入数字有误"<<endl;
			break;
   }
   menu(sl,pos,data,cho); 
}
void insert(SeqList &sl,int &pos,int &data)
{
	cout<<"请输入插入的位置和新数据："<<endl;
	cin>>pos;
	cin>>data;
	sl.list_insert(pos,data);
}
void remove(SeqList &sl,int &pos)
{
	cout<<"输入删除数据的位置："<<endl;
	cin>>pos;
	sl.list_del(pos);
}
void get(SeqList &sl,int &pos)
{
	cout<<"输入所查数据的位置："<<endl;
	cin>>pos;
	cout<<sl.list_get(pos)<<endl;
}

