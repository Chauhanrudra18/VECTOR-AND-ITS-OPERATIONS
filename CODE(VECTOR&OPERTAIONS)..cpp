#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void push(vector<int> &v)
{
    int size, element;
    cout << "Enter the size of the vector" << endl;
    cin >> size;
    cout << "Enter the elements of the vector" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        v.push_back(element);
    }
}

void pop(vector<int> &v)
{
    v.pop_back();
}

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void reverse(vector<int> &v)
{
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void insertatposition(vector<int> &v)
{
    int position, element;
    cout << "Enter the position where you want to insert the element" << endl;
    cin >> position;
    cout << "Enter the element you want to insert" << endl;
    cin >> element;
    vector<int>::iterator it = v.begin();
    v.insert(it + position, element);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void deleteatposition(vector<int> &v)
{
    int position;
    cout << "Enter the position where you want to delete the element" << endl;
    cin >> position;
    v.erase(v.begin() + position);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void sort(vector<int> &v)
{
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void search(vector<int> &v)
{
    int element;
    cout << "Enter the element you want to search" << endl;
    cin >> element;
    if (find(v.begin(), v.end(), element) != v.end())
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}

void size(vector<int> &v)
{
    cout << "The size of the vector is " << v.size() << endl;
}

int main()
{
    vector<int> v1;
    cout << "******VECTOR AND ITS OPERATIONS*******" << endl;
    int choice;
    do
    {
        cout << "VECTOR OPERATIONS MENU" << endl;
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.Display" << endl;
        cout << "4.Reverse" << endl;
        cout << "5.Insert at position" << endl;
        cout << "6.Delete at position" << endl;
        cout << "7.Sort" << endl;
        cout << "8.Search" << endl;
        cout << "9.Size" << endl;
        cout << "10.Exit" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            push(v1);
            break;
        case 2:
            pop(v1);
            break;
        case 3:
            display(v1);
            break;
        case 4:
            reverse(v1);
            break;
        case 5:
            insertatposition(v1);
            break;
        case 6:
            deleteatposition(v1);
            break;
        case 7:
            sort(v1);
            break;
        case 8:
            search(v1);
            break;
        case 9:
            size(v1);
            break;
        case 10:
            exit(0);
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 10);
    return 0;
}
