Question Link- https://www.hackerrank.com/challenges/30-data-types/problem?isFullScreen=true

  
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2="";
    // Read and save an integer, double, and String to your variables.
    cin>>i2;
    cin>>d2;
    while (cin>>s2){
        s+=s2+" ";
    }
    // Print the sum of both integer variables on a new line.
    cout<<i+i2<<endl;
    // Print the sum of the double variables on a new line.
    d2+=d;
    printf("%.1f\n",d2);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s;
