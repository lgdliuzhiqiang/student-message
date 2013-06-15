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
    void addStudent();//增加学生信息
	void delStudent();//删除学生信息
	void queryStudent(int stuid);//查找学生信息
	void queryAall();//查询全部

};
 
void Student::addStudent()
{
	cout<<"请输入学生的学号，姓名，性别，年龄和成绩"<<endl;
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
 cout<<"确认要删除吗？是(Y)否(N)"<<endl;
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
	cout<<"|--欢迎进入学生信管理系统--|"<<endl;
	cout<<"|--------------------------|"<<endl;
	cout<<"|--------------------------|"<<endl;
	cout<<"|--    1.增加学生信息    --|"<<endl;
	cout<<"|----- 2.删除学生信息  ----|"<<endl;
	cout<<"|----- 3.查询学生信息   ---|"<<endl;
	cout<<"|--    4.查询全部        --|"<<endl;
	cout<<"|-----  0.退出         ----|"<<endl;
}
   
 
int main()
{

	int selection;
	
	while(1)
	{
		welcome();
    
		cout<<"请输入要进行的业务："<<endl;
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
				cout<<"请输入要删除的学生的学号："<<endl;
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
						cout<<"该学生不存在！"<<endl;
					}
				}
			   break;
			}
		case 3:
			{
			     
				    int number;
                 cout<<"请输入要查询的学生的学号："<<endl;
                 cin>>number;
                for(int j=0;j<i;j++)
				 {
					 if(student[j].num==number)
					 {
						 student[j].queryStudent(number);
					 }
					 else
					 {
						 cout<<"该学生不存在！"<<endl;
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