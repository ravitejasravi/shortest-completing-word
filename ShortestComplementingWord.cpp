class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        
        string license = "";
        for(int  i = 0; i <  licensePlate.length(); i++) {

            if(isalpha(licensePlate[i])) {
                if(licensePlate[i] < 91)
                    license += licensePlate[i] + 32;
                else
                    license += licensePlate[i];
            }
            
        }

        int minlength = INT_MAX, minindex = 0, j;

        for(int i = 0; i < words.size(); i++) {

            string inter = words[i];

            for(j = 0; j < license.length(); j++) {

                int index = inter.find(license[j]);
                if(index == -1)
                    break;
                inter.erase(index,1);
                inter = inter;

            }

            if(j == license.length() && words[i].length() < minlength) {
                minlength = words[i].length();
                minindex = i;
            }

        }

        return words[minindex];
    }
};