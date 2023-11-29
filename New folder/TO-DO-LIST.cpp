#include <bits/stdc++.h>
using namespace std;
struct Task {
    string about;
    bool is_done;

    Task(const string& desc) : about(desc), is_done(false) {}
};
void addTask(vector<Task>& tasks, const string& about) {
    tasks.push_back(Task(about));
    cout<<"Task added successfully."<<endl;
}
void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()){
        cout<<"No tasks found."<<endl;
    } 
    else {
        cout<<"Tasks:"<<endl;
        for (size_t i=0;i<tasks.size();++i) {
            cout<<i+1<<". "<<(tasks[i].is_done?"[X] ":"[ ] ")<<tasks[i].about<<endl;
        }
    }
}
void markTaskis_done(vector<Task>& tasks, size_t task_index) {
    if (task_index<tasks.size()) {
        tasks[task_index].is_done=true;
        cout << "Task marked as is_done." << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}
void removeTask(vector<Task>& tasks, size_t task_index) {
    if (task_index<tasks.size()) {
        tasks.erase(tasks.begin() + task_index);
        cout << "Task removed successfully." << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}
int main() {
    vector<Task> tasks;
    int choice;
    do {
        cout<<endl<<"To-Do List Manager"<<endl;
        cout<<"1. Add Task"<<endl;
        cout<<"2. View Tasks"<<endl;
        cout<<"3. Mark Task as  done"<<endl;
        cout<<"4. Remove Task"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string task_des;
                cout << "Enter the task about: ";
                cin.ignore();
                getline(cin,task_des);
                addTask(tasks,task_des);
                break;
            }
            case 2:
                viewTasks(tasks);
                break;
            case 3: {
                size_t task_index;
                cout<<"Enter the task index to mark as done: ";
                cin>>task_index;
                markTaskis_done(tasks,task_index-1);
                break;
            }
            case 4: {
                size_t task_index;
                cout<<"Enter the task index to remove: ";
                cin>>task_index;
                removeTask(tasks,task_index-1);
                break;
            }
            case 5:
                cout<<"Exiting the program. Goodbye!"<<endl;
                break;
            default:
                cout<<"Invalid choice. Please enter a valid option."<<endl;
        }
    } while(choice!=5);
    return 0;
}
