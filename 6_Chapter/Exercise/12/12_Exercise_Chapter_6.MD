### Exercise 6.12
The following "prime-testing" loop appeared in section 6.4 as an example:

```
for (d = 2; d < n; d++)
if (n % d == 0)
break;
```

This loop isn't very efficient. It's not necessary to divide n by all numbers 
between `2` and `n-1` to determine whether it's prime. In fact, we need only check 
divisors up to the square root of `n`. Modify the loop to take advantage of this 
fact. Hint: Don't try to compute the square root of `n``; instead, 
compare `d * d` with `n`.

Answer: 
I was confused with the sentence so looked it up.

```
for (d = 2; d * d <= n; d++)
    if (n % d == 0)
        break;
```

So it does fewer checks as going one by one will take longer 
rather than timing the number by itself to find the prime. 
e.g:
if number is 19 it will have to do 
```
2 x 2 = 4 <= 19 true -> checks to see if divisble by 19 
3 x 3 = 9 <= 19 true -> checks to see if divisble by 19
4 x 4 = 16 <= 19 true -> checks to see if divisble by 19
5 x 5 = 25 <= 19 false -> Stops the program

tell us that 19 is a prime number
```
