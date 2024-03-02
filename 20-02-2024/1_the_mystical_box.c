#include<stdio.h>

int palindrome(char arr[], int low, int high){
    if(low >= high){
        return 0;
    }
    
    if(arr[low] != arr[high]){
        return 1;
    }
    else if(arr[low] == arr[high]){
        return palindrome(arr, low+1, high-1);
    }
}


int main(){
    int n;
    scanf("%d", &n);
    char string[n];
    for(int i=0; i<=n; i++){
        scanf("%c",&string[i]);
    }
    int ans;
    ans = palindrome(string, 1, n);
    if(ans == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}
