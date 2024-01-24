class Main {
	public static void main(String[] args) {

	}
	public static void myFunction(Node<Integer> node) {
		if (node == null) return 0;
		return myFunction() + ((node.getValue() + 1) % 2);
	}
}
