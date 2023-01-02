class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stck;

        for(int i=0; i< tokens.size(); i++){

            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" &&tokens[i]!="/"){
                stck.push(stoi(tokens[i]));
            }
            else{
                long long firstTop = stck.top();
                stck.pop();

                long long secondTop = stck.top();
                stck.pop();

                if(tokens[i] == "+"){
                    stck.push(secondTop + firstTop);
                }else if(tokens[i] == "-"){
                     stck.push(secondTop - firstTop);
                }else if(tokens[i] == "*"){
                     stck.push(secondTop * firstTop);
                }else if(tokens[i]=="/"){
                     stck.push(secondTop / firstTop);
                }      

            }


        }

        return stck.top();
        
    }
};