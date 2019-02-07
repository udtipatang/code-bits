//Euclidean Algorithm to find hcf
// O(log n)
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
