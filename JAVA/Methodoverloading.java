public class Methodoverloading
{
	public void Add(int a,int b)
	{
	System.out.println(a+b);
	}
public void Add(int a,int b,int c)
{
	System.out.println(a+b+c);
}
public static void main(String args[])
{
	System.out.println("hello");
	Methodoverloading obj=new Methodoverloading();
	obj.Add(15,10);
	obj.Add(1990,2,3);
}
}