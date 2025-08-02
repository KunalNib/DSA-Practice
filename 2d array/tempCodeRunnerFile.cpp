int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=m-1;
    for(int i=0;i<n*m;){
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
            i++;
        }
        minr++;
        for(int j=minr;j<=maxr;j++){
            cout<<arr[j][maxc]<<" ";
            i++;
        }
        maxc--;
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
            i++;
        }
        maxr--;
        for(int j=maxr;j>=minr;j--){
            cout<<arr[j][minc]<<" ";
            i++;
        }
        minc++;
    }