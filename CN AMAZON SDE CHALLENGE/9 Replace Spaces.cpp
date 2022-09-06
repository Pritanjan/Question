// https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?topList=amazon-sde-challenge&leftPanelTab=0

string replaceSpaces(string &s){
    string s1 = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            s1.push_back('@');
            s1.push_back('4');
            s1.push_back('0');
        }
        else{
            s1.push_back(s[i]);
        }
    }
    return s1;
}
