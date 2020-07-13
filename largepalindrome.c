#include <stdio.h>
int largestPalindrome(int n); 
int main(){
  int n=2;
  int m=3;
  //printf("Type a number:");
  //scanf("%d",&n);
  int ans;
  ans=largestPalindrome(n);
  printf("The largest palindrome for 2 is %d\n",ans);
  ans=largestPalindrome(m);
  printf("The largest palindrome for 3 is %d",ans);

}
int largestPalindrome(int n) 
{   
    
    int high = 0; 
  
    int i; 
    for (i = 1; i <= n; i++) 
    { 
        high *= 10; 
        high += 9; 
    } 
  
    
    int lows = 1 + high / 10; 
  
   
    int max_product = 0;
    int j;
    int k;  

    for (k = high; k >= lows; k--) 
    { 
        for ( j = k; j >= lows; j--) 
        { 
            
            int product = k * j; 
            if (product < max_product) 
                break; 
            int number = product; 
            int reverse = 0; 
  
             
            while (number != 0) 
            { 
                reverse = reverse * 10 + number % 10; 
                number /= 10; 
            } 
  
            
            if (product == reverse && product > max_product) 
                max_product = product; 
        } 
    } 
    return max_product; 
}
