/*write a class STRING that can use to store strings, add strings
equate strings ,output string*/
#include <iostream>
using namespace std;
const int MAX = 30;

class MyString
{
private:
    char str[MAX];

public:
    MyString() {}    // default constructor
    void getString() // function to store string
    {
        cin.getline(str, MAX);
    }
    void displayString() // function to display string
    {
        cout << "stored string is: " << str << endl;
    }
    int length() // function to get the length of the string
    {
        int i = 0;
        for (i = 0; str[i] != '\0'; i++)
            ;
        return i;
    }
    bool equateString(MyString &B) // function to equate the string
    {
        int i = 0;
        for (i = 0; str[i] != '\0'; i++)
        {
            if (B.str[i] != str[i])
            {
                return false;
            }
        }
        return true;
    }
    void addString(MyString &B) // function to add the string
    {
        MyString temp;
        int i = 0;
        cout << "Concatenated string is: ";
        for (i = 0; str[i] != '\0'; i++)
        {
            temp.str[i] = str[i];
            cout << temp.str[i];
        }
        for (int j = 0; j < B.length(); j++)
        {
            temp.str[j] = B.str[j];
            cout << temp.str[j];
        }
    }
};

int main()
{
    MyString str1, str2;

    cout << "Enter The first string " << endl; // storing first string
    str1.getString();
    str1.displayString();

    cout << "Enter The Second string" << endl; // storing second string
    str2.getString();
    str2.displayString();

    cout << "We compared the string " << endl; // comparing string
    if (str1.length() == str2.length())
    {
        if (str1.equateString(str2))
        {
            cout << "Strings are equal !!" << endl;
        }
        else
        {
            cout << "Strings are not equal !!" << endl;
        }
    }
    else
    {
        cout << "Strings are not equal !!" << endl;
    }

    cout << "Adding First String to Second String" << endl;
    str1.addString(str2); // Adding string
    cout << endl;
    return 0;
}
