#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    //1 VARIANT
    setlocale(0,"");
    vector<string> name;vector<string> author;
    vector<int> god;vector<int> kolvo;
    string n,a; int g,k,i = 0;
    string h = n;
    cout<<"To complete the input enter 'b + 2enter'\n";
    while (h != "b")
    {
        cout<<"Enter the name of the book: "; getline(cin,n); h = n;
        if (h != "b")
        {
            cout<<"Enter the author of the book: "; getline(cin,a);
            cout<<"Enter year of publication: ";cin>>g;
            cout<<"Enter number of copies: ";cin>>k;
            name.push_back(n);author.push_back(a);
            god.push_back(g);kolvo.push_back(k);
        }
        cin.ignore();
    }
    sort(name.begin(),name.end());
    for(int i = 0; i < name.size();i++)
    {
        cout<<i+1<<". "<<name[i];
        cout<<" - Author: "<<author[i];
        cout<<", Year of publication: "<<god[i];
        cout<<", Number of copies: "<<kolvo[i]<<endl;
    }

    return 0;
}
