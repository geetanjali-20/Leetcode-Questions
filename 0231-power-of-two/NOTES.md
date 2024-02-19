return n > 0 && !(n & (n-1));
if(n == 0) return 0;
while(n % 2 == 0)
n /= 2;
return n == 1;