#include <iostream>
#include <string>
#include <vector>
#include "MyStack.cpp"
using namespace std;
int main() {
    string input;
    cin>>input;
    MyStack myst1;
    MyStack myst2;
    int num1=0;int num2=0;
    for(char c: input){
        if (c=='(' and myst1.isEmpty()){num1++;//(()())(())   num1=2 num2=0
            myst1.push(c);///myst1= (      myst2=()()()
        }else if (c=='('){num1++;
            myst2.push(c);
        }else if(c==')'){num2++;
            if(num2==num1){
                num1=0;num2=0;
                myst1.pop();
            }else{
                myst2.push(c);
            }
        }
    }
    vector<char> out;
    while(!myst2.isEmpty()){
        out.push_back(myst2.pop());
    }
    if(out.size()==0){
        cout<<" ";
    }else{
        for(int i =out.size();i>=0;i--){
            cout<<out[i];
        }
    }
    return 0;
}
