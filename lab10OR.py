# Importing the required libraries
import numpy as np

# Defining the activation function
def activation_function(y):
    if y >= 0:
        return 1
    else:
        return 0

# W = weights of the perceptron model
W = np.array([1, 1])
# b = bias of the model
b = -0.5  # Adjusted bias for OR gate

# Defining the perceptron algorithm
def perceptron_algorithm(x):
    # y = w1x1 + w2x2 + b
    y = np.dot(W, x) + b
    # y = 1 if Wx+b > 0 else y = 0 
    y = activation_function(y)
    return y

# Input values to verify the OR logic 
input1 = np.array([0, 0])
input2 = np.array([0, 1])
input3 = np.array([1, 0])
input4 = np.array([1, 1])

# Printing the results
print('OR Logic: \n')
print(f'x1 = 0 and x2 = 0 => y = {perceptron_algorithm(input1)}')
print(f'x1 = 0 and x2 = 1 => y = {perceptron_algorithm(input2)}')
print(f'x1 = 1 and x2 = 0 => y = {perceptron_algorithm(input3)}')
print(f'x1 = 1 and x2 = 1 => y = {perceptron_algorithm(input4)}')