### Exercise 6.10
Show how to replace a continue statement by an equivalent goto statement.


Answer:
Here it is in a for loop using `continue`:
```
 for (int i = 0; i < 10; i ++) {
     if (i % 2 == 0) {
         printf("%d is divisible  by 2\n",i);
         continue;
     }
     printf("%d is not divisible  by 2\n",i);
 }
```

Here it is in a for loop using `goto`:
```
for (int i = 0; i < 10; i ++) {
        if (i % 2 == 0) {
            goto divide;
        }
        printf("%d is not divisible  by 2\n",i);
        divide:
            printf("%d is divisible  by 2\n",i);
    }
```