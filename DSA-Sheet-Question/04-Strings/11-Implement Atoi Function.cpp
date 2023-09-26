#include<bits/stdc++.h>
using namespace std;

//1st method

bool isDigit(char ch){
    return ch >='0' && ch<='9';
}

int createAtoi(string s) {
    // Write your code here.
    const int len = s.size();
    if(len == 0) return 0;
    int index = 0;
    while(index<len && s[index] == ' '){
        ++index;
    }
    if(index == len) return 0;
    char ch;
    bool isNegative = (ch=s[index])=='-';
    if(isNegative || ch == '+'){
        ++index;
    }
    const int maxLimit = INT_MAX/10;
    int result = 0;
    while(index<len && isDigit(ch=s[index])){
        int digit = ch-'0';
        if(result>maxLimit || (result == maxLimit && digit > 7)){
            return isNegative ? INT_MIN : INT_MAX;
        }
        result = (result*10)+digit;
        ++index;
    }
    return isNegative ? -result:result;
}

//2nd method using stringstream

int createAtoi(string s) {
    // Write your code here.
    stringstream str(s);
    int i = 0;
    str>>i;
    return i;
}