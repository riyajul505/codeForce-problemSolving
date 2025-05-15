#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int testCase;
    scanf("%d", &testCase);

    for(int i=1; i<=testCase; i++){

        // 
        long long int m;
        scanf("%lld", &m);
        

        // multlipier
        long long int a,b,c;
        scanf("%lld %lld %lld", &a, &b, &c);
        

        if(m==0){
            printf("0\n");
            continue;
        }
        else if((a*b)*(c)>m){
            printf("-1\n");
            continue;
        }

        bool found = false;
        long long int mul = (a*b*c);
        long long int k = m/mul;
       if((m%mul!=0)){
            printf("-1\n");
       }
       else{
            printf("%lld\n", k);
       }
        

        // for(int k=1; k<(m/2); k++){
        //     if((a*b)*(c*k) == m){
        //         num = k;
        //         found = true;
        //         break;
        //     }
        // }



        // if(found == true){
        //     printf("%d\n", (m/((a*b)*c)));
        // }
        // else{
        //     printf("-1\n");
        // }

    }
    
    return 0;
}
