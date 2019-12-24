double calculatePi(int itterations) {
    double pi = 0;
    if (itterations > 0) {
        int n = 1;
        for (int i = 0; i <= itterations; i++) {
            pi = pi + (4 / n) - (4 / (n + 2));
            n = n + 4;
        }  
    } else {
        return 0;
    }
            
    return pi;
}
