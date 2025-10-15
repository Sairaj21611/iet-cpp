#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str1[] = "Hello \0 World";
    char str2[] = "";
    strcpy(str2, str1);
    cout << "result: " <<str2<<endl;
}
