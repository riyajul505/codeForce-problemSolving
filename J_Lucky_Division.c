#include<stdio.h>
#include<stdbool.h>

int main(){

    bool is_lucky = true;
    int n;
    scanf("%d", &n);


    if(n%4==0){
        is_lucky = true;
    }
    else if(n%7==0){
        is_lucky = true;
    }
    else{
        
        while (n!=0)
        {
           
            if(((n%10)== 4) || ((n%10) == 7) ){
               n = (n/10);
            }
            else
            {   
                is_lucky = false;
                
                break;
            }
           
        }
        
    }


    if(is_lucky == true){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}