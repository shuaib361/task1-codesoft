#include<iostream>
#include<windows.h>
using namespace std;
void print_task(string task[], int count)
{
	cout<<"===================================="<<endl;
	cout<<"Tasks To Do: "<<endl;
	for(int i=0; i<count; i++)
	{
		cout<<"Task"<<i<<" : "<<task[i]<<endl;
	}
	cout<<"===================================="<<endl;
}
int main()
{
	string tasks[10] ={""};
	int count = 0;
	int choice = -1;
	while(choice != 4 )
	{
		cout<<"---->TO DO LIST<-----"<<endl;
		cout<<"1. To Add New Task"<<endl;
		cout<<"2. To view Task"<<endl;
		cout<<"3. Delete The Task"<<endl;
		cout<<"4. Terminate the Program"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				{
					if(count >9)
					{
						cout<<"Task List is Full"<<endl;
					}
					else{
						cout<<"Enter New Task: "<<endl;
						cin.ignore();
						getline(cin,tasks[count]);
						count++;
					}
					break;
				}
			case 2: 
			    print_task(tasks,count);
			    break;
			case 3:
				{
					int del_task;
					cout<<"Enter Any Task for delete: ";
					cin>>del_task;
					if(del_task<0 || del_task>9)
					{
						cout<<"invalid Tasks"<<endl;
						break;
					}
					for(int i=del_task; i<count; i++){
						tasks[i] = tasks[i+1];
					}
					count = count - 1;
					break;
				}
		}
	}
	return 0;
}