#include <iostream>
#include <string>
using namespace std;

string stack[100];
int top = -1;

void visit(string page)
{
    top++;
    stack[top] = page;
    cout << "Visited: " << page << endl;
}

void back()
{
    if (top == -1)
    {
        cout << "No history available\n";
    }
    else
    {
        cout << "Back from: " << stack[top] << endl;
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "History is empty\n";
    }
    else
    {
        cout << "Current top page: " << stack[top] << endl;
    }
}

int main()
{
    visit("google.com");
    visit("youtube.com");
    visit("abcsc.com");
    visit("facebook.com");

    cout << "\nPress Back twice:\n";
    back();
    back();

    display();

    return 0;
}