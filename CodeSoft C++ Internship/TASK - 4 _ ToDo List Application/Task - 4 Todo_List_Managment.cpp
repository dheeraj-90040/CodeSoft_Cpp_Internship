#include <bits/stdc++.h>
using namespace std;


struct Task {
    string description;
    string status;

    Task(string desc) : description(desc), status("In progress") {}
};

void Display_Menu() {
    cout << "\t\t\n || To Do List Manager || \n\t\t" << endl;
    cout << "1. Add Task " << endl;
    cout << "2. Mark as Pending" << endl;
    cout << "3. Mark as In Progress" << endl;
    cout << "4. Mark as Completed" << endl;
    cout << "5. View Tasks " << endl;
    cout << "6. Remove Task" << endl;
}

void RemoveTask(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "There are No Tasks to Delete [ X ]" << endl;
        return;
    }

    size_t index;
    cout << "Enter Task Number to Delete [ X ] : ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        cout << tasks[index - 1].description << "  Status : " << tasks[index - 1].status << " Successfully Deleted [ X ] " << endl;
        tasks.erase(tasks.begin() + index - 1);   // Delete task at index
    } else {
        cout << "Invalid! Task Doesn't Exist" << endl;
    }
}

void ViewList(vector<Task>& tasks) {
    cout << "---- List of Tasks ----" << endl;
    cout << endl;

    for (size_t i = 0; i < tasks.size(); i++) {
        cout << " > " << i + 1 << " : " << tasks[i].description << "\tStatus : " << tasks[i].status << endl;
    }

    cout << endl;
}

void AddTask(vector<Task>& tasks) {
    string desc;
    cout << "Enter A Description of Task: ";
    getline(cin, desc);
    tasks.push_back(Task(desc));
}

void SetInprogress(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No Tasks to Update Status" << endl;
        return;
    }

    size_t index;
    cout << "Enter the Task Number: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks[index - 1].status = "In Progress";
    } else {
        cout << "Invalid Task Number!" << endl;
    }
}

void SetPending(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No Tasks to Update Status" << endl;
        return;
    }

    size_t index;
    cout << "Enter the Task Number: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks[index - 1].status = "Pending";
    } else {
        cout << "Invalid Task Number!" << endl;
    }
}

void SetCompleted(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No Tasks to Update Status" << endl;
        return;
    }

    size_t index;
    cout << "Enter the Task Number: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks[index - 1].status = "Completed";
    } else {
        cout << "Invalid Task Number!" << endl;
    }
}

void Greet_on_Complete(vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "To Do List is Empty! Add New Targets" << endl;
        return;
    }

    for (size_t i = 0; i < tasks.size(); i++) {
        if (tasks[i].status != "Completed")
            return;
    }

    cout << "\n\t\tCongrats! You Made The Day Productive!" << endl;
    cout << "\t\tCompleted Tasks: " << tasks.size() << endl;
    cout << endl;
}

int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
        Display_Menu();
        cout << "\nChoose An Option: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                AddTask(tasks);
                break;
            case 2:
                SetPending(tasks);
                break;
            case 3:
                SetInprogress(tasks);
                break;
            case 4:
                SetCompleted(tasks);
                break;
            case 5:
                ViewList(tasks);
                break;
            case 6:
                RemoveTask(tasks);
                break;
            default:
                cout << "Invalid! Enter a valid choice." << endl;
                break;
        }

        Greet_on_Complete(tasks); // Check and Greet
    }

    return 0;
}

