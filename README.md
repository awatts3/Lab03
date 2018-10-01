# Lab03
Andrew Watts
COSC 2030
October 1 2018


step 2:
  Overflows with any n larger than 255
  output:
  Input an 'n' to sum to: (0 or negative number to end)
  255
  The sum from 1 to 255 is 32640
  Input an 'n' to sum to: (0 or negative number to end)
  256
  The sum from 1 to 256 is -32640
  
  values 256 and over cause an overflow
  
step 3:
 program output:
  Input an 'n' to sum to: (0 or negative number to end)
  1446253
  The sum from 1 to 1446253 is -2147427093
  Input an 'n' to sum to: (0 or negative number to end)
  1446252
  The sum from 1 to 1446252 is 2146093950
  
  so with a long int it overflows at an n of 1446253
  
step 4:
  output:
  Input an 'n' compute factorial of: (0 or negative number to end)
  35
  35!=inf
  Input an 'n' compute factorial of: (0 or negative number to end)
  34
  34!=2.95233e+38
  
  so 35 causes an overflow
  
step 5: 
  output: 
    Input an 'n' compute factorial of: (0 or negative number to end)
    170
    170!=7.25742e+306
    Input an 'n' compute factorial of: (0 or negative number to end)
    171
    171!=inf
    
    so with a double for the product type 171 valus cause an overflow
    
step 6:
    
  
