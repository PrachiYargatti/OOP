#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

    map <int, string> rollcall;
    rollcall[1] = "Abhi";
    rollcall[2] = "Boby";
    rollcall[3] = "Candy";

    map <int, string>::iterator it;
    for(it = rollcall.begin();it!=rollcall.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}
