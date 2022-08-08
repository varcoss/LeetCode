class Solution {
public:
    int romanToInt(string s) {
        enum romanNumerals
        {
            I = 1,
            V = 5,
            X = 10,
            L = 50,
            C = 100,
            D = 500,
            M = 1000
        };
        
        vector<char> v;
    
        for(int i = 0;i<s.size();i++)
        {
            v.push_back(s.at(i));
        }
        
        int answer = 0;
        bool outOfRange = false;
        
        for(int i = 0; i < s.size(); i++)
        {
            if((i+1) == s.size())
            {
                outOfRange = true;
            }
            
            if(outOfRange == false && v.at(i) == 'I' && v.at(i+1) == 'V')
            {
                answer += 4;
                i++;
            }
            
            else if(outOfRange == false && v.at(i) == 'I' && v.at(i+1) == 'X')
            {
                answer += 9;
                i++;
            }
            
            else if(outOfRange == false && v.at(i) == 'X' && v.at(i+1) == 'L')
            {
                answer += 40;
                i++;
            }
            
            else if(outOfRange == false && v.at(i) == 'X' && v.at(i+1) == 'C')
            {
                answer += 90;
                i++;
            }
            
            else if(outOfRange == false && v.at(i) == 'C' && v.at(i+1) == 'D')
            {
                answer += 400;
                i++;
            }
            
            else if(outOfRange == false && v.at(i) == 'C' && v.at(i+1) == 'M')
            {
                answer += 900;
                i++;
            }
            
            else
            {
                switch(v.at(i))
                {
                    case 'I':
                        answer += I;
                        break;
                    case 'V':
                        answer += V;
                        break;
                    case 'X':
                        answer += X;
                        break;
                    case 'L':
                        answer += L;
                        break;
                    case 'C':
                        answer += C;
                        break;
                    case 'D':
                        answer += D;
                        break;
                    case 'M':
                        answer += M;
                        break;
                }
            }
        }
        
        return answer;
        
    }
};