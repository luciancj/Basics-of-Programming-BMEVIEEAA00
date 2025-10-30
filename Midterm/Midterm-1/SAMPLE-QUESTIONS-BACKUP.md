# Sample Questions - Midterm 1

## Table of Contents

- [Exercise 1: Arrays and Basic Operations](#exercise-1-arrays-and-basic-operations) (36 problems)
- [Exercise 2: Functions and Mathematical Problems](#exercise-2-functions-and-mathematical-problems) (17 problems)
- [Exercise 3: Sentinel Values and Data Processing](#exercise-3-sentinel-values-and-data-processing) (31 problems)
- [Exercise 4: Structures and Data Management](#exercise-4-structures-and-data-management) (28 problems)

---

## Exercise 1: Arrays and Basic Operations

### Problem 1.1
[Solution](Exercise-1/problem_1_1.c)

Write a C program that defines a char array of 25, fills it with user input and prints those characters that are digits from 0 to 9.

### Problem 1.2
[Solution](Exercise-1/problem_1_2.c)

Write a C program that defines a float array of 12, fills it with user input and prints those positive floats that are less than 0.5.

Write a C program that defines a float array of 10, fills it with user input and prints those floats that are negative, but greater than -100.

Write a C program that defines a float array of 13, fills it with user input and prints those floats whose integer part is at least 0.5.

Write a C program that defines a double array of 12, fills it with user input and prints those positive doubles that are less than or equal to 50.0.

Write a C program that defines a float array of 189, fills it with user input and prints those floats that are greater than the first element of the array.

Write a C program that defines an integer array of 10, fills it with user input and prints those values that can be divided by 5, but cannot be divided by 3.

Write a C program that defines an integer array of 100, fills it with user input and prints those values that can be divided by 3, but cannot be divided by 5!

Write a C program that defines an integer array of 14, fills it with user input and prints those integers that are divisible by 4, but not divisible by 3.

Write a C program that defines an integer array of 12, fills it with user input and prints those integers that are even and greater than 3.

Write a C program that defines an integer array of 15, fills it with user input and prints those integers that are divisible by 5 but not divisible by 3.

Write a C program that defines a char array of 20, fills it with user input and prints those characters that are vowels (a e i o u).

Write a C program that defines a char array of 30, fills it with user input and prints those characters other than 'A' and 'S'.

Write a C program that defines a float array of 15, fills it with user input and prints those floats that are greater than 3.14, but less than 7.12.

Write a C program that defines a char array of 26, fills it with user input and prints those characters that are uppercase letters. (A-Z)

Write a C program that defines an integer array of 8, fills it with user input and prints those integers that are divisible by 3 and by 7.

Write a C program that defines a char array of 22, fills it with user input and prints those characters that are letters a-z or A-Z.

Write a C program that defines a double array of 110, fills it with user input and prints those doubles that are less than the last element of the array.

Write a C program that defines an array of 10 to store characters, fills it with user input and prints those values that are not one of 'A', 'B' or 'C'!

Write a C program that defines an integer array of 12, fills it with user input and prints those integers that are divisible by 7, but not divisible by 3.

Write a C program that defines an integer array of 10, fills it with user input and prints those integers that are not divisible by 2 and not divisible by 3.

Write a C program that defines a double array of 14, fills it with user input and prints those doubles that are between -10.0 and 10.0 inclusive.

Write a C program that defines an integer array of 10, fills it with user input and prints those integers that are greater than the first element of the array.

Write a C program that defines an array of 100 to store characters, fills it with user input and prints those values that are not one of 'a', 'b' or 'c'!

Write a C program that defines a array of 100 to store real numbers, fills it with user input and prints those values that are greater than 100, but less than 150!

Write a C program that defines an integer array of 10, fills it with user input and prints those integers that are odd and less than 100.

Write a C program that defines a char array of 18, fills it with user input and prints those characters that are consonants (letters other than lowercase vowels a,e,o,i,u).

Write a C program that defines a array of 10 to store real numbers, fills it with user input and prints those values that are greater than 10, but less than 50!

Write a C program that defines a char array of 24, fills it with user input and prints those characters that are digits or uppercase letters.

Write a C program that defines a float array of 14, fills it with user input and prints those floats whose integer part is less than 0. (0 is excluded!)

Write a C program that defines an integer array of 10, fills it with user input and prints those integers that are greater than 5, but less tan 100.

Write a C program that defines a double array of 12, fills it with user input and prints those positive doubles that are less than 100.0.

Write a C program that defines an integer array of 10, fills it with user input and prints those integers that are less than the last element of the array.

Write a C program that defines a char array of 20, fills it with user input and prints those characters that are non-alphabetic. (a-z, A-Z)

Write a C program that defines an integer array of 11, fills it with user input and prints those integers that are between 10 and 20 inclusive.

Write a C program that defines a char array of 16, fills it with user input and prints those characters that are lowercase letters. (a-z)


Exercise: 2
Write a C program, that finds the first 5 factorial primes, we call those p numbers factorial primes that are primes, and p=n!-1 or p=n!+1!
MINIMUM:
• Write a function that receives a number and returns with 1 if it is a prime, 0 if not
Furter tasks:
• Write a program, that uses the function to print out the first 5 factorial primes!

Write a C program that finds the first 6 perfect numbers. A perfect number is a positive integer n equal to the sum of its proper divisors (for example, 6 = 1+2+3).
MINIMUM:
- Write a function that returns whether n is perfect.
FURTHER TASK:
- Use that function to print the first 6 perfect numbers.

Write a C program, that finds the first 10 prime triplets, we call those p numbers prime triplets that are primes, and (p + 2, p + 4) or (p + 2, p + 6) are primes too!
MINIMUM:
• Write a function that receives a number and returns with 1 if it is a prime, 0 if not
Further tasks:
• Write a program, that uses the function to print out the first 10 primes that make a triplet!

Write a C program that prints all numbers up to a user-specified limit L whose digits are strictly ascending. Digits of n are strictly ascending if each digit is less than the next (for example, 1347).
MINIMUM:
- Write a function that returns whether the digits of a given integer ascend. (tip: in reverse the digits descending)
FURTHER TASK:
- Read L and print every n ≤ L that satisfies the condition.

Write a C program, that finds the first 10 sexy primes, we call those p numbers sexy primes that are primes, and (p + 4) is also a prime!
MINIMUM:
• Write a function that receives a number and returns with 1 if it is a prime, 0 if not
Further tasks:
• Write a program, that uses the function to print out the first 10 sexy primes in tabular format!

Find the first 100 primes without modulo operator (aka: create your own modulo function)
MINIMUM:
• Write a function that receives two numbers and returns with the remainder if you divide the first number by the second!
Further tasks:
• Find the first 100 primes using this function!

Write a C program that finds the first 10 Lucas numbers. The Lucas sequence starts with 2 and 1, and each term is the sum of the two preceding terms. 2,1,3,4,7,11...
MINIMUM:
- Write a function that returns the nth Lucas number.
FURTHER TASK:
- Use that function to print the first 10 Lucas numbers.

Write a C program, that finds least common multiple (LCM) of two number prompt by the user! LCM (Least Common Multiple) of two numbers is the smallest number which can be divided by both numbers.
MINIMUM:
• Write a function that receives two numbers and returns 1 if the first number is dividable (without remainder) by the second, 0 if not
Further tasks:
• One common multiple of a and b is a*b. If you divide it by the greatest number that can divide a and b, you get the LCM. Use this method to find the LCM of two numbers prompt by the user!

Write a C program that prints all numbers up to a user-specified limit L whose digit-sum equals the product of its digits. For n, digit-sum(n) is sum of digits and digit-product(n) is product of digits.
MINIMUM:
- Write functions that return digit-sum and digit-product of a given integer.
FURTHER TASK:
- Read L and print every n ≤ L for which digit-sum(n) is equal to digit-product(n).

Write a C program that prints all numbers up to a user-specified limit L whose digit-sum is even. The digit-sum of n is the sum of its decimal digits.
MINIMUM:
- Write a function that returns the digit-sum of a given integer.
FURTHER TASK:
- Read L and print every n ≤ L for which the digit-sum is even.

Write a C program that finds all automorphic numbers between 10 and 100. An automorphic number is n whose square ends with the digits of n (for example, 25² = 625 ends in 25).
MINIMUM:
- Write a function that returns whether n is automorphic.
FURTHER TASK:
- Use that function to print all the 2 digit automorphic numbers.

Write a C program that defines an integer array of 10, fills it with user input and prints the LCM of all elements. LCM (Least Common Multiple) of two numbers is the smallest number which can be divided by both numbers.
MINIMUM:
- Write a function that returns the LCM of two integers.
FURTHER TASK:
- Use that function to compute and print the LCM of the entire array.

Write a C program that defines an integer array of 10, fills it with user input and prints the GCD (Greatest common divisor) of all elements.
MINIMUM:
- Write a function that returns the GCD of two integers.
FURTHER TASK:
- Use that function to compute and print the GCD of the entire array.

Write a C program, that finds maximum prime gap on [1,1.000.000] range. Prime gap is the difference between two successive prime numbers!
MINIMUM:
• Write a function that receives a number and returns with 1 if it is a prime, 0 if not
Further tasks:
• Write a program, that uses the function to print out the maximum prime gap on the interval!

Write a C program that finds the first 8 Pell numbers. The Pell sequence starts with 0 and 1, each term satisfies P_n  =  2 * P_(n-1) + P_(n-2)
MINIMUM:
- Write a function that returns the nth Pell number.
FURTHER TASK:
- Use that function to print the first 8 Pell numbers.

Write a C program that finds the first 10 triangular numbers. A triangular number is n = k·(k+1)/2 for some integer k (1, 3, 6, 10, …).
MINIMUM:
- Write a function that returns whether n is triangular.
FURTHER TASK:
- Use that function to print the first 10 triangular numbers.

Write a C program that prints all numbers up to a user-specified limit L whose digit-sum equals 10. The digit-sum of n is the sum of its decimal digits.
MINIMUM:
- Write a function that returns the digit-sum of a given integer.
FURTHER TASK:
- Read L and print every n ≤ L for which digit-sum(n) is equal to 10.


Exercise: 3
Your task is to read 100 real numbers from the user and print the array in ascending (Bonus for 1 point: and descending) order
MINIMUM:
• Write a function that receives an array and finds the index of the minimal element and returns with that
Further tasks:
• Use the function above to sort the array by finding the minimum element and place it to its right place by swapping.
• Print out the array in ascending (and descending) order!

Write a C program that reads an unknown number of student attendance percentages (integers) until the user enters -1 (sentinel), counts the categories (poor <75%, satisfactory 75–90%, excellent >90%), and computes the average attendance.
MINIMUM:
• Write a function that takes one percentage and returns 1 for poor, 2 for satisfactory, 3 for excellent, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and sum percentages, then print each category count and the average attendance.

Write a C program that reads an unknown number of network latencies (integers, in ms) until the user enters -1 (sentinel), counts the categories (good <50ms, acceptable 50–100ms, poor 101–200ms, unacceptable >200ms), and identifies the minimum latency.
MINIMUM:
• Write a function that takes one latency and returns 1 for good, 2 for acceptable, 3 for poor, 4 for unacceptable, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and track the smallest latency, then print each category count and the best latency.

In a water-reservoir, sensors report one water level per hour as a double (m) from standard input. Input ends at sentinel -1.0. Write a C program that counts intervals and computes total inflow (rises) and total outflow (drops).
MINIMUM:
• Write a function that takes two levels L1 and L2 and returns L2 - L1.
FURTHER TASK:
• In main(), read the first L, then loop reading each next L until -1.0, call your function, sum positive returns as inflow, sum absolute negative returns as outflow, count intervals, and print “Intervals: N Inflow: I.II m Outflow: O.OO m”.

Write a C program that reads an unknown number of stock-price changes (floats, in %) until the user enters 999.0 (sentinel), counts the categories (drop <-1%, stable -1%–1%, rise >1%), and finds the maximum change.
MINIMUM:
• Write a function that takes one percentage change and returns 1 for drop, 2 for stable, 3 for rise, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and track the largest change, then print each category count and the largest change percentage.

During a car test-drive, your onboard computer logs one integer speed (km/h) per second from standard input. Input ends at sentinel -1. Write a C program that counts intervals and computes total deceleration (sum of all drops in speed).
MINIMUM:
• Write a function that takes two speeds v1 and v2 and returns max(0, v1 - v2).
FURTHER TASK:
• In main(), read the first v, then loop reading each next v until -1, call your function on previous and current, sum all returns, count intervals, and print “Intervals: N Total decel: D km/h”.

Write a C program that reads an unknown number of sales amounts (integers, in $) until the user enters -1 (sentinel), counts the categories (low <$100, medium $100–499, high $500–999, premium ≥$1000), and finds the maximum sales amount.
MINIMUM:
• Write a function that takes one sales amount and returns 1 for low, 2 for medium, 3 for high, 4 for premium, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and track the maximum, then print each category count and the maximum sale.

During day-trading, you log one stock price per minute as a double from standard input. Input ends at sentinel -1.0. Write a C program that counts intervals and finds the largest percentage change.
MINIMUM:
• Write a function that takes two prices p1 and p2 and returns ((p2 - p1)/p1)*100.0.
FURTHER TASK:
• In main(), read the first p, then loop reading each next p until -1.0, call your function, track max positive and max negative returns, count intervals, and print “Intervals: N Max rise: R.RR% Max drop: D.DD%”.

Write a C program that reads an unknown number of daily rainfall amounts (floats, in mm) until the user enters -1.0 (sentinel), counts the categories (no rain 0, light 0.1–10, moderate 10.1–50, heavy >50), and finds the maximum rainfall.
MINIMUM:
• Write a function that takes one rainfall amount and returns 1 for no rain, 2 for light, 3 for moderate, 4 for heavy, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and track the maximum, then print each category count and the heaviest rainfall.

Write a C program, that finds the first 10 sexy primes, we call those p numbers sexy primes that are primes, and (p + 4) is also a prime!
MINIMUM:
• Write a function that receives a number and returns with 1 if it is a prime, 0 if not
Further tasks:
• Write a program, that uses the function to print out the first 10 sexy primes in tabular format!

Write a C program that reads an unknown number of credit-scores (integers) until the user enters -1 (sentinel), counts the categories (poor <580, fair 580–12129, good 1270–739, excellent ≥740), and computes the average credit score.
MINIMUM:
• Write a function that takes one score and returns 1 for poor, 2 for fair, 3 for good, 4 for excellent, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and sum scores, then print each category count and the average credit score.

Write a C program that reads an unknown number of water consumption values (floats, in liters) until the user enters -1.0 (sentinel), counts the categories (low <2.0L, adequate 2.0–3.5L, high >3.5L), and identifies the minimum consumption.
MINIMUM:
• Write a function that takes one consumption value and returns 1 for low, 2 for adequate, 3 for high, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and track the smallest consumption, then print each category count and the lowest consumption.

Write a C program that reads an unknown number of float BMI values until the user enters 0.0 (sentinel), counts the categories (underweight <18.5, normal 18.5–24.9, overweight 25.0–29.9, obese ≥30.0), and computes the average BMI.
MINIMUM:
• Write a function that takes one BMI and returns 1 for underweight, 2 for normal, 3 for overweight, 4 for obese, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and sum BMIs, then print each category count and the average BMI.

Write a C program that finds all automorphic numbers between 10 and 100. An automorphic number is n whose square ends with the digits of n (for example, 25² = 625 ends in 25).
MINIMUM:
- Write a function that returns whether n is automorphic.
FURTHER TASK:
- Use that function to print all the 2 digit automorphic numbers.

Write a C program that finds all automorphic numbers between 10 and 100. An automorphic number is n whose square ends with the digits of n (for example, 25² = 625 ends in 25).
MINIMUM:
- Write a function that returns whether n is automorphic.
FURTHER TASK:
- Use that function to print all the 2 digit automorphic numbers.

During an EV test, you log battery voltage per minute as a double (V) from standard input. Input ends at sentinel -1.0. Write a C program that counts intervals and finds the maximum voltage drop.
MINIMUM:
• Write a function that takes two voltages v1 and v2 and returns max(0.0, v1 - v2).
FURTHER TASK:
• In main(), read the first v, then loop reading each next v until -1.0, call your function, track the maximum return, count intervals, and print “Intervals: N Max drop: D.DD V”.

Write a C program that reads an unknown number of CPU-usage percentages (integers) until the user enters -1 (sentinel), counts the categories (low <20%, moderate 20–120%, high >120%), and finds the maximum CPU usage.
MINIMUM:
• Write a function that takes one CPU usage percentage and returns 1 for low, 2 for moderate, 3 for high, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and track the highest usage, then print each category count and the peak CPU usage.

Write a C program that reads an unknown number of disk-usage percentages (integers, 0–100) until the user enters -1 (sentinel), counts the categories (safe <50%, caution 50–80%, critical >80%), and computes the average disk usage.
MINIMUM:
• Write a function that takes one percentage and returns 1 for safe, 2 for caution, 3 for critical, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and sum percentages, then print each category count and the average usage.

Basics of Programming test results:
In this TEST there are four tasks the first worth 6, the second 10, the third 12 and the last one 14 points. Your task will be to create statistics about the grades the students get.
MINIMUM:
• Write a function that reads a line from standard input that contains the received points for the four tasks separated by comma and returns the grade (the grade limits are 20-2, 25-3 30-4 35-5). If there are no more points to process, the user types -1,0,0,0 (sentnel) in this case the function should return with -1.
Further tasks:
• Create a program that reads the points from the user till it is terminated and calculates the statistics of marks, the number of fails, passes etc. and prints to the console

Your task is to read 100 real numbers from the user and print the array in ascending (Bonus for 1 point: and descending) order
MINIMUM:
• Write a function that receives an array and finds the index of the minimal element and returns with that
Further tasks:
• Use the function above to sort the array by finding the minimum element and place it to its right place by swapping.
• Print out the array in ascending (and descending) order!

Write a C program that reads an unknown number of stock-price changes (floats, in %) until the user enters 999.0 (sentinel), counts the categories (drop <-1%, stable -1%–1%, rise >1%), and finds the maximum change.
MINIMUM:
• Write a function that takes one percentage change and returns 1 for drop, 2 for stable, 3 for rise, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and track the largest change, then print each category count and the largest change percentage.

On an alpine-weather station, you record one temperature per hour as a double (°C) from standard input. Input ends when you read the sentinel 999.0. Write a C program that counts intervals and finds the maximum temperature swing (absolute change).
MINIMUM:
• Write a function that takes two temperatures t1 and t2 and returns the absolute value of (t2 - t1).
FURTHER TASK:
• In main(), read the first t, then loop reading each next t until 999.0, call your function, track the maximum return, count intervals, and print “Intervals: N Max swing: S.SS °C”.

During a long-distance hike, your GPS watch outputs one 2D coordinate per minute as two space-separated doubles x y. Input ends when you read the sentinel -1 -1. Write a C program that counts the number of points processed and calculates the total distance hiked.
MINIMUM:
• Write a function that takes two points (x1,y1) and (x2,y2) and returns the Euclidean distance between them.
FURTHER TASK:
• In main(), read the first point, then loop reading each next x y until -1 -1, call your distance function on the previous and current point, sum all distances, count points, and on termination print “Points: N Total distance: D.DD m”.

On a treadmill, your running app outputs one space-separated speed per minute as a double (m/s). Input ends when you read 0.0. Write a C program that counts intervals and computes total distance using the trapezoidal rule (assume one-minute intervals).
MINIMUM:
• Write a function that takes two speeds v1 and v2 and returns ((v1 + v2)/2.0) * 60.0.
FURTHER TASK:
• In main(), read the first speed, then loop reading each next v until 0.0, call your function on previous and current, sum all returns, count intervals, and print “Intervals: N Distance: D.DD m”.

Write a C program that reads an unknown number of integer temperatures (in °C) until the user enters 999 (sentinel), counts the categories (frozen <-20°C, icy-20–0°C, cool, 0–10°C, mild 112–25°C, hot >25°C), and calculates the average of all temperatures.
MINIMUM:
• Write a function that takes one temperature and returns 1 for frozen, 2, for icy, 3 for cool, 4 for mild, 5 for hot, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until the sentinel, call your function to tally category counts and sum all values, then print each category count and the average temperature.

Write a C program that reads an unknown number of integer wind speeds (in km/h) until the user enters -1 (sentinel), counts the categories (calm <1, light breeze 1–5, gentle breeze 12–11, gale ≥12), and identifies the minimum wind speed.
MINIMUM:
• Write a function that takes one wind speed and returns 1 for calm, 2 for light breeze, 3 for gentle breeze, 4 for gale, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and track the smallest speed, then print each category count and the minimum wind speed.

During a road cycling session, your speedometer outputs one integer speed (km/h) per minute from standard input. Input ends when the sentinel -1 appears. Write a C program that counts intervals and computes total acceleration (sum of all positive increases in speed).
MINIMUM:
• Write a function that takes two speeds s1 and s2 and returns max(0, s2 - s1).
FURTHER TASK:
• In main(), read the first speed, then loop reading each next s until -1, call your function on previous and current, sum all positive returns, count intervals, and print “Intervals: N Total accel: A km/h”.

During a car test-drive, your onboard computer logs one integer speed (km/h) per second from standard input. Input ends at sentinel -1. Write a C program that counts intervals and computes total deceleration (sum of all drops in speed).
MINIMUM:
• Write a function that takes two speeds v1 and v2 and returns max(0, v1 - v2).
FURTHER TASK:
• In main(), read the first v, then loop reading each next v until -1, call your function on previous and current, sum all returns, count intervals, and print “Intervals: N Total decel: D km/h”.

On a mountain-climb expedition, your barometric altimeter logs one altitude per minute as a single double from standard input. Input ends when the sentinel -1.0 appears. Write a C program that counts readings and computes the total elevation gain (sum of all uphill climbs).
MINIMUM:
• Write a function that takes two altitudes h1 and h2 and returns max(0.0, h2 - h1).
FURTHER TASK:
• In main(), read the first altitude, then loop reading each next h until -1.0, call your function on previous and current, sum positive returns, count intervals, and print “Readings: N Total gain: G.GG m”.

Write a C program that reads an unknown number of network latencies (integers, in ms) until the user enters -1 (sentinel), counts the categories (good <50ms, acceptable 50–100ms, poor 101–200ms, unacceptable >200ms), and identifies the minimum latency.
MINIMUM:
• Write a function that takes one latency and returns 1 for good, 2 for acceptable, 3 for poor, 4 for unacceptable, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and track the smallest latency, then print each category count and the best latency.

Write a C program that reads an unknown number of ages (integers) until the user enters -1 (sentinel), counts the categories (child 0–12, teenager 13–19, adult 20–100, senior ≥100), and identifies the minimum age.
MINIMUM:
• Write a function that takes one age and returns 1 for child, 2 for teenager, 3 for adult, 4 for senior, and –1 for the sentinel.
FURTHER TASK:
• In main(), loop on input until sentinel, call your function to tally category counts and track the smallest age, then print each category count and the minimum age.

On a river-kayaking trip, your tracker logs boat speed vs time as comma-separated pairs t,y (time in s, speed in m/s) per line. Input ends with the sentinel -1,-1. Write a C program that counts intervals and approximates total distance paddled via
trapezoidal rule.
MINIMUM:
• Write a function that takes two samples (t1,y1) and (t2,y2) and returns ((y1 + y2)/2.0) * (t2 - t1), which is the distance calculation by trapezoidal rule.
FURTHER TASK:
• In main(), read the first sample, then loop reading each next t,y until -1,-1, call your function, sum all returns, count intervals, and print “Intervals: N Distance: D.DD m”.


Exercise: 4
Manage a warehouse inventory using a static array of Product structs. Each struct holds product ID, name, and quantity. The program should list inventory and modify stock levels.
MINIMUM:
• Define a structure named Product with the following attributes:
→ id: an integer to store the product ID.
→ name: max. 30 characters to store the product name.
→ quantity: an integer to represent units in stock.
FURTHER TASK:
• In main(), declare a static array of 6 Product items, prompt the user to fill it up with data,
• Display a menu “View items in stock” / “Update stock,” read one choice, and display all products in stock with their IDs, names, and quantities or interact with the user to update the quantity of a product by ID.

Build a recipe manager using a static array of Recipe structs. Each Recipe has a name, ingredients list, and cook time. The program should list recipes and update cook times.
MINIMUM:
• Define a structure named Recipe with the following attributes:
→ name: max. 50 characters to store the recipe name.
→ ingredients: max. 200 characters to list ingredients.
→ cook_time: an integer to represent minutes required.
FURTHER TASK:
• In main(), declare a static array of 5 Recipe items, prompt the user to fill it up with data,
Display a menu “List fast recipes” / “Update time,” read one choice, and print all the recipes name that needs less than 30 minutes to cook, or update the cook_time by recipe name given by the user.

Build a travel itinerary manager using a static array of Trip structs. Each Trip has a destination, date, and cost. The program should list trips and update costs.
MINIMUM:
• Define a structure named Trip with the following attributes:
→ destination: max. 40 characters to store the location name.
→ date: max. 10 characters to store the date (YYYY-MM-DD).
→ cost: a double to represent trip cost.
FURTHER TASK:
• In main(), declare a static array of 6 Trip items, prompt the user to fill it up with data
• Display a menu “List trips” / “Update cost,” read one choice, and list the trips to Canada (destination) or update a required trip's cost interacting with the user. The user must enter only the destination, you can update the first match!

Create a vehicle maintenance log using a static array of Maintenance structs. Each record has a date, vehicle ID, and description of work. The program should list logs and add new entries.
MINIMUM:
• Define a structure named Maintenance with the following attributes:
→ date: max. 10 characters to store date (YYYY-MM-DD).
→ vehicle_id: max. 12 characters to store the vehicle identifier.
→ work: max. 100 characters to describe maintenance performed.
FURTHER TASK:
• In main(), declare a static array of 15 Maintenance items, prompt the user to fill it up with data for 14 items,
• Display a menu “List records” / “Add record,” read one choice, and display all maintenance records or add a new record by prompting for date, vehicle ID, and work description.

Create a workshop attendance tracker using a static array of Attendee structs. Each Attendee has a name, email, and attended flag. The program should list attendees and mark attendance.
MINIMUM:
• Define a structure named Attendee with the following attributes:
→ name: max. 30 characters to store the attendee’s name.
→ email: max. 50 characters to store the attendee’s email.
→ attended: an integer flag (0 = not attended, 1 = attended).
FURTHER TASK:
• In main(), declare a static array of 12 Attendee items, prompt the user to fill it up with data
• Display a menu “List attendeds” / “Mark attendance,” read choice, and display all attendees who has attended and their status or mark attendance by entering (user) the attendee’s name.

Build a simple library system using a static array of Book structs. Each struct holds the book title, author, and copy count. The program should list books and update copy counts.
MINIMUM:
• Define a structure named Book with the following attributes:
→ title: max. 50 characters to store the book title.
→ author: max. 30 characters to store the author's name.
→ copies: an integer to represent the number of available copies.
FURTHER TASK:
• In main(), declare a static array of 5 Book items, prompt the user to fill it up with data,
• Show a menu “List books” / “Update copies,” read one choice, and display all books with their titles, authors, and copy counts or prompt the user for a book title and update the copy count for that book!


Create a museum exhibit manager using a static array of Exhibit structs. Each Exhibit has a title, artist, and year. The program should list exhibits and update their year.
MINIMUM:
• Define a structure named Exhibit with the following attributes:
→ title: max. 60 characters to store the exhibit title.
→ artist: max. 40 characters to store the artist name.
→ year: an integer to represent the creation year.
FURTHER TASK:
• In main(), declare a static array of 7 Exhibit items, prompt the user to fill it up with data,
• Display a menu “List 2017 exhibits” / “Update year,” read choice, and display all exhibits in 2017 with their titles, and years or update the year of an exhibit found by title (entered by the user)!

As a C programmer, create a gift-list manager for Santa Claus. Use a static array of Child structs to store each child’s data. The program should allow users to view and update the list.
MINIMUM:
• Define a structure named Child with the following attributes:
→ name: max. 30 characters to store the name of the child.
→ age: an integer to represent the age of the child.
→ gift: max. 100 characters to store the requested gift.
FURTHER TASK:
• In main(), declare the static array of 10 Child items, prompt the user to fill it up with data
• Display a menu “View all” / “Update gift,” read one choice, and print all gifts data for those who are under 6, or update the requested gift of a particular child by the name typed by the user.

Implement a simple bug tracker using a static array of Bug structs. Each Bug has an ID, description, and status flag. The program should list bugs and change their status.
MINIMUM:
• Define a structure named Bug with the following attributes:
→ id: an integer to store the bug ID.
→ description: max. 100 characters to describe the bug.
→ status: an integer flag (0 = open, 1 = closed).
FURTHER TASK:
• In main(), declare a static array of 9 Bug items, prompt the user to fill it up with data,
• Display a menu “List or open bugs” / “Toggle status,” read one choice, and display all open bugs with their IDs, descriptions, and statuses or toggle the status of a bug by ID (given by the user)!

In a parallel universe, a prestigious university holds an annual Drinking Contest where students from different departments compete to showcase their legendary drinking abilities. As the best student in programming, you have been entrusted with the task of creating a program to manage the participants and record their performance during this exhilarating contest. Your program will use static arrays and structures to represent the students and their drinking statistics.
MINIMUM:
• Define a structure named Student with the following attributes:
→name: max. 30 characters to store the name of the student.
→Department: max 100 characters to store the name of the department.
→drinksConsumed: An integer variable to store the number of drinks the student has consumed during the contest.
• Implement a function to display the information of all the participating students and their drinking statistics. The function should print the name, department, and the number of drinks consumed by each student.
Further Task:
• Implement a function to update the number of drinks consumed by a particular student during the contest. The function should prompt the user to enter the name of the student and the additional drinks they have consumed.
• In main create a static array of Student structures to store information about the participating students with 500 records, fill it up with user inputs!
• When the program starts, it should display a menu to the user with the following options:
→View all participating students and their drinking statistics.
→Update the number of drinks consumed by a student.
and the program should run according to the user's choice (only once, no need for proper menu).

Create a flight schedule manager using a static array of Flight structs. Each Flight has a flight number, origin, destination, and seat count. The program should list all flights and update seat availability.
MINIMUM:
• Define a structure named Flight with the following attributes:
→ flight_no: max. 8 characters to store the flight number.
→ origin: max. 30 characters to store the departure airport.
→ destination: max. 30 characters to store the arrival airport.
→ seats: an integer to store available seats.
FURTHER TASK:
• In main(), declare the static array of 10 Flight items, prompt the user to fill it up with data,
• Display a menu “List available flights” / “Update seats,” read one choice, and display all flights that has available seats and their seat counts or update the seat count by flight number eneterd by user

Implement a to-do list manager using a static array of Todo structs. Each struct holds task ID, description, and done flag. The program must list tasks and mark them as done.
MINIMUM:
• Define a structure named Todo with the following attributes:
→ id: an integer to store the task ID.
→ description: max. 60 characters to describe the task.
→ done: an integer flag (0 = not done, 1 = done).
FURTHER TASK:
• In main(), declare a static array of 10 Todo items, prompt the user to fill it up with data,
• Display a menu “Show done tasks” / “Mark done,” read one choice, and display all done tasks with their IDs, descriptions, and status or mark a task as done by entering its ID.

Build a social media post scheduler using a static array of Post structs. Each Post has an ID, content, and scheduled time. The program should list posts and reschedule them.
MINIMUM:
• Define a structure named Post with the following attributes:
→ id: an integer to store the post ID.
→ content: max. 100 characters to store the post text.
→ time: max. 20 characters to store scheduled time (e.g. “2025-07-01 14:00”).
FURTHER TASK:
• In main(), declare a static array of 6 Post items, prompt the user to fill it up with data,
• Display a menu “List posts” / “Reschedule post,” read one choice, and display all scheduled posts, or prompt the user for a post ID and update the corresponding scheduled time!

Build a movie collection database using a static array of Movie structs. Each Movie has a title, director, and rating. The program should list movies and update ratings.
MINIMUM:
• Define a structure named Movie with the following attributes:
→ title: max. 50 characters to store the movie title.
→ director: max. 30 characters to store the director’s name.
→ rating: a float to represent the viewer rating.
FURTHER TASK:
• In main(), declare a static array of 8 Movie items, prompt the user to fill it up with data,
• Display a menu “List good movies” / “Update rating,” read one choice, and print all the movies with rating above 4, or update the rating by movie title typed by the user!

Manage IoT sensor readings using a static array of Sensor structs. Each Sensor has an ID, location, and last reading. The program should list sensors and update readings.
MINIMUM:
• Define a structure named Sensor with the following attributes:
→ id: an integer to store the sensor ID.
→ location: max. 30 characters to store the sensor location.
→ last_reading: a double to represent the latest measurement.
FURTHER TASK:
• In main(), declare a static array of 8 Sensor items, prompt the user to fill it up with data,
• Display a menu “List sensors” / “Update reading,” read choice, and display all sensors with their locations and readings, or interact with the user to update last_reading by sensor ID.

Manage an electronics inventory using a static array of Device structs. Each Device has a model, serial number, and stock count. The program should list devices and update stock.
MINIMUM:
• Define a structure named Device with the following attributes:
→ model: max. 30 characters to store the device model.
→ serial: max. 20 characters to store the serial number.
→ stock: an integer to represent stock quantity.
FURTHER TASK:
• In main(), declare a static array of 8 Device items, prompt the user to fill it up with data,
• Display a menu “List out of stock items” / “Update stock,” read one choice, and display all devices that are out-of-stock, or interact with the user to update stock by serial number.

Create a contact list application using a static array of Contact structs. Each struct holds name and phone number. Allow listing all contacts or updating a phone number.
MINIMUM:
• Define a structure named Contact with the following attributes:
→ name: max. 30 characters to store the contact's name.
→ phone: max. 15 characters to store the phone number.
FURTHER TASK:
• In main(), declare a static array of 5 Contact items , prompt the user to fill it up with data,
• Display a menu “List capital contacts” / “Update phone,” read one choice, and display all contacts who is written with capital first letter in the contact list (Anna should be printed, but anna not!) with their names and phone numbers or update a contact's phone number by entering their name

Manage supermarket stock using a static array of StockItem structs. Each StockItem has an ID, description, and quantity. The program should list stock and adjust quantities.
MINIMUM:
• Define a structure named StockItem with the following attributes:
→ id: an integer to store the stock item ID.
→ description: max. 60 characters to describe the product.
→ quantity: an integer to represent units in stock.
FURTHER TASK:
• In main(), declare a static array of 10 StockItem items, prompt the user to fill it up with data,
• Display a menu “List low stock” / “Update quantity,” read one choice, and display all stock items with less than 5 in stock, with their IDs, descriptions, and quantities or interact with the user to modify the quantity of a stock item by ID.

Implement a bank account ledger using a static array of Account structs. Each Account has an account number, holder name, and balance. The program should list all accounts and modify balances.
MINIMUM:
• Define a structure named Account with the following attributes:
→ acct_no: max. 12 characters to store the account number.
→ holder: max. 30 characters to store the account holder’s name.
→ balance: a double to represent the account balance.
FURTHER TASK:
• In main(), declare a static array of 6 Account items, prompt the user to fill it up with data,
• Display a menu “List of rich accounts” / “Update balance,” read one choice, and display all accounts and balances if the balance is above 1000, or deposit or withdraw by account number accoridng to the user's needs!

Build an employee directory using a static array of Employee structs. Each struct holds ID, name, and department. The program should list employees and reassign departments.
MINIMUM:
• Define a structure named Employee with the following attributes:
→ id: an integer to store the employee ID.
→ name: max. 30 characters to store the employee's name.
→ department: max. 20 characters to store the department name.
FURTHER TASK:
• In main(), declare a static array of 7 Employee items, prompt the user to fill it up with data,
• Display a menu “List HR employees” / “Change department,” read one choice, and display all employees from HR department with their IDs and names or change an employee's department by entering their ID

Create a course roster manager using a static array of RosterEntry structs. Each entry has a student ID, course code, and grade. The program should list entries and update grades.
MINIMUM:
• Define a structure named RosterEntry with the following attributes:
→ student_id: an integer to store the student’s ID.
→ course_code: max. 8 characters to store the course code.
→ grade: a char to store the letter grade.
FURTHER TASK:
• In main(), declare a static array of 10 RosterEntry items, prompt the user to fill it up with data,
• Display a menu “List good roster” / “Update grade,” read one choice, and display all roster entries that have a grade A or B, or update grade by student ID and course code read from user!

Build a fitness class scheduler using a static array of Class structs. Each Class has a name, instructor, and max participants. The program should list classes and change their capacity.
MINIMUM:
• Define a structure named Class with the following attributes:
→ name: max. 40 characters to store the class name.
→ instructor: max. 30 characters to store the instructor’s name.
→ max_participants: an integer to represent capacity.
FURTHER TASK:
• In main(), declare a static array of 6 Class items, prompt the user to fill it up with data
• Display a menu “View schedule” / “Update capacity,” read one choice, and print all the Classes which has less than 30 as max_participant, or update the max_participants field by class name typed by the user.

Manage a list of conference attendees using a static array of Attendee structs. Each Attendee has a name, affiliation, and ticket ID. The program should list attendees and update their affiliation.
MINIMUM:
• Define a structure named Attendee with the following attributes:
→ name: max. 40 characters to store the attendee’s name.
→ affiliation: max. 50 characters to store the attendee’s organization.
→ ticket_id: an integer to store the unique ticket number.
FURTHER TASK:
• In main(), declare a static array of 12 Attendee items, prompt the user to fill it up with data,
• Display a menu “List attendees” / “Update affiliation,” read one choice, and display all attendees with their names, affiliations, and ticket IDs or interact with user to update an attendee’s affiliation by entering their ticket ID.

Manage course registrations using a static array of Course structs. Each Course has a code, title, and enrolled count. The program should list courses and update enrollment.
MINIMUM:
• Define a structure named Course with the following attributes:
→ code: max. 8 characters to store the course code.
→ title: max. 50 characters to store the course title.
→ enrolled: an integer to represent number of students enrolled.
FURTHER TASK:
• In main(), declare a static array of 5 Course items, prompt the user to fill it up with data,
• Display a menu “List big courses” / “Modify enrollment,” read choice, and display all courses with at last 100 students and their enrollment or interact with the user to add or drop a student by course code

Create a restaurant menu manager using a static array of MenuItem structs. Each MenuItem has a code, name, and price. The program should list menu items and update prices.
MINIMUM:
• Define a structure named MenuItem with the following attributes:
→ code: max. 8 characters to store the item code.
→ name: max. 50 characters to store the dish name.
→ price: a double to represent the item price.
FURTHER TASK:
• In main(), declare a static array of 8 MenuItem items, prompt the user to fill it up with data,
• Display a menu “Show cheap dishes” / “Update price,” read one choice, and display all menu items with their codes, names, and prices if the price is lower than 10, or interact with the user and update the price of a menu item by its code.

Create a patient record system using a static array of Patient structs. Each Patient has an ID, name, and diagnosis. The program should list all patients and update diagnoses.
MINIMUM:
• Define a structure named Patient with the following attributes:
→ id: an integer to store the patient ID.
→ name: max. 40 characters to store the patient’s name.
→ diagnosis: max. 100 characters to store the diagnosis.
FURTHER TASK:
• In main(), declare a static array of 7 Patient items, prompt the user to fill it up with data,
• Display a menu “List patients” / “Update diagnosis,” read choice, and display all patient records, or update the diagnosis by patient ID (both comes from the user)

Build a hotel booking system using a static array of Room structs. Each Room has a number, type, and availability flag. The program should list rooms and toggle availability.
MINIMUM:
• Define a structure named Room with the following attributes:
→ number: an integer to store the room number.
→ type: max. 20 characters to store the room type (e.g. “single”, “suite”).
→ available: an integer flag (0 = occupied, 1 = available).
FURTHER TASK:
• In main(), declare a static array of 10 Room items, prompt the user to fill it up with data
• Display a menu “List available rooms” / “Check in/out,” read choice, and list all available Rooms data or check in/out by room number (toggle availability).

Create a grade book using a static array of Student structs. Each struct holds student ID, name, and exam score. The program should list all students and allow score updates.
MINIMUM:
• Define a structure named Student with the following attributes:
→ id: an integer to store the student ID.
→ name: max. 40 characters to store the student's name.
→ score: a float to represent the exam score.
FURTHER TASK:
• In main(), declare a static array of 8 Student items, prompt the user to fill it up with data,
• Display a menu “Show passed” / “Update grade,” read one selection, and display all students with their IDs, names, and scores if the score reaches 20 points, or update a student's score by entering their ID (read from user!)
