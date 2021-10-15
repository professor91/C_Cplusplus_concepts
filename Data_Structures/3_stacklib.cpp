#include<iostream>
#include<stack>

void reverseSentence(std:: string s){
    std:: stack<std:: string> st;

    // reversing
    for (int i=0; i<s.length(); i++){
        std:: string word= "";

        while (s[i] != ' ' && i < s.length()){
            word += s[i];
            i++;
        }

        st.push(word);
    }

    // print
    while(!st.empty()){
        std:: cout << st.top() << " ";
        st.pop();
    }
}

int main(){
    std:: string s= "Aur bhai, kaisa hai?";

    reverseSentence(s);

return 0;
}