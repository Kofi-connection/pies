
s=0
for x in range(1000):
  if x%3==0:
    s=x+s
  elif x%5==0:
    s=x+s

else:
 print ('The sum is', s)


