#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(string desc): description(desc), completed(false){}
};

vector <Task> tasks;

void addTask() {
    cout << "Enter the Task: ";
    string taskDescription;
    cin.ignore();
    getline(cin, taskDescription);
    tasks.push_back(Task(taskDescription));
    cout << "Task added " << taskDescription << endl;
}

void viewTask() {
    if(tasks.empty()) {
        cout << "No tasks found." << endl;
    }
    else {
        for(size_t i=0; i<tasks.size();++i) {
            cout << i+1 << "." <<tasks[i].description <<(tasks[i].completed? "[Completed]" : "[Pending]") << endl;
        }
    }
}

void markTaskAsCompleted() {
    cout << "Enter the task number to mark as completed: ";
    int taskNumber;
    cin >> taskNumber;
    if(taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks[taskNumber - 1].completed = true;
        cout << "Task" << taskNumber << "marked as completed." << endl;
    }
    else {
        cout << "Invalid task number." << endl;
    }
}

void removeTask() {
    cout << "Enter the task number to remove: ";
    int taskNumber;
    cin >> taskNumber;
    if(taskNumber>0 && taskNumber<=tasks.size()) {
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task" << taskNumber << "removed." << endl;
    }
    else {
        cout << "Invalid task number." << endl;
    }
}

void showMenu() {
    cout << "\nChoose an option :\n";
    cout << "1. Add task\n";
    cout << "2. View task\n";
    cout << "3. Mark as completed\n";
    cout << "4. Remove task\n";
    cout << "5. Exit\n";
}


int main() {
    int choice;
    cout << "Welcome to the To-Do List Manager!" <<endl;

    do{
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
            addTask();
            break;
            case 2:
            viewTask();
            break;
            case 3:
            markTaskAsCompleted();
            break;
            case 4:
            removeTask();
            break;
            case 5:
            cout << "Goodbye!" << endl;
            break;
            default :
            cout << "Invalid option. Please try again." << endl;
        }
    }while(choice!= 5);
    return 0;
}