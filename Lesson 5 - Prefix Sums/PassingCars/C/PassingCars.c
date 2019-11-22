int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    unsigned int i,car_west=0,sum=0;
	
	for(i=0;i<N;++i) {
		if(A[i]==1) ++car_west;
	}
	
	for(i=0;i<N;++i) {
		A[i]==0 ? sum+=car_west : --car_west;
		if(sum>1000000000) return -1;
	}
	return sum;
}
