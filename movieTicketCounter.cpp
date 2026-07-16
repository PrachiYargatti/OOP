#include<bits/stdc++.h>
using namespace std;
class solution {
public:
    bool movieTicketCounter(vector<int>& tickets) {
        int n = tickets.size();
        int fiftiesCount = 0;
        int hundredCount = 0;
        
        for(int i=0;i<n;i++){
            if(tickets[i] == 50){
                fiftiesCount++;
            }
            else if(tickets[i] == 100){
                if(fiftiesCount >= 1){
                    fiftiesCount--;
                    hundredCount++;
                }
                else{
                    return false;
                }
            }
            else if(tickets[i] == 200){
                if(fiftiesCount >= 3){
                    fiftiesCount -= 3;
                }
                else if(fiftiesCount>=1 && hundredCount>=1){
                    fiftiesCount--;
                    hundredCount--;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
