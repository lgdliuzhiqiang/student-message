#include<iostream>
#include<string>
using namespace std;
 int i=0;
class Student
{
public:
	int num;
	string name;
	char sex;
	int age;
	int score;
public:
    void addStudent();//����ѧ����Ϣ
	void delStudent();//ɾ��ѧ����Ϣ
	void queryStudent(int stuid);//����ѧ����Ϣ
	void queryAall();//��ѯȫ��

};
 
void Student::addStudent()
{
	cout<<"������ѧ����ѧ�ţ��������Ա�����ͳɼ�"<<endl;
	cin>>num;
	cin>>name;
	cin>>sex;
	cin>>age;
	cin>>score;
}
void Student::delStudent()
{  
   char flag;
  cout<<num<<" "<<name<<" "<<sex<<" "<<age<<" "<<score<<endl<<endl;
 cout<<"ȷ��Ҫɾ������(Y)��(N)"<<endl;
  cin>>flag;
  if(flag=='Y')
  {
	  //deletestu();
  }
           
}
void Student::queryStudent(int stuid)
{
  cout<<num<<" "<<name<<" "<<sex<<" "<<age<<" "<<score<<endl;
  
}
void Student::queryAall()
{
	cout<<num<<" "<<name<<" "<<sex<<" "<<age<<" "<<score<<endl<<endl;
}
Student student[10];
void welcome()
{
	cout<<"|--------------------------|"<<endl;
	cout<<"|--��ӭ����ѧ���Ź���ϵͳ--|"<<endl;
	cout<<"|--------------------------|"<<endl;
	cout<<"|--------------------------|"<<endl;
	cout<<"|--    1.����ѧ����Ϣ    --|"<<endl;
	cout<<"|----- 2.ɾ��ѧ����Ϣ  ----|"<<endl;
	cout<<"|----- 3.��ѯѧ����Ϣ   ---|"<<endl;
	cout<<"|--    4.��ѯȫ��        --|"<<endl;
	cout<<"|-----  0.�˳�         ----|"<<endl;
}
   
 
int main()
{

	int selection;
	
	while(1)
	{
		welcome();
    
		cout<<"������Ҫ���е�ҵ��"<<endl;
		cin>>selection;
	

		switch(selection)
		{  
		   case 1:
			
			{
               
				student[i].addStudent();
				 i++;
				break;
			}
		case 2:
			{
				int j,number;
				cout<<"������Ҫɾ����ѧ����ѧ�ţ�"<<endl;
				cin>>number;
				for(j=0;j<i;j++)
				{
					if(student[j].num==number)
					{
					     student[j].delStudent();
					 
					    for(int k=j;k<i-1;k++)
						{
						
						 student[k]=student[k+1];
						
						}
				    	 i=i-1;
						
					}
					else
					{
						cout<<"��ѧ�������ڣ�"<<endl;
					}
				}
			   break;
			}
		case 3:
			{
			     
				    int number;
                 cout<<"������Ҫ��ѯ��ѧ����ѧ�ţ�"<<endl;
                 cin>>number;
                for(int j=0;j<i;j++)
				 {
					 if(student[j].num==number)
					 {
						 student[j].queryStudent(number);
					 }
					 else
					 {
						 cout<<"��ѧ�������ڣ�"<<endl;
					 }
				 }
			  break;
			   }
		case 4:
			{
				int j;
				for(j=0;j<i;j++)
				{
					student[j].queryAall();
				}
				break;
			}
	    case 0:exit(0);
		}
    system("cls");
	}
  
  	return 0;

}