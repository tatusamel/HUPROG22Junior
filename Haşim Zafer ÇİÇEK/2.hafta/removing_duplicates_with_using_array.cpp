using namespace std;
class Solution {
    public:
    char stack[100000];
    int sizeOfStack = 100000;
    int top=0;
    void push(char c){
        if(top >= sizeOfStack){
            cout << "stack doldu." << endl;
        }
        else{
            stack[++top] = c;
        }
        
    }
    char pop(){
        if(top==0){
            cout << "stack bos." << endl;
            return -1;
        }
        return stack[--top];
    }
        string removeDuplicates(string s) {
            for (int i =0;i < s.length();i++){
                if(stack[top] != s[i] || top == 0 ){
                    push(s[i]);
                    cout << stack[top] << endl;
                }
                else{
                    pop();
                }
            }
            string output = "";
            for(int i = 1;i<=top;i++){
                output+= stack[i];
            }
            return output;
        }
    };