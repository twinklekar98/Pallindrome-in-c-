#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1;
    cout<<str1<<endl;
    str2=str1;
    reverse(str1.begin(),str1.end());
    cout<<str1;
    if(str1.compare(str2)==0)
        cout<<"it is  a pallindrome";
    else
        cout<<"\nIt is not a pallindrome";

}
