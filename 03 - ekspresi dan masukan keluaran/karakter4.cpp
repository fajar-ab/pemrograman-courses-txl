#include <cstdio>
#include <string>

using namespace std;

char buff[1001];

int main() {

    printf("char buff: ");
    scanf("%[^\n]", buff);

    string s = buff;
    printf("string s:\"%s\"", s.c_str());
}