 int sum = 0;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i==j){
                sum += abs(arr[i][j]);
            }
            else if(i+j == r-1){
                sum += abs(arr[i][j]);
            }
        }
    }
    printf("%d", sum);