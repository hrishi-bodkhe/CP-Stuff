int power(long long x, long long n) {
   long long m = 1000000007;
 
   if (x == 0)
       return 0;
 
   x = x % m;
   int res = 1;
 
   while (n > 0) {
       if (n & 1) {  //n is odd
           res = (res * x) % m;
           --n;
       } else {
           x = (x * x) % m;
           n >>= 1;
       }
   }
 
   return res;
}
