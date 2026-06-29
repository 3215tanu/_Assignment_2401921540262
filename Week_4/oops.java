interface Test {
    int square(int n);
}

class Arithmetic implements Test {

    public int square(int n) {
        return n * n;
    }
}

public class ToTestInt {
    public static void main(String[] args) {

        Arithmetic obj = new Arithmetic();

        int num = 8;
        System.out.println("Square of " + num + " = " + obj.square(num));
    }
}



class Outer {

    void display() {
        System.out.println("Display method of Outer class");
    }

  
    class Inner {

        void display() {
            System.out.println("Display method of Inner class");
        }
    }
}


public class Main {
    public static void main(String[] args) {

        Outer obj = new Outer();
        obj.display();

        Outer.Inner in = obj.new Inner();
        in.display();
    }
}

class Point {

    private int x, y;
    public Point() {
        x = 0;
        y = 0;
    }
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void display() {
        System.out.println("Point = (" + x + ", " + y + ")");
    }

    public static void main(String[] args) {

        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p2.setX(15);
        p2.setY(25);
        p2.display();

        p2.setXY(30, 40);
        p2.display();
    }
}

class Box {

    protected double length;
    protected double breadth;

    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double area() {
        return length * breadth;
    }
}

class Box3D extends Box {

    private double height;

    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    public double volume() {
        return length * breadth * height;
    }
}

public class Main {
    public static void main(String[] args) {

        Box b = new Box(12, 6);
        System.out.println("Area = " + b.area());

        Box3D b3 = new Box3D(12, 6, 8);
        System.out.println("Area = " + b3.area());
        System.out.println("Volume = " + b3.volume());
    }
}
