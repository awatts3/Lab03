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

with a float type:

The sum - 1 for 9 values:0

Input an 'n' sum the 1/n values of: (0 or negative number to end)
10

The sum - 1 for 10 values:1.19209e-07

n of 10 gives a wrong answer. I think this is because data types only store so many decimal places so the computer can only store values that are close to the actual value. Logicaly the answer should be zero but the program gives a very small number because the sum couldn't add to exatly 0
    
with a double type:

Input an 'n' sum the 1/n values of: (0 or negative number to end)
8

The sum - 1 for 8 values:0

Input an 'n' sum the 1/n values of: (0 or negative number to end)
9

The sum - 1 for 9 values:2.22045e-16

an input of 9 gives a wrong answer. the reason for error is the same as above but this 'wrong' answer is much closer to zero because doubles store more decimal places than floats


step 7.

the given code outputs:

i = 3.4

i = 3.6

i = 3.8

i = 4

i = 4.2

i = 4.4

The error is that it is printing out 4.4 when this value should stop the loop. I'm not sure what the reason is but when i is a float it isn't recognized as being  equal to 4.4 by the for loop even though it prints a value of 4.4. Aparently a float 4.4 is seen as less than 4.4 by the computer.

step 8:

the given code outputs:

i = 3.4

i = 3.6

i = 3.8

i = 4

i = 4.2

with a double the error does not occur as the program stops before 4.4 is printed
  
