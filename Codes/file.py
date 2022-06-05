def fact(n):
   fact=1
   while(n!=0):
        fact=fact*n
        n-=1
    
   return fact
def LNZD_FACTORIAL(res):
   while(res!=0):
        if (res%10!=0):
            return res%10
            break
        
        res=res//10
n=5
res=fact(n)
print("Last Non-Zero Digit of ",n,"Factorial is ",LNZD_FACTORIAL(res))
