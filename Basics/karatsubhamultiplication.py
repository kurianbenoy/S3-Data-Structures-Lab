def karatsuba(x,y):
    """Function to multiply 2 numbers in a more efficient manner than the grade school algorithm"""
    if len(str(x)) == 1 or len(str(y)) == 1:
        return x*y
    else:
        n = max(len(str(x)),len(str(y)))
        nby2 = n / 2
        
        a = x / 10**(nby2)
        b = x % 10**(nby2)
        c = y / 10**(nby2)
        d = y % 10**(nby2)
        
        # ac = karatsuba(a,c)
        # bd = karatsuba(b,d)
        # ad_plus_bc =lskaratsuba(a+b,c+d) - ac - bd
        z0 = b*d
        z1 = a*d + b*c
        z2 = a*c


            # this little trick, writing n as 2*nby2 takes care of both even and odd n
        prod = z2 * 10**(2*nby2) + (z1 * 10**nby2) + z0

        return prod


a =karatsuba(1531,2890)
print(a)