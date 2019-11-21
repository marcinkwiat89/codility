int solution(int X, int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    unsigned int count[X],i=0,cnt=X;
    
    for(i=0;i<X;++i) {
        count[i]=1;
    }
    i=0;
    while(i<N) {
        if(A[i]<=X && count[A[i]-1]==1) {
            count[A[i]-1]=0;
            --cnt;
            
            if(cnt==0)
                return i;
        }
        ++i;
    }
    return -1;
}
