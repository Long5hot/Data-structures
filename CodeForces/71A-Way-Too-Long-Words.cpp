#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    
    std::string str;
    int len;
    while(n>0) {
        std::cin >> str;
        len = str.length();
        if(len > 10) {
            std::cout << str[0] << (len-2) << str[len-1] << "\n"; 
        } else {
            std::cout << str << "\n";
        }
        n--;
    }
}
