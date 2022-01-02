/*
Stack'li çözüm aklıma gelmedi ben de döngü ile çözdüm. Müsait bir zamanda yeniden bakacağım.
*/

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int point = 0;
        int len = s.length();
        bool isParenthes;
        for (int i=0; i<len; i++)
        {   
            string c(1, s[i]);
            
            if (!c.compare("(")) 
            {
                point--;
                if (!(point == -1))
                {
                    result += c;
                }
            }
            else 
            {
                point++;
                if (!(point == 0))
                {
                    result += c;
                }
            }
        }
        return result;
    }
};