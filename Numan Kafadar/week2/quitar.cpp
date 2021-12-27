#include <iostream>
#include <stack>

using namespace std;

void add(stack<int> &s,int fred,int &result){
    if (s.empty()){
        s.push(fred);
        result++;
    }
    if(s.top()<fred){
        s.push(fred);
        result++;
    }
    if(s.top()>fred){

        while(!s.empty()&&s.top()>fred){

            s.pop();
            result++;
        }

        if(s.empty()||s.top()!=fred){
            s.push(fred);
            result++;
        }
    }
}

int main(){
    stack<int> s1,s2,s3,s4,s5,s6;
    int n,p;cin>>n;cin>>p;
    int tone,fred;
    int result=0;
    for(int i=0;i<n;i++){
        cin>>tone;cin>>fred;
        if (tone==1){
            add(s1,fred,result);
        }
        if (tone==2){
            add(s2,fred,result);
        }
        if (tone==3){
            add(s3,fred,result);
        }
        if (tone==4){
            add(s4,fred,result);
        }
        if (tone==5){
            add(s5,fred,result);
        }
        if (tone==6){
            add(s6,fred,result);
        }
    }

    cout<<result<<endl;

    return 0;
}