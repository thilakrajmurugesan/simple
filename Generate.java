import java.util.Scanner;

class GFG {
	public static void main (String[] args) {
		int number;
		System.out.println("Enter the number");
		Scanner s= new Scanner(System.in);
		number=s.nextInt();
		for(int i=1;i<=10;i++){
		    System.out.println(number +"*"+ i +"=" + (number * i));
		}
	}
}
