package somepackage;

public class A
{
	private int a = 0;
	public int sometest = 10;
	public void SomePrint()
	{
		System.out.println("object of type A, SomePrint() method");
	}
	public String PrintVals()
	{
		String vals = String.format("A: a = %d\n", this.a);
		System.out.printf(vals);
		return vals;
	}
}