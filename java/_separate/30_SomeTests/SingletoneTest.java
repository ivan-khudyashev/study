public class SingletoneTest {
	public static void main(String[] args) {
		SomeClass a = SomeClass.onlyInstance;
		System.out.println(a.toString());
	}
}

class SomeClass {
	private String val;
	private SomeClass(String str) {
		this.val = str;
	}
	public final static SomeClass onlyInstance = new SomeClass("Hello");
	@Override
	public String toString() {
		return val;
	}
}