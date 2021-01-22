/* Използвайте do-while цикъл, за да напишете функцията void itoa(int n, char s[]), 
която преобразува число в символен низ (обратната функция на atoi). do-while цикълът 
e необходим, тъй като в масива с ще трябва да се постави поне един символ, дори ако 
n е нула. Ако n = 123, за да вземем последната цифра, трябва да разделим n по модул(%) 
на основата на бройната система 10. За да получите чаръктър число, трябва да съберете
резултата с '0'. За да вземете следващото число, трябва да разделите n на 10. Това продължава 
докато n е различно от нула. Това генерира низа в обратен ред – 321, затова обърнете низа. */

#include <stdio.h>

void itoa(int n, char s[]); 

int main(void){
    char s[1000];
    unsigned n;
    printf("Give it a shot: ");
    scanf("%u", &n);
    itoa(n,s);
    return 0;
}

void itoa(int n, char s[]){
    char str[1000];
    int cnt = 0;
    do{
        char ch = (char)(n%10) + '0';
        n /= 10;
        str[cnt] = ch;
        cnt++;
    } while(n != 0);
    
    //reverse the string 
    int i = 0;
    for(cnt = cnt - 1; cnt >= 0; cnt--){
        s[i] = str[cnt];
        i++;
    }
    
    s[i+1] = '\0';
    printf("reversed str is %s\ncorrect str is %s\n",str, s);
}
