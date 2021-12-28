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
            stack[top++] = c;
        }
        
    }
    char pop(){
        if(top==0){
            cout << "stack bos." << endl;
            return -1;
        }
        return stack[--top];
    }
    string removeOuterParentheses(string s) {
        string output = "";
        int inParenthesesNumber = 0;
        int outParenthesesNumber = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                inParenthesesNumber++;     
            }
            else{
                outParenthesesNumber++;
            }
            push(s[i]);
            if (inParenthesesNumber == outParenthesesNumber){
                for (int j=1; j<top-1;j++){
                    output += stack[j];
                }
                for(int k = 0;k<top;){
                    pop();
                }
                
            }
        }
        return output;
    }
};