class Solution {
public:
    bool isHappy(int n) {
    
    int digit;
    int sum=0;
       while(true){
sum=0;
digit=0;
while(n>0){
    digit=n%10;
    sum=sum+digit*digit;
    n=n/10;
}
if(sum==4)
return false;

if(sum==1)
return true;

n=sum;
       }
    }
};