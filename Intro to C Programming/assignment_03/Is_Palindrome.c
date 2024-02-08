// #include<stdio.h>
// #include<string.h>
// int is_palindrome(char str[],int size){
//     char str2[1001];
//     for(int i=0;i<strlen(str);i++){
//         str2[i]=str[i];
//     }
//     strrev(str);

//     int val=strcmp(str,str2);
//     if(val==-1){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int main(){
//     char str[1001];
//     scanf("%s",str);

    
//     if(is_palindrome(str,1001)==1){
//         printf("Palindrome");
//     }else{
//         printf("Not Palindrome");
//     }
//     return 0;
// }


// #include <stdio.h>

// int is_palindrome(char str[], int size)
// {
//     char str2[size];

//     int str_len = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         str_len++;
//     }

//     for (int i = 0; i < str_len; i++)
//     {
//         str2[i] = str[i];
//     }

//     for (int i = 0, j = str_len - 1; i < (str_len / 2); j--, i++)
//     {
//         int temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }

//     int flag = 1;

//     for (int i = 0; i < str_len; i++)
//     {
//         if (str[i] != str2[i])
//         {
//             flag = 0;
//         }
//     }

//     return flag;
// }
// int main()
// {
//     char str[1001];
//     scanf("%s", str);

//     if (is_palindrome(str, 1001) == 1)
//     {
//         printf("Palindrome");
//     }
//     else
//     {
//         printf("Not Palindrome");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int is_palindrome(char str[], int size) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }

    return 1; // Palindrome
}

int main() {
    char str[1001];
    scanf("%s", str);

    if (is_palindrome(str, 1001) == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
