import random

print("Hello, You are welcome to hangman game to guess city name of Nepal")
print("\n")
words = ['nepalgunj', 'pokhara', 'bhojpur', 'birtamode', 'dhading']

word = random.choice(words)

print("Guess the characters:")

guessed_word = []
chances = 5

while chances > 0:
    failed = 0
    display_word = ""

    for char in word:
        if char in guessed_word:
            display_word += char
        else:
            display_word += "_"
            failed += 1

    print(display_word)

    if failed == 0:
        print("You Win.")
        print("The word is: ", word + '.')
        break

    guess = input("guess a character: ").lower()

    if guess in guessed_word:
        print("You already guessed that character.")
        continue

    guessed_word.append(guess)

    if guess not in word:
        chances -= 1
        print("Wrong")
        print("You have", chances, 'more guesses.')

        if chances == 0:
            print("You Lose.")
            print("The word was: ", word + '.')