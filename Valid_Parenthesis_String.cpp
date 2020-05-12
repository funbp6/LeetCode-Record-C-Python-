bool checkValidString(char * s){
    int mincount = 0;
    int maxcount = 0;
    for (int i = 0; i < strlen(s); i++){
        if (s[i] == '('){
            mincount ++;
            maxcount ++;
        }else if (s[i] == ')'){
            mincount --;
            maxcount --;
        }else if (s[i] == '*'){
            mincount --;
            maxcount ++;
        }
        if (maxcount < 0 && mincount < 0){
            return false;
        }
        if (mincount < 0){
            mincount = 0;
        }
    }
    return mincount == 0;
}
