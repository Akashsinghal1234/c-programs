#include <stdio.h>
int main(){
    int num ;
    printf("Enter the number of students : ");
    scanf("%d" , &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d" , &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d " , arr[i]);
    }
    int len = sizeof(arr); 
    printf("%d" , len);
    
}