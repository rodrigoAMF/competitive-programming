import java.util.ArrayList;

public class Primo {

	public static void main(String a[]) {
		ArrayList primos = new ArrayList();

		for(int i = 0; i < 1000000; ++i) {
			primos.add(0);
		}
		primos.set(0,1);
		primos.set(1,1);
		for(int i = 0; i < 1000000; ++i) {
			for(int j = i; j < 1000000; ++j) {
				primos.set(i*j,1);
			}
		}

		for(int i = 0; i < 1000000; ++i) {
			System.out.println(primos.get(i));
		}


	}

}