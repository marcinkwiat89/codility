int abs(int a) {
	return a>0 ? a : -a;
}

int solution(int A[], int N) {
    // write your code in C99
    unsigned int sumL=0,sumR=0, diff=~0, temp=0;
    
    for(int i=0;i<N;++i) {
    	sumR += A[i];
	}
	
	for(int i=0;i<N-1;++i) {
    	sumR -= A[i];
    	sumL += A[i];
    	temp = abs(sumL - sumR);
    	
    	if(temp<diff ) {
    		diff=temp;
    	}
	}
	return diff;
}
