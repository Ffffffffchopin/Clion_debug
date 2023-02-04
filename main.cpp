#include <iostream>
#include<string>
using namespace std;

class Solution {
public:
    static string gcdOfStrings(string str1, string str2) {
        string ret;
        string tmp;
        for(int i=0;i<str2.size();i++){
            if(str1[i]!=str2[i]){
                break;
            }
           tmp+=str1[i];
            if(is_divides(str1,tmp)&&is_divides(str2,tmp)){
                ret=tmp;
            }


        }
        return ret;
    }
   static bool is_divides(string& a,string& b){
        int i=0;
        int n=b.size();
        while(i<a.size()){
            if(a.substr(i,n)!=b){
                return false;
            }
            i+=n;
        }
        return true;
    }
};

int main() {
    string str1="ABABAB";
    string str2="AB";

    std::cout << Solution::gcdOfStrings(str1,str2) << std::endl;
    return 0;
}
