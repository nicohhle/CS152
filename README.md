# CS152
## Running code
- example: cat primes.min | ./parser primes > primes.mil
- include program name after pipe/executable 

## Completed
- Mil code generates for:
  - fibonacci.min
  - primes.min
  - mytest.min

## Completed Errors
- Calling a function that has not been defined.
- Not defining a main function.
- Defining a variable more than once (it should also be an error to declare a variable with the same name as the MINI-L program itself)
  - NOTE: including the program name after the executable is how we catche this error
- Declaring an array of size <= 0

## Incompleted
- Incomplete code generations for:
  - for loops
  - continue
  
# Error checking remaining:
  - Using a variable without having first declared it.
  - Forgetting to specify an array index when using an array variable (i.e., trying to use an array variable as a regular integer variable).
  - Specifying an array index when using a regular integer variable (i.e., trying to use a regular integer variable as an array variable).
  - Using continue statement outside a loop.
