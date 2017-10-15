import java.io.*;

class GFG {
	public static void main (String[] args) {
		int l = 50;
               
                System.out.println("Printing even numbers between 1 and " + l);
               
                for(int i=1; i <= l; i++){
                       
                        //if the number is not divisible by 2 then it is odd
                        if( i % 2 == 0){
                                System.out.print(i + " ");
                        }
                }
        }
}
