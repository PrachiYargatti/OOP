#include <iostream>
#include <vector>
using namespace std;


int main() {

    vector<int> v1 = {2,4,6,8};

    for(int i = 0;i<v1.size();i++){//regular way
      cout<<v1[i]<<endl;
    }

    vector<int>::iterator it;
    for(it = v1.begin();it!=v1.end();++it){ //using iterator
        cout<<(*it)<<'\t';
    }

    for(int value:v1){//c++ 11 and after
        cout<<value<<endl;
    }

    return 0;
}
