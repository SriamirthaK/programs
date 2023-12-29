public class factorial {
    public static void main(String[] args) {
        int fact = 1;
        int n = 5;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        System.out.println(fact);

    }
}
/*and the output is enter num 5
5!* 4! * 3!* 2!* 1 = 120 */
