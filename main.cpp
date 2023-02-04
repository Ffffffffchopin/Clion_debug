#include <iostream>
#include<set>
using namespace std;

class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        int n=coins.size();
        set<int> s;
        s.insert(0);
        for(int i=1;i<=n;i++){
            for(int j=0;j<n-i+1;j++){
                 int tmp=0;
                for(int k=j;k<j+i;k++){
                    tmp+=coins[k];
                }
                s.insert(tmp);
            }
        }
        int count=1;
        int pre=0;
        int ret=1;
        auto start=s.begin();
        start++;
        for(auto it=start;it!=s.end();it++){
            if(*it!=pre+1){
                if(count>=ret){
                    ret=count;
                }
                count=0;
                pre=*it;
            }
            else{
                count++;
                pre++;
            }
        }
        return ret;
    }
};

int main() {
    string str1="ABABAB";
    string str2="AB";

    std::cout << Solution::gcdOfStrings(str1,str2) << std::endl;
    return 0;
}
