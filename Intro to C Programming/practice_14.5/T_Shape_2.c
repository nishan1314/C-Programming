// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int s=n-1;
//     int k=1;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=s;j++){
//             printf(" ");
//         }
//         s--;

//         for(int j=1;j<=k;j++){
//             printf("*");
//         }
//         k+=2;
//         printf("\n");
//     }
    
//     return 0;
// }



#include<stdio.h>
/**********
 *******
  *****
   ***
    **/

int main(){
    int n;
    scanf("%d",&n);
    int s=0;
    int k=(n*2)-1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        s++;

        for(int j=1;j<=k;j++){
            printf("*");
        }
        k-=2;
        printf("\n");
    }
    
    return 0;
}


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }

//         printf("\n");
//     }
//     return 0;
// }