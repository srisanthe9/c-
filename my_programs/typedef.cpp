#include<iostream>
// typedef std::string text_t;
// typedef int num_t;
int main(){
    //typedef=reserved keyword used to create an additional name(alias) for another data type.
    // New identifier for an existing type
    //Helps with readability and reduces types
    // Use when there is a clear benefit
    // Replaced with 'using'
using namespace std;
using text_t=std::string;
using num_t=int;
text_t name="srisanth";
num_t a=20;
cout<<name<<'\n'<<a;
}