Question Link- https://www.hackerrank.com/challenges/compare-the-triplets/problem

//Brute Force Approach//



/*
 * The 'compareTriplets' function below returns the scores obtained by Alice and Bob in the form of an 
 array.The first element of the returned array represents Alice's score and the second element represents 
 Bob's score.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */




/* rest of the code remains same */
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int>scores{0,0};
    int i=0,ascore=0,bscore=0;
    while(i<3){
        if(a[i]>b[i]){
            scores[0]++;
        }else if(a[i]<b[i]){
            scores[1]++;
        }else{
            scores[0]+=0;
            scores[1]+=0;
        }
        i++;
    }
 
    return scores;
}


/* rest of the code remains same */

