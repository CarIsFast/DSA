// in this code we have canceled teh multiples of the prime
// numbers till the n; so that we dont have to check wheather they are prime or not

// time complexcity is n*log(log(n))

/*class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n+1, true);
        int cnt=0;
        prime[0] = prime[1] = false;

        for(int i=2; i<n; i++){
            if(prime[i]){
                cnt++;
                for(int j=2*i; j<n; j=j+i){
                    prime[j]=false;
                }
            }
        }
        return cnt;
    };
}*/