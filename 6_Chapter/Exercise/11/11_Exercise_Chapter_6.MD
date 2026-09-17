### Exercise 6.11

What output does the following program fragment produce?
    
```
sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2)
            continue;
        sum += i;
    }
    printf("%d\n", sum);
```

Answer:

The output produces is `20`. 