package buoi6;

public class Prameter_Object {
    public static void swap(Point A, Point B) {
        Point tmp = new Point(A.x, A.y);
        A.setLocasion(B);
        B.setLocasion(tmp);
    }
    public static void main(String[] args) {
        Point P1 = new Point(1, 1);
        Point P2 = new Point(2, 2);
        P1.show();
        P2.show();
        swap(P1, P2);
        P1.show();
        P2.show();
    }
}
