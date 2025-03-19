//namespace =provides a solution for preventing name conflicts in large projrcts.Each entity needs a unique name.
//A namespace allows for identically named entities as long as the namespace are different.
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}
#include<iostream>
int main(){
    int x=3;
    std::cout<<x;
    std::cout<<'\n'<<first::x;
    std::cout<<'\n'<<second::x;

    return 0;
}
