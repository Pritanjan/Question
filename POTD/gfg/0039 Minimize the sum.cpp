BRUTE FORCE : 
If you've observed testcases carefully and did a dry run once, then you'll find that to get the minimum sum, we have to add two SMALLEST number.

We'll sort the array and pick the first two numbers from the array.
Now remove that two number of array and push addition of them in array.
But to get minimum sum, we have to sort the array again.
Keep adding that sum to another variable as ANS.
 

TC :- O(n*n*logn) - n for FOR LOOP and nlogn for SORTING.

//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> P) {
        sort(P.begin(), P.end());
        int res = 0;
        for(int i=0; i<N-1; i++){
            int sum = 0;
            sum += P[i] + P[i+1] ;
            
            P.erase(P.begin() + 1);
            // P[i] = sum;
            P.push_back(sum);
            sort(P.begin(), P.end());
            res += sum;
        }
        return res;
    }
};



// 2nd
OBSERVATIONS : 

    Now if you have idea about the MIN HEAP/priority queue than this data structure do the same work as pushing element and sorting but in O(logn) time.

Make one min heap and store all the elements of array in it.
We'll do some calculations till there is more than one element in queue.
Since top of heap will be storing the smallest element, we just simply pick 2 top elements for the addition.
Now add that addition to the ans.
TC : O(n*logn) - n for traversing heap and logn to push the element.

class Solution {
public:
    int minimizeSum(int N, vector<int> P) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<N-1; i++){
            pq.push(P[i]);
        }
        
        int res = 0;
        while(pq.size() > 1){
            int sum = pq.top();
            pq.pop();
            
            sum += pq.top();
            pq.pop();
            
            pq.push(sum);
            res += sum;
        }
        return res;
    }
};
