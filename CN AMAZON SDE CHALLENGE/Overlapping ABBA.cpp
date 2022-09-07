// https://www.codingninjas.com/codestudio/problems/two-substrings_920397?topList=amazon-sde-challenge&leftPanelTab=0

bool findOverlap(string &s){
    bool isAB = false;
    bool isBA = false;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A' && s[i+1] == 'B'){
            isAB = true;
            i++;
        }
        else if(s[i] == 'B' && s[i+1] == 'A'){
            isBA = true;
            i++;
        }            
    }
    
    if(isAB and isBA)
        return true;
    else
        return false;
}

