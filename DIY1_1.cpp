#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    string s;
    int vow = 0, conso = 0;

    cout<<"enter sentence : "<<endl;
    getline(cin,s);

    for(char ch : s)
    {
        ch = tolower(ch);
        if(isalpha(ch))
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vow++;

            else
            conso++;
        }
    }

    cout<<"Number of Vowels = "<<vow<<endl;
    cout<<"Number of Consonants = "<<conso<<endl;
}