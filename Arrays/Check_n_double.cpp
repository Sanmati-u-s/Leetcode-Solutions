class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

        if(arr.size()==2){
            if (arr[0] == 2* arr[1] || 2*arr[0] == arr[1]) {
                return true;}
            return false;
        }
        for(int i = 0 ; i < arr.size()-1; i ++) {
            for(int j = i+1; j <  arr.size(); j ++ ) {
                if(arr[i] == 2 * arr[j] ||2 * arr[i] == arr[j]) return true;
            }
        }
            return false;

    }
};