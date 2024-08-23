class Solution {
public:

    string fractionAddition(string expression) {
        vector<int>numerator,denominator;
        int n = expression.size();
        bool negative = false;
        string temp = "";
        for(int i=0;i<n;i++){
            if(expression[i]=='-' || expression[i]=='+'){
                if(expression[i] == '-'  && temp.size()){
                    int num = stoi(temp);
                    denominator.push_back(num);
                    temp = "";
                    negative = true;
                }
                else if(expression[i] == '-' &&  !temp.size()){
                    negative = true;
                }
                else{
                    int num = stoi(temp);
                    denominator.push_back(num);
                    temp = "";
                    negative = false;
                }
                
            }
            else if(expression[i]=='/'){
                int num = stoi(temp);
                if(negative){
                    num*=-1;
                }
                numerator.push_back(num);
                temp = "";
                negative = false;
            }
            else{
                temp+=expression[i];
            }

        }
        int num = stoi(temp);
        denominator.push_back(num);

        int lcm = denominator[0];

        for(int i=1; i< denominator.size(); i++){
            lcm = (denominator[i]*lcm)/__gcd(denominator[i],lcm);
        }
        int result_numerator = 0;
        for(int i=0; i< denominator.size(); i++){
            int multiplier = lcm/denominator[i];
            result_numerator+=numerator[i]*multiplier;
        }
        if(!result_numerator){
        return "0/1";
        }
        else{
            int gcd = abs(__gcd(result_numerator,lcm));
            result_numerator/=gcd;
            lcm/=gcd;
            string result = to_string(result_numerator)+'/'+to_string(lcm);
            return result;
        }
    }
};
