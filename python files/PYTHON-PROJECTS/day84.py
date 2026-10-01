def nbofdigits(N):
    digits = 0
    while N !=0 :
        digits +=1
        N=N//10
    return digits
def sumofdigits(N):
    sums = 0
    while N!=0 :
        sums += N%10
        N= N//10
    return sums
def ismultipleof9(N):
    nb = nbofdigits(N)
    s = sumofdigits(N)
    print('nb of digits:\n', nb)
    print('sum of digits:\n', s)
    if s%9==0 :
        return 1
    else:
        return 0
x = int(input('enter an integer nb:\n'))
res = ismultipleof9(x)
print('result:\n', res)

       
        