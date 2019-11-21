int solution(int A[], int N) {
    // write your code in C99
    int sum=0;
    
    for(int i=0;i<N;++i) {
    	sum ^= A[i] ^ (i+1);
	}
	return sum == 0 ? 1 : 0;
}
