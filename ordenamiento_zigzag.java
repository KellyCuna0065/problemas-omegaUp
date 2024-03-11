
// https://omegaup.com/arena/problem/ozz/#problems

import java.util.Scanner;

public class Main {
    
    public static int forward(int[] a, int n, int aux, int cont){
        
        for (int j = 1; j < n; j++) {
            if (a[j] < a[j-1]) {
                aux = a[j];
                a[j] = a[j-1];
                a[j-1] = aux;
                cont++;
            }
        }
        
        return cont;
    }
    
    public static int backward(int[] a, int n, int aux, int cont){
        
        for (int j = n - 2; j >= 0; j--) {
            if (a[j] > a[j+1]) {
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                cont++;
            }
        }
        
        return cont;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int n, cont = 1, j = 0;
        
        n = sc.nextInt();
        
        int a[] = new int[n];
        
        for(j = 0; j < n; j++){
            a[j] = sc.nextInt();
        }
        
        j = 0;
        
        while (cont != 0) {
            
            if (j == 0) {
                cont = forward(a, n, 0, 0);
                System.out.print(cont + " ");
            
                cont = backward(a, n, 0, 0);
                System.out.print(cont + " ");
            }
            else{
                cont = forward(a, n, 0, 0);
                cont += backward(a, n, 0, 0);
            }
            
            j++;
                        
        }
        
        System.out.print(j);
        
    }
}