class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        double sum = 0; 

        for(int i=0; i<n; i++){
            if(i < n/2){
                if(num[i] == '?'){
                    sum += 4.5;
                }
                else{
                    sum += num[i] - '0';
                }
            }
            else{
                if(num[i] == '?'){
                    sum -= 4.5;
                }
                else{
                    sum -= num[i] - '0';
                }
            }
        }

        return sum != 0;
    }
};
