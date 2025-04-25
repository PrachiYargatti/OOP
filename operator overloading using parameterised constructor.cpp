import numpy as np

# Simple function to make a recommendation based on age and preference score
def recommend(age, preference_score, threshold=0.5):
    # Simple logic to combine age and preference score into a single value (weighted sum)
    score = (age * 0.01) + (preference_score * 0.1)  # Adjust these coefficients as needed

    # Classify based on threshold
    if score >= threshold:
        return "Yes"  # Recommend Yes
    else:
        return "No"  # Recommend No

# Test the function with example data
test_data = [
    (28, 7),  # Age 28, preference score 7
    (45, 3),  # Age 45, preference score 3
    (22, 8),  # Age 22, preference score 8
    (32, 5)   # Age 32, preference score 5
]

# Print recommendations for each test case
for age, score in test_data:
    print(f"Age: {age}, Preference Score: {score} -> Recommendation: {recommend(age, score)}")
