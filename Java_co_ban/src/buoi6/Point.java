package buoi6;

public class Point {
    int x;
    int y;
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setLocasion(Point t) {
        this.x = t.x;
        this.y = t.y;
    }

    public void show() {
        System.out.println("(" + x + ", " + y + ")");
    }
}
