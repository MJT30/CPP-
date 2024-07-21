#include <iostream>
#include <string>

using namespace std;

int cat()
{
    string name;
    cout << "What is the name of your cat?" << endl;
    cin >> name;
    cout << "The name of your cat is " << name << ". This is a really cool name." << endl;
    return 0;
}

int main()
{
    cat();
    return 0;
}