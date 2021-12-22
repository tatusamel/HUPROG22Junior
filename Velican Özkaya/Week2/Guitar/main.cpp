#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    int numberOfTones;
    int frets;
    cin>>numberOfTones>>frets;
    stack string1;
    stack string2;
    stack string3;
    stack string4;
    stack string5;
    stack string6;
    int string;
    int fret;
    int output=0;
    for(int i=0;i<numberOfTones;i++){
        cin>>string>>fret;
        stackNode * node=new stackNode(fret);
        if(string==1){
            if(string1.peek()<fret){
                output++;
                string1.push(node);
            }
            else{
                while(true){
                    if(string1.peek()<fret){
                        output++;
                        string1.push(node);
                        break;
                    }
                    else if(string1.peek()==fret){
                        break;
                    }
                    else{
                        string1.pop();
                        output++;
                    }
                }
            }
        }
        else if(string==2){
            if(string2.peek()<fret){
                output++;
                string2.push(node);
            }
            else{
                while(true){
                    if(string2.peek()<fret){
                        output++;
                        string2.push(node);
                        break;
                    }
                    else if(string2.peek()==fret){
                        break;
                    }
                    else{
                        string2.pop();
                        output++;
                    }
                }
            }
        }
        else if(string==3){
            if(string3.peek()<fret){
                output++;
                string3.push(node);
            }
            else{
                while(true){
                    if(string3.peek()<fret){
                        output++;
                        string3.push(node);
                        break;
                    }
                    else if(string3.peek()==fret){
                        break;
                    }
                    else{
                        string3.pop();
                        output++;
                    }
                }
            }
        }
        else if(string==4){
            if(string4.peek()<fret){
                output++;
                string4.push(node);
            }
            else{
                while(true){
                    if(string4.peek()<fret){
                        output++;
                        string4.push(node);
                        break;
                    }
                    else if(string4.peek()==fret){
                        break;
                    }
                    else{
                        string4.pop();
                        output++;
                    }
                }
            }
        }
        else if(string==5){
            if(string5.peek()<fret){
                output++;
                string5.push(node);
            }
            else{
                while(true){
                    if(string5.peek()<fret){
                        output++;
                        string5.push(node);
                        break;
                    }
                    else if(string5.peek()==fret){
                        break;
                    }
                    else{
                        string5.pop();
                        output++;
                    }
                }
            }
        }
        else if(string==6){
            if(string6.peek()<fret){
                output++;
                string6.push(node);
            }
            else{
                while(true){
                    if(string6.peek()<fret){
                        output++;
                        string6.push(node);
                        break;
                    }
                    else if(string6.peek()==fret){
                        break;
                    }
                    else{
                        string6.pop();
                        output++;
                    }
                }
            }
        }
    }
    cout<<output<<endl;
    return 0;
}
