int Solution::solve(vector<int> &A) {
    int Osum = 0, Esum = 0;
    int ans = 0;
    for(int i=0; i<A.size(); i++){
        if(i%2 != 0){
            Osum +=A [i];
        } else {
            Esum += A[i];
        }
    }
    int besum = 0, bosum = 0;
    int aesum = 0, aosum = 0;
    for(int i=0; i<A.size(); i++){
        if(i%2 != 0){
            aosum = bosum + Esum - besum;
            aesum = besum + Osum - bosum - A[i];
            if(aosum == aesum){
                ans += 1;
            }
            bosum += A[i];
        }else{
            aosum = bosum + Esum - besum - A[i];
            aesum = besum + Osum - bosum;
            if(aosum == aesum){
                ans += 1;
            }
            besum += A[i];
        }
    }
    return ans;
}