// https://www.codingninjas.com/codestudio/problems/check-if-the-word-is-present-in-sentence-or-not_920440?topList=amazon-sde-challenge&leftPanelTab=0

bool findWord(string &s, string &w)
{
    string x = "";
	for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            if(x == w)
                return 1;
            else
                x = "";
        }
        else
            x += s[i];
         

    }
    if(x == w)
        return 1;
    return 0;
}

