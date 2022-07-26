bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
int FindDivisibilePrime(int a ,int b, int n){
    int answer = 0;
    for(int i = ; i < b ;++i){
        if(isPrime(n) &&  (getSum(n)%n == 0))
        answer++;
    }
    return answer;
}