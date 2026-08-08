#include<stdio.h>
#define N 10

int key;
int linear(int flag, int array[N]);

int main(){
    int arr[N];
    printf("Enter Numbers:\n");
    for(int i = 0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter Key: ");
    scanf("%d", &key);
    linear(key, arr);
    return 0;
}

int linear(int flag, int array[N]){
    for(int i = 0; i<N; i++) {
        if(flag == array[i]) {
            printf("Key found at %d position", i+1);
            return 1;
        }
    }
    printf("Key not Found");
}
