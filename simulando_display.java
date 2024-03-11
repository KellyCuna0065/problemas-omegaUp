
// https://omegaup.com/arena/problem/Simulando-un-Display/

import java.util.Scanner;
public class Main {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        String n, ch;
        
        char number0[][] = {{'.', '.', '.'},{'.', ' ', '.'},{'.', ' ', '.'},{'.', ' ', '.'},{'.', '.', '.'}}; 
        char number1[][] = {{' ', ' ', '.'},{' ', ' ', '.'},{' ', ' ', '.'},{' ', ' ', '.'},{' ', ' ', '.'}}; 
        char number2[][] = {{'.', '.', '.'},{' ', ' ', '.'},{'.', '.', '.'},{'.', ' ', ' '},{'.', '.', '.'}}; 
        char number3[][] = {{'.', '.', '.'},{' ', ' ', '.'},{'.', '.', '.'},{' ', ' ', '.'},{'.', '.', '.'}}; 
        char number4[][] = {{'.', ' ', '.'},{'.', ' ', '.'},{'.', '.', '.'},{' ', ' ', '.'},{' ', ' ', '.'}};
        char number5[][] = {{'.', '.', '.'},{'.', ' ', ' '},{'.', '.', '.'},{' ', ' ', '.'},{'.', '.', '.'}}; 
        char number6[][] = {{'.', '.', '.'},{'.', ' ', ' '},{'.', '.', '.'},{'.', ' ', '.'},{'.', '.', '.'}}; 
        char number7[][] = {{'.', '.', '.'},{' ', ' ', '.'},{' ', ' ', '.'},{' ', ' ', '.'},{' ', ' ', '.'}};
        char number8[][] = {{'.', '.', '.'},{'.', ' ', '.'},{'.', '.', '.'},{'.', ' ', '.'},{'.', '.', '.'}}; 
        char number9[][] = {{'.', '.', '.'},{'.', ' ', '.'},{'.', '.', '.'},{' ', ' ', '.'},{'.', '.', '.'}}; 
        
        n = sc.next();
        ch = sc.next();
        
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < n.length(); j++){
                for(int k = 0; k < 3; k++){
                    switch(n.charAt(j)){
                        case '0':
                            if(number0[i][k] != ' ')    System.out.print(ch);
                            else    System.out.print(" ");
                            break;
                        case '1':
                            if(number1[i][k] != ' ')    System.out.print(ch);
                            break;
                        case '2':
                            if(number2[i][k] != ' ')    System.out.print(ch);
                            else    System.out.print(" ");
                            break;
                        case '3':
                            if(number3[i][k] != ' ')    System.out.print(ch);
                            else    System.out.print(" ");
                            break;
                        case '4':
                            if(number4[i][k] != ' ')    System.out.print(ch);
                            else    System.out.print(" ");
                            break;
                        case '5':
                            if(number5[i][k] != ' ')    System.out.print(ch);
                            else    System.out.print(" ");
                            break;
                        case '6':
                            if(number6[i][k] != ' ')    System.out.print(ch);
                            else    System.out.print(" ");
                            break;
                        case '7':
                            if(number7[i][k] != ' ')    System.out.print(ch);
                            else    System.out.print(" ");
                            break;
                        case '8':
                            if(number8[i][k] != ' ')    System.out.print(ch);
                            else    System.out.print(" ");
                            break;
                        case '9':
                            if(number9[i][k] != ' ')    System.out.print(ch);
                            else    System.out.print(" ");
                            break;
                    }
                }
                System.out.print(" ");
            }
            System.out.println("");
        }
        
    }
}_