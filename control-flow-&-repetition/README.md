## Sample Input and Output

```
>>> control-flow-&-repetition git:(main) ./a.out

=== Menu-Driven Percentage Calculator For Any Number ===
1. Calculate percentage of a number (X of Y)
2. Exit
Enter your choice (1-2): 4
Invalid choice! Please select 1-2.

=== Menu-Driven Percentage Calculator For Any Number ===
1. Calculate percentage of a number (X of Y)
2. Exit
Enter your choice (1-2): 1
Enter the percentage value (X): 10
Enter the number (Y): 100 
Result: 10.00% of 100.00 is 10.00

Do you want to perform another calculation? (y/n): y

=== Menu-Driven Percentage Calculator For Any Number ===
1. Calculate percentage of a number (X of Y)
2. Exit
Enter your choice (1-2): 2
Exiting program. Goodbye!
>>> control-flow-&-repetition git:(main) 

```

### Brief explanation of program logic

#### Loop: while(1) creates an infinite loop for repeated menu execution until the user chooses to exit.
#### Conditional: switch handles menu choices cleanly. if statements validate input and handle division-by-zero.
#### Break & Continue: break exits the program when user selects 2 or chooses 'n'. continue skips invalid inputs or errors and returns to the menu.
#### Data Types: double for precise floating-point calculations with percentages.
#### Percentage Feature: Always calculates and displays output formatted to 2 decimal places (.2f) as requested.
