#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "How Many Words";
    int vowels=0, consonant=0, spaces=0;
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || 
            str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowels++;
        }
        else if(str[i]==' ')
        {
            spaces++;   
        }
        else
        {
            consonant++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonant: " << consonant << endl;
    cout << "Words: " << spaces+1 << endl;
    return 0;
}