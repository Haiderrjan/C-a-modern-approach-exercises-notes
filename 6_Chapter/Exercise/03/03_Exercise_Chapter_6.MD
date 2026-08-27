### Exercise 6.03
What output does the following for statement produce?

```
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
printf("%d ", i);
```

Ouput:
`5 4 3 2`

The program will not output 1 due to because the first conditional `i > 0` ends with a comma
with another statement which the most recent statement will be executed instead. 
