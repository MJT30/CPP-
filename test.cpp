#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;

    cout << "Please enter age" << endl;
    cin >> age;

    if (age >= 18 && age <= 100)
    {
        cout << "You are over 18 years old" << endl;
        cout << "You are eligible to drive" << endl;
    }
    else if (age < 18)
    {
        cout << "You are too young to drive" << endl;
    }
    else
    {
        cout << "Sorry, you are too old to drive" << endl;
    }

    return 0;
}

int main()
{
    string food;

    cout << "What is your favorite food?" << endl;
    cin >> food;

    if (food == "Sushi" || "sushi")
    {
        cout << "That's mine too!" << endl;
    }
    else
    {
        cout << "Oh, not my fav but that's also good" << endl;
    }

    return 0;
}

int main()
{
    string anime;
    cout << "What is your favorite anime?" << endl;
    cin >> anime;

    if (anime == "Cyberpunk Edgerunners" ||
        anime == "FullMetal Alchemist Brotherhood" ||
        anime == "Death Note" ||
        anime == "Attack on Titan" ||
        anime == "Kaiju No. 8")
    {
        cout << "Damn, that's peak!" << endl;
    }
    else
    {
        cout << "Damn, that's mid lmao" << endl;
    }

    return 0;
}
