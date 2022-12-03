#include<iostream>
#include<stack>
#include<math.h>

int prefixEval(std::string s){
    // for operands
    std::stack<int> st;

    for(int i= s.length()-1; i>= 0; i--){

        if(s[i]>= '0' && s[i]<= '9'){
            st.push(s[i]- '0');
        }
        
        else{
            int operand1= st.top();
            st.pop();
            int operand2= st.top();
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
    std::cout << prefixEval("-+7*45+20") << std:: endl;

return 0;
}