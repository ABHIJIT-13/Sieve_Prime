 
#include<iostream.h>
void main(){
		int N;
		cin>>N;
 // Generate isPrime List less equal than N
  		vector<bool> isPrime(N + 1, true);
        isPrime[0] = false;
        isPrime[1] = false;
        
        // Sieve of Erastothenes
        for(int i = 2; i <= N; i++) {
            if (!isPrime[i]) continue;
            if (i > N / i) break;
            for (int j = i * i; j <= N; j += i) isPrime[j] = false;
        }

    	for(int i=0;i<N+1;i++){
    		cout<<isPrime[i]<<" "<<i;
    		cout<<endl;
    	}
}