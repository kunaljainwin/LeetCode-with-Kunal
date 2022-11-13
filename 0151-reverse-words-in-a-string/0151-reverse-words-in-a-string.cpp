class Solution {
public:
    string reverseWords(string s) {
        /* In place reversal */
        char c;
        int n = s.size();
        for (int k = 0; k < s.size()/2; k++) {
            swap(s[k] ,s[n - 1 - k]);
        }
        
        /* Identify all words */
        int ini = -1;
        int fin = -1;
        for (int k = 0; k <= s.size(); k++) {
            if (k == s.size() || s[k] == ' ') { // Need to accommodate end of string ($)
                fin = k;
                if (ini != -1) {
                    n = fin - ini;
                    for (int k = 0; k < n/2; k++) {
                      
                        swap(s[ini + k] , s[ini + n - 1 - k]);
            
                    }
                }
                ini = -1;
            }
            else if (ini == -1) {
                ini = k;
            }
        }
        
        /* Trim all spaces */
        ini = 0;
        n = 1;
        for (fin = 0; fin < s.size(); fin++) {
            if (s[fin] == ' ' && n == 0) {
                s[ini] = s[fin];
                ini++;
                n++;
            }
            if (s[fin] != ' ') {
                s[ini] = s[fin];
                ini++;
                n = 0;
            }
        }
        return s.substr(0, s[ini - 1] == ' ' ? ini - 1 : ini); 
    }
};