package ThiCuoiKy;

public class NapChong {
        public int add(int a, int b) {
            return a + b;
        }

        public int add(int a, int b, int c) {
            return a + b + c;
        }

        public int add(int... numbers) {
            int sum = 0;
            for (int number : numbers) {
                sum += number;
            }
            return sum;
        }

        public static void main(String[] args) {
            NapChong calc = new NapChong();

            System.out.println("Sum (2 args): " + calc.add(1, 2));

            System.out.println("Sum (3 args): " + calc.add(1, 2, 3));

            System.out.println("Sum (varargs): " + calc.add(1, 2, 3, 4));
            System.out.println("Sum (varargs): " + calc.add(5, 6, 7, 8, 9));
        }
    }