
public class Main
{
	public static void main(String[] args) {
	int [] a={1,2,3};
	int x=0;
	for(int i=0;i<3;i++){
	    x=a[i];
	    a[i]=x*x*x;
	} 
	for(int i=0;i<3;i++){
	    System.out.println(a[i]);
	}
	
	}	
}
