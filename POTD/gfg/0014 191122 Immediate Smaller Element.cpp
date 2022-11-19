// https://www.codingninjas.com/codestudio/problem-of-the-day/easy?leftPanelTab=0

// 315. Count of Smaller Numbers After Self

// 1475. Final Prices With a Special Discount in a Shop      --> SAME AS THIS QUESTION

#include <bits/stdc++.h> 
int* immediateSmaller(int* A, int n) 
{
	for(int i=0; i<n-1; i++){
        if(A[i] > A[i+1])
            A[i] = A[i+1];
        else
            A[i] = -1;
    }
    A[n-1] = -1;      
    return A;
}












