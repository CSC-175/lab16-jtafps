// Code to implement the gcf function goes here
int gcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcf(b, a % b);
}