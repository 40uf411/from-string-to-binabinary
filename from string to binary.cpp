#include <string>
#include <bitset>
#include <iostream>
using namespace std;
int main(){
cout<<"say something: ";
string phrase;
getline(cin,phrase);
for(std::size_t i =0; i<phrase.size();i++){
    cout<<bitset<8>(phrase.c_str()[i]);
}
return 0;
}
