// #include <iostream>

// using namespace std;
// int dog()
// {
//     int name = 'x';
//     cout << "What is the name of your dog?" << endl;
//     cin >> name;
//     cout << 'the name of your dog is' << name << 'This is a really cool name' << endl;
//

#include <iostream>
#include <string>

using namespace std;

int dog()
{
    string name;
    cout << "What is the name of your dog?" << endl;
    cin >> name;
    cout << "The name of your dog is " << name << ". This is a really cool name." << endl;
    return 0;
}

int main()
{
    dog();
    return 0;
}
