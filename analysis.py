# Import necessary libraries
import pandas as pd
import matplotlib.pyplot as plt

# Load the data from CSV file
data = pd.read_csv("data.csv")

# Display the first few rows of the dataset
print("First few rows of the dataset:\n", data.head())

# Basic statistics
print("\nSummary statistics:\n", data.describe())

# Plotting a histogram for Age
data['Age'].plot(kind='hist', bins=20, edgecolor='black')
plt.title('Distribution of Age')
plt.xlabel('Age')
plt.ylabel('Frequency')
plt.show()

# Scatter plot of Age vs Salary
plt.scatter(data['Age'], data['Salary'])
plt.title('Scatter plot of Age vs Salary')
plt.xlabel('Age')
plt.ylabel('Salary')
plt.show()
