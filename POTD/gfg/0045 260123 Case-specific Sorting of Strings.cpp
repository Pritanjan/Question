// O(n log n)

 string caseSort(string str, int n)
    {
        // your code here
        vector<char> L; //for storing Lowercase 
        vector<char> U; // for storing Uppercase
        int l=0,u=0; //help in traversing 
        
        for(int i=0;i<n;i++)
        {
            if(str[i]>=65 && str[i]<=90)
            U.push_back(str[i]);  //storing Uppercase
            
            if(str[i]>=97 && str[i]<=122)
            L.push_back(str[i]);  //storing Lowercase
        }
        
        sort(U.begin(),U.end()); //sorting Uppercase vector
        sort(L.begin(),L.end()); //sorting Lowercase vector
        
        for(int i=0;i<n;i++)  //traversing in str 
        {
            if(str[i]>=65 && str[i]<=90) //identifying case 
            {
                str[i]=U[u];  // replace with U vector's element
                u++;  //updating the index
            }
            
            if(str[i]>=97 && str[i]<=122) //
            {
                str[i]=L[l];
                l++;
            }
        }
        return str;
    }



