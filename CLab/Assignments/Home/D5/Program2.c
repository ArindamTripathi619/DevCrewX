#include <stdio.h>
int main() {
    char c;
    printf("Enter the a character : ");
    scanf("%c",&c);
    if(c>='0'&&c<='9') {
        printf("The entered character %c is a digit.\n",c);
    }else if(c>='a'&&c<='z'||c>='A'&&c<='Z') {
        printf("The entered character %c is a alphabet.\n",c);
    } else {
        printf("The entered character %c is a special character.\n",c);
    }
    return 0;
}