class College{
static	String Collegename="sggs";
static String address="pune";
static void library(){
	System.out.println("library is open");
}
}

public class Student extends College{


static String name="abc";
static int rollno=1;
public static void main(String args[])
{
	System.out.println(name+rollno);
	College obj=new College();
		System.out.println(Collegename);
System.out.println(address);
obj.library();
}
}