
// https://omegaup.com/arena/problem/Ruleta-de-Matrices/

import java.util.Scanner;

public class Main {

    public static void turnOne(int[][] a, int r, int c){
        for(int i = 0; i < c; i++){
            for(int j = r-1; j >= 0; j--){
                System.out.print(a[j][i] + " ");
            }
            System.out.println("");
        }
        
    }
    
    public static void turnTwo(int[][]a, int r, int c){
        for(int i = r-1; i >= 0; i--){
            for(int j = c-1; j >= 0; j--){
                System.out.print(a[i][j] + " ");
            }
            System.out.println("");
        }
    }
    
    public static void turnThree(int[][]a, int r, int c){  
        for(int i = c-1; i >= 0; i--){
            for(int j = 0; j < r; j++){
                System.out.print(a[j][i] + " ");
            }
            System.out.println("");
        }
    }
    
    public static void noTurn(int[][] a, int r, int c){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                System.out.print(a[i][j] + " ");
            }
            System.out.println("");
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int rows, cols;
        long x, y;
        
        rows = sc.nextInt();
        cols = sc.nextInt();
        
        int a[][] = new int[rows][cols];
        for (int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                a[i][j] = sc.nextInt();
            }
        }
        
        x = sc.nextLong();
        y = sc.nextLong();
        
        if(x == y) {
            noTurn(a, rows, cols);
            System.exit(0);
        }else if (x > y){
            x -= y;
            x %= 4;
            
            if(x == 1)  turnOne(a, rows, cols);
            else if(x == 2)     turnTwo(a, rows, cols);
            else if(x == 3)     turnThree(a, rows, cols);
            else    noTurn(a, rows, cols);
            
        } else {
            y -= x; 
            y %= 4;
            
            if(y == 1)  turnThree(a, rows, cols);
            else if(y == 2) turnTwo(a, rows, cols);
            else if(y == 3) turnOne(a, rows, cols);
            else    noTurn(a, rows, cols);
            
        }
        
    }
}