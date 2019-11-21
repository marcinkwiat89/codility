// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int N, int A[], int M) {
	struct Results result;
	result.C = (int*)malloc(sizeof(int)*N);
	result.L = N;
	
	unsigned int maxVal=0;
	
	for(int k=0;k<N;++k) {
		result.C[k]=0;
	} 
		
	for(int i=0;i<M;++i) {
		
		if(A[i]>=1 && A[i]<=N) {
			++result.C[A[i]-1];
			
			if(result.C[A[i]-1] > maxVal) {
				maxVal = result.C[A[i]-1];
			}
			continue;
		}
			
		if(A[i]==N+1) {
			for(int j=0;j<N;++j) {
				result.C[j] = maxVal;
			}
		}
	}
	return result;
}
