
#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int main()
{
	int choice = 0;
	vector<string>tasks;
	vector<bool>completed;

	while (choice != 5)
	{
		cout << "\n================================\n";
		cout << "*---MY TO DO LIST---*\n";
		cout << "================================\n";

		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "Gland to see you again :)" << endl;
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

		cout << "1: Add Task" <<endl;
		cout << "2: View Task" << endl;
		cout << "3: mark as Complete" << endl;
		cout << "4: Delete Task" << endl;
		cout << "5: Exit" << endl;

		cout << "--------------------------------\n";

		cout << "Enter Your Choice: ";
		if (!(cin >> choice))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid inputs use numbers. " << endl;
			continue;
		}
		

		if (choice == 1)
		{
			char again = 'y';
			cin.ignore();

			while (again == 'y' || again == 'Y')
			{
				string newTask;

				cout << "Enter Your Task: ";
				getline(cin, newTask);
				tasks.push_back(newTask);
				completed.push_back(false);

				cout << "Task Added Successfully: " << endl;

				cout << "Add Another task? (y/n): ";
				cin >> again;
				cin.ignore();

			}

		}
		else if (choice == 2)
		{
			cout << " View Tasks: "<<endl;

			if (tasks.empty())
			{
				cout << "No task available" << endl;
			}
			else
			{
				for (int i = 0; i < tasks.size(); i++)
				{
					
					cout << i + 1 << " : " << tasks[i]  ;
				 

					if (completed[i] == true)
					{
						cout << "  * complete" << endl;
					}
					else
					{
						cout << "  * pending" << endl;
					}
					
				}
			}
		}

		else if (choice == 3)
		{
			int taskNumber;
			cout << "Enter Task Number To Complete: ";
			cin >> taskNumber;

			if (taskNumber >= 1 && taskNumber <= tasks.size())
			{
				completed[taskNumber - 1] = true;
				cout << "Task market as completed";
			}
			else
			{
				cout << "Invalid task number" << endl;
			}
		}

		else if (choice == 4)
		{
			int taskNumber;
			cout << "Enter task number to delete: ";
				cin >> taskNumber;

				if (taskNumber >= 1 && taskNumber <= tasks.size())
				{
					tasks.erase(tasks.begin() + taskNumber - 1);
					completed.erase(completed.begin() + taskNumber - 1);

					cout << "Task deleted successfully:" << endl;
				}
				else
				{
					cout << "Ivalid task number" << endl;
				}
		}

		else if (choice == 5)
		{
			cout << "See you again" << endl;
		}

	}


	return 0;
}
