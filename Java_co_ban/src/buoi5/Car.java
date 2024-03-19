package buoi5;
public class Car {
    String name;
    int weight;
    float speed;
    public Car(String n, int w, float s) {
        this.name = n;
        this.weight = w;
        this.speed = s;
        System.out.println("Tên xe: " + n + " Trọng lượng: " + w + " Tốc độ: " + s);
    }
    public void speedUp() {
        speed += 20;
    }
    public void slowDn(){
        speed -= 20;
    }
    public void stop() {
        speed = 0;
    }
    public void print(String n, int w, float s) {
        name = n;
        weight = w;
        speed = s;
        System.out.println("Tên xe: " + n + " Trọng lượng: " + w + " Tốc độ: " + s);
    }
    public static void main(String[] args) {
        Car myCar = new Car("Vinfast", 500, 180);
        Car yourCar = new Car("HuynDai", 900, 250);
//        myCar.name = "Toyota";
//        myCar.weight = 700;
//        myCar.speed = 330;
//        yourCar.name = "Ferari";
//        yourCar.weight = 600;
//        yourCar.speed = 230;
//        System.out.println("Tên xe: " + myCar.name + " Trọng lượng: " + myCar.weight + " Tốc độ: " + myCar.speed);
//        System.out.println("Tên xe: " + yourCar.name + " Trọng lượng: " + yourCar.weight + " Tốc độ: " + yourCar.speed);
//        myCar.print("Mecxadec", 800, 350);
    }
}