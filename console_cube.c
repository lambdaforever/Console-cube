#include <stdio.h>

int main() {
    printf("Hello! Please specify the width of the rectangle first.\n");
    int width;
    int result_width = scanf(" %d" , &width); 
     printf("specify the length\n");
    int length;
    int result_lenght =  scanf(" %d" , &length);
    if(result_lenght != 0 && result_width != 0){
    for(int i = 0; i <= length - 1; i++){
        for(int j = 0; j <= width - 1; j++){
            printf("0");
        }
        printf("\n");
    }


    }else{
        printf("wrong data type");
    }
    return 0;
}
