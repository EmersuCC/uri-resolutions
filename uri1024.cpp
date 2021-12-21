#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using std::getline;

int main(){

std::string str, str1;
int i, n, half;
size_t len;
std::cin >> n;
std::cin.ignore();

while(n>=0){
    getline(std::cin, str);
    len = str.length();
    for(i = 0; i<len; i++){
        if(islower(str[i]) || isupper(str[i])){
            str[i] = str[i] + 3;
        }
    }

    reverse(str.begin(), str.end());

    half = len/2;

    for(i = half; i<len; i++){
        str[i] = str[i] - 1;
    }
    
    
    std::cout << str << std::endl;
    n--;
    if(n == 0)
        return 0;
}
 
}