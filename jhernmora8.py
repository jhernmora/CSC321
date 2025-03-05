#Jessenia Hernandez Mora
#CSC321, Lab 8

#Step 1: Choose a number between 0 and 9. Ask a user to guess the number.
import random

randNum = random.randint(0,9)

x = 0
y = 0

print("Guess a number: ")

y = int(input())

#Step 2: If the user's guess is lower than the number or higher than the number, 
#        let them know by displaying that information after they guess.
#&& Step 3: If the user guesses correctly display a win message. If the user's guess 
#        is incorrect, display a lose message.
if y < randNum:
    print("Your guess is too low")
    print("You did not win. :(")
elif y > randNum:
    print("Your gues is too high")
    print("You did not win. :(")
else:
    print("You guessed correctly! :)")

print("\n")

#Step 4: Create a for loop to print out a statement multiple times. 
#        The statement can be any string of text but try to use a saying or a joke.
for i in range(5):
    print("Hello, world!")

print("\n")

#Step 5: Create a while loop to print out a statement multiple times. The statement will be your favorite food.
while x < 5:
    print("Sushi")
    x = x + 1


