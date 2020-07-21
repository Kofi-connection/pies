ones=dict()
ones['1']='one'
ones['2']='two'
ones['3']='three'
ones['4']='four'
ones['5']='five'
ones['6']='six'
ones['7']='seven'
ones['8']='eight'
ones['9']='nine'
ones['10']='ten'

tens=dict()
tens['11']='eleven'
tens['12']='twelve'
tens['13']='thirteen'
tens['14']='fourteen'
tens['15']='fifteen'
tens['16']='sixteen'
tens['17']='seventeen'
tens['18']='eighteen'
tens['19']='ninteen'
tens['20']='twenty'
tens['30']='thirty'
tens['40']='forty'
tens['50']='fifty'
tens['60']='sixty'
tens['70']='seventy'
tens['80']='eighty'
tens['90']='ninety'


ip= raw_input('Enter a number less than 100:')
print (ip)
try:
 if ip in ones:
   print('The number is')
   print(ones[ip])
 elif ip in tens:
   print('The number is')
   print(tens[ip])
 else:
   
   print(tens[ip[0]+'0']+" "+ones[ip[1]])

except:
 print('Number not in the dictionary') 
