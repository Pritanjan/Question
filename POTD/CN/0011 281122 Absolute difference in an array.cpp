// https://www.codingninjas.com/codestudio/problem-of-the-day/easy?leftPanelTab=0

// https://www.codingninjas.com/codestudio/problems/absolute-difference-in-an-array_1094906?leftPanelTab=0

#include <bits/stdc++.h> 
pair<int, int> absDiff(vector<int>& arr, int n) {
	int ev = 0;
    int od = 0;
    
    for(int i=0; i<n; i+=2){
        ev = abs(ev - arr[i]);
    }
    for(int i=1; i<n; i+=2){
        od = abs(od - arr[i]);
    }
    
    return {ev, od};
}


