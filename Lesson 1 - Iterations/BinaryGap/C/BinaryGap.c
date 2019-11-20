int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    int bingap=0, i=0, cnt=0,cnt1=0, binary[100];
    
    while(N>0) {
        binary[i]=N%2;
        N=N/2;
        ++i;
    }
    for(int j=0;j<i;++j) {
    	if(binary[j]==1)
        	++cnt1;
        
        if(binary[j]==0 && cnt1>0)
            ++cnt;
        else if (cnt1>1)
        {
            if(bingap<cnt)
                bingap=cnt;
            cnt=0;
        }
    }
    
    return bingap;
}
