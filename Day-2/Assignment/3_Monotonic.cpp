class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int i, size = A.size(),temp = A[0], flag = -1;
        for(i=1; i < size; i++) {
            if(A[i] > temp) {
                if(flag == 2)
                    return false;
                else
                    flag = 1;
            }
            else if(A[i] < temp) {
                if(flag == 1)
                    return false;
                else
                    flag = 2;
            }
            temp = A[i];
        }
        return true;
    }
};