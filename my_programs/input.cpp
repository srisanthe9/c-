#include<iostream>
int main(){
    // cout<<(insertion operator)//char output
    // cin>>(extraction operator)//char input
    using name_t=std::string;
    using namespace std;
    name_t name;
    name_t name1;
    cout<<"what is ur names?";
    cin>>name;//cin >> stops reading when it enconter space
    cout<<'\n'<<"hello "<<name;
return 0;

}
