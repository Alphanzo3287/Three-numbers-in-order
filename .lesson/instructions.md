# Instructions  
Problem Statement:

Write a program to prompt the user to input 3 integers between 1 and 500.

Output the numbers in the order of smallest to largest.

------------------------------------------------------------------------------------------------------------------

Notes: Ask the user to input three numbers and save the numbers in variables called num1, num2, and num3. You determine the appropriate data type. Use if and else if structures to make decisions. Use relational operators && (and) and || (or) where needed.There are several variations on exactly what logic to use to solve this. I want you to use the method that makes sense to you. This is an exercise in the use of if statements and relational operators. 

Method 1: You may create 3 additional variables low, middle, high and store the numbers in those variables. Then you output low, middle and high. So you test for the lowest number and assign it to the variable low. Test for the highest number and assign it to the variable high. Then assign the remaining number to the middle.

Method 2 (Bonus): Output the numbers in the correct order WITHOUT creating 3 new variables. This involves more if statements and relational operators. (For example, first output the low number by checking for 3 possibilities, low is num1 or low is num2 or low is num3. If num1 is less than num2 AND num1 is less than num3 then num1 is lowest.)
  