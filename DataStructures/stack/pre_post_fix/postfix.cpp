#include<iostream>
#include<stack>
#include<math.h>

int postfixEval(std::string s){
    // for operands
    std::stack<int> st;

    for(int i= 0; i< s.length(); i++){
        
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }

        else{
            int operand2= st.top(); 
            st.pop();
            int operand1= st.top();
            st.pop();

            switch (s[i]){ 

                case '+' :  st.push(operand1+operand2);
                            break;
                case '-' :  st.push(operand1-operand2);
                            break;
                case '*' :  st.push(operand1*operand2);
                            break;
                case '/' :  st.push(operand1/operand2);
                            break;
                case '^' :  st.push(pow(operand1,operand2));
                            break;
                default  :  std::cout << "Invalid Operator: " << s[i];
            }
        }
    }
    return st.top();
}

int main(){

    std::cout << postfixEval("46+2/5*7+") << std:: endl;

return 0;
}