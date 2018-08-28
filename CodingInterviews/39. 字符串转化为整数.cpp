class Solution {
public:
    int StrToInt(string str) {
        int len = str.length();
        if(len == 0){
            return 0;
        }
        int sym = 1;
        int result = 0;
        int ten = 1;
        
        if(str[0] == '-'){
            sym = -1;
        }
        
        if(str[0] == '+' || str[0] == '-'){
            for(int i = len - 1; i > 0; i--){
                if(str[i] >= '0' && str[i] <= '9'){
                    result += (str[i] - '0')*ten;
                    ten *= 10;
                }else{
                    return 0;
                }
            }
        }else{
            for(int i = len - 1; i >= 0; i--){
                if(str[i] >= '0' && str[i] <= '9'){
                    result += (str[i] - '0')*ten;
                    ten *= 10;
                }else{
                    return 0;
                }
            }
        }
        return result*sym;
    }
};
