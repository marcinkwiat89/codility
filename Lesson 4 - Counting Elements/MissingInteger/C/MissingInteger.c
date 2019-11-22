int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
  int count[N+1],i=0;
	
	for(i=0;i<N+1;++i) {
		count[i]=0;
	}
	i=0;
	while(i<N) {
		if(A[i]>0 && A[i] < N+1)
			count[A[i]-1]=1;
		++i;
	}
	for(i=0;i<N+1;++i) {
		if(count[i]==0)
			return i+1;
	}
	return -1;
}
