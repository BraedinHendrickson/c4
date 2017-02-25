package project2;

public class bunny {
	public static void main(String[] args){
		double intrestMod =0.015;
		double bBal = 1000.0;
		double eBal;
		double pay = 20.00;
		double intrest;
		double tIntrest=0;
		
		for (int i=1; i>13; i++){
			intrest= intrestMod*bBal;
			eBal=bBal-pay+intrest;
			tIntrest=tIntrest+intrest;
			String s= bBal+"	"+tIntrest+"	"+pay+"	"+eBal;
			//System.out.println("hellow world");
			 System.out.println("Hello, World");
			bBal=eBal;
		}
	}
	
}
