#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s0;
    string s1("hello");
    string s2 = "Hello World";
    string s3(s2);
    string s4 = s3;
    char a[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty())
    {
        cout << "s0 is an empty string" << endl;
    }

    s0.append("Great Day");

    s0 += "and night";


    // erase everything from the string
    s1.clear();

    // compare strings, =0, >0 or <0
    cout << s0.compare(s1) << endl;

    if (s0 < s1)
    {
        cout << "s1 is greater" << endl;
    }

    cout << s0[0] << endl;

    // Find substring
    cout << s0.find("Day") << endl;

    // Remove from string
    s0.erase(s0.find("Day"), 3);

    // Iterate over all characters

    s1 = "uncopywritable";

    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << ":";
    }
    cout << endl;
    
    for (auto i = s1.begin(); i != s1.end(); i++)
    {
        cout << (*i) << "-";
    }
    cout << endl;
    
    for (auto c:s1)
    {
        cout << c << "/";
    }
    cout << endl;

    return 0;
}