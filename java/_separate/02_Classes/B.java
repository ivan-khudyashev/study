class B extends somepackage.A
{
	private int b = 1;
	@Override public void SomePrint()
	{
		System.out.println("object of type B, SomePrint() method");
	}
	@Override public String PrintVals()
	{
		String vals = String.format("B: superclass = %s; b = %d\n", super.PrintVals(), this.b);
		System.out.printf(vals);
		return vals;
	}
}