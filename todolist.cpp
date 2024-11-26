#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector<string> list{};
    char selection{};
    int cselect;
    string complete = " (completed)";
    do
    {
        cout << "\nTo Do List" << endl;
        cout << "\nD - Display To Do List" << endl;
        cout << "A - Add To Do List" << endl;
        cout << "C - Complete A List" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nSelection: ";
        cin >> selection;

        if (selection == 'D' || selection == 'd')
        {
            if (list.size() == 0)
            {
                cout << "\nThe list is empty\n"
                     << endl;
            }
            else
            {
                for (auto name : list)
                {
                    cout << name << endl;
                }
                cout << " " << endl;
                ;
            }
        }
        else if (selection == 'A' || selection == 'a')
        {
            string todo{};
            cout << "Enter an string to add to the list: ";
            cin >> todo;

            list.push_back(todo);
        }
        else if (selection == 'C' || selection == 'c')
        {
            cout << "Select a list to complete : ";
            cin >> cselect;
            if (list[cselect - 1].find(complete) != std::string::npos)
            {
                cout << "That list is already completed" << endl;
            }
            else
            {
                list[cselect - 1] = list[cselect - 1] + complete;
                cout << "List at " << cselect << " has been completed" << endl;
            }
        }

    } while (selection != 'Q' || selection != 'q');
}
