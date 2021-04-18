public class Methodoverloading3
{
	public int Add(int a,int b)
	{
	System.out.println(a+b);
	return(a+b);
	}
public double Add(double a,double b)
{
	System.out.println(a+b);
		return(a+b);

}
public void Add(int a,int b,int c)
{
	System.out.println(a+b+c);
}
public static void main(String args[])
{
	System.out.println("hello");
	Methodoverloading3 obj=new Methodoverloading3();
	int output= obj.Add(15,10);
	System.out.println("we are in main method "+output); //+ sign is used concadination means join
	obj.Add(1990,2,3);
	double output2= obj.Add(15.10,10.15);
		System.out.println("we are in main method of double "+output2);
}
}