// https://www.codingninjas.com/codestudio/problems/third-greatest-element_1095642?leftPanelTab=0

// APPROACH 1

#include <climits>
int findThirdLagrest(vector<int>& arr) {
    // For storing largest,second largest and third largest elements.
    int maxOne = INT_MIN, maxTwo = INT_MIN, maxThree = INT_MIN;
    int n = arr.size();

    // Iterate through the array.
    for (int i = 0; i < n; i++) {
        // Update the elements.
        if (maxOne < arr[i]) {
            maxThree = maxTwo;
            maxTwo = maxOne;
            maxOne = arr[i];
        } else if (maxTwo < arr[i]) {
            maxThree = maxTwo;
            maxTwo = arr[i];
        } else if (maxThree < arr[i]) {
            maxThree = arr[i];
        }
    }
    return maxThree;
}



// Time Complexity: O(N)
// Space Complexity: O(1)




// APPROACH 2

#include <bits/stdc++.h> 
int findThirdLagrest(vector <int> & arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    
    return arr[n-3]        ;
}


// Time Complexity: O(N * log(N))
// Space Complexity: O(1)


// APPROACH 3


#include <climits>
int findThirdLagrest(vector < int > & arr) {
    // For storing largest,second largest and third largest elements.
    int maxOne = INT_MIN, maxTwo = INT_MIN, maxThree = INT_MIN;
    int n = arr.size();

    // Iterate throught the array.
    for (int i = 0; i < n; i++) {
        // Find the maximum element.
        if (maxOne < arr[i]) {
            maxOne = arr[i];
        }
    }

    // Iterate through the array.
    for (int i = 0; i < n; i++) {
        // Find the second largest element.
        if (arr[i] != maxOne && maxTwo < arr[i]) {
            maxTwo = arr[i];
        }
    }

    // Iterate through the array.
    for (int i = 0; i < n; i++) {
        // Find the third largest element.
        if (arr[i] != maxOne && arr[i] != maxTwo && maxThree < arr[i]) {
            maxThree = arr[i];
        }
    }

    return maxThree;
}

// Time Complexity: O(N)
// Space Complexity: O(1)


