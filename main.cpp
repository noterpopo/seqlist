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
	cout<<"�����������Ӧ�����֣�"<<endl<<"1.����"<<endl<<"2.ɾ��"<<endl<<"3.����"<<endl<<"4.�˳�"<<endl;
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
			cout<<"������������"<<endl;
			break;
   }
   menu(sl,pos,data,cho); 
}
void insert(SeqList &sl,int &pos,int &data)
{
	cout<<"����������λ�ú������ݣ�"<<endl;
	cin>>pos;
	cin>>data;
	sl.list_insert(pos,data);
}
void remove(SeqList &sl,int &pos)
{
	cout<<"����ɾ�����ݵ�λ�ã�"<<endl;
	cin>>pos;
	sl.list_del(pos);
}
void get(SeqList &sl,int &pos)
{
	cout<<"�����������ݵ�λ�ã�"<<endl;
	cin>>pos;
	cout<<sl.list_get(pos)<<endl;
}

