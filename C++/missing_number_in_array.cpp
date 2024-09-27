int MissingNumber(vector<int>& array, int n) {
        sort(array.begin() , array.end());
        for (int i=1 ; i<=n ; i++){
            if (array[i-1] != i){
                return i;
            }
        }
    }
