


def is_pal(n):
   high=0
   for i in range(1,n):
     high *=10
     high +=9
   lows=1+high/10

   max_product=0

   for k in range (high, lows+1, -1):

       for j in range (k, lows+1, -1):
         
          product= k*j
          if product < max_product:
             break
          number = product
          reverse=0
          while number!=0:
            reverse=reverse*10 +number % 10
            number /=10
          if product == reverse and product > max_product:
             max_product=product
   
   return max_product



n=3
m=4

#ans= is_pal(n)
print ("The largest palindrome for 2 is ",  is_pal(n))
#ans2= is_pal(m)
print ("The largest palindrome for 3 is",  is_pal(m))

 
