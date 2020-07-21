uinput=raw_input("Enter an integer\n")
print(uinput)
print("Input type:")
print(type(uinput))
try:
  a=int(uinput)
  print("Integer conversion")
  print(a)
  print("converted type:")
  print (type(a))
except:
  print("Type in an integer" )

