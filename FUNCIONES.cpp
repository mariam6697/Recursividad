using namespace std;

int base_diez(int n, int b, int &cont){
    cont++;
    cin.get();
    stack_reg(cont, 2);
    if(n<10)
        return n;
    return n%10+base_diez(n/10, b, cont)*b;
}

int piramide(int n, int &cont){
    cont++;
    int c = getchar();
    stack_reg(cont, 1);
    if(n<0 || n==0)
        return 0;
    if(n>1 || n==1)
        return pow(n, 2)+piramide(n-1, cont);
}

int bi_arbol(int i, int j, int &cont){
    cont++;
    int c = getchar();
    stack_reg(cont, 2);
    if(i>=1 && j>=1)
        return bi_arbol(i-1, j, cont)+1+bi_arbol(i, j-1, cont);
    if(i==0 || j==0)
        return 1;
}

int grupos_dif(int n, int k, int &cont){
    cont++;
    int c = getchar();
    stack_reg(cont, 2);
    if(k>n)
        return 0;
    if(k==1)
        return n;
    if(k<n || k==n)
        return grupos_dif(n-1, k, cont)+grupos_dif(n-1, k-1, cont);
}

float wallis(float n, int &cont){
    cont++;
    int c = getchar();
    stack_reg(cont, 1);
    if(n==0)
        return 1;
    if(fmod(n, 2)==0)
        return (n/(n+1))*wallis(n-1, cont);
    else
        return ((n+1)/n)*wallis(n-1, cont);
}
