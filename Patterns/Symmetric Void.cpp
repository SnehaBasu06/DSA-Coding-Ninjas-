void symmetry(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"* ";
        }
        for(int k=1;k<i;k++){
            cout<<"    ";
        }
        for(int j=1;j<=n+1-i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int k=1;k<=n-i;k++){
            cout<<"    ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
/*
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * *
*/
