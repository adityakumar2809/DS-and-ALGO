#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char* myStrtok(char* s, char delim)
{
    static char *input = NULL;
    if(s != NULL)
    {
        input = s;
    }

    if (input == NULL)
    {
        return NULL;
    }

    char *output = new char[strlen(input) + 1];
    int i;
    for(i = 0; input[i] != '\0'; i++)
    {
        if(input[i] != delim)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
        
    }

    output[i] = '\0';
    input = NULL;
    return output;
}

int main()
{
    char s[100] = "Today is a rainy day";
    char* ptr = myStrtok(s, ' '); // First pass with the string to get first token
    cout << ptr << endl;

    while(ptr != NULL)
    {
        ptr = myStrtok(NULL, ' ');    // To get subsequent tokens, pass NULL instead of the string
        cout << ptr << endl;
    }
    return 0;
}