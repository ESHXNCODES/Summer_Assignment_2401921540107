interface Test {
    int square(int n);
}

// Arithmetic class implementing interface
class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}

// Point class
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
}

// Box class
class Box {
    double length, breadth;

    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double area() {
        return length * breadth;
    }
}

// Box3D class
class Box3D extends Box {
    double height;

    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    public double volume() {
        return length * breadth * height;
    }
}

// Outer class with Inner class
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

// Main class (ToTestInt)
public class ToTestInt {
    public static void main(String[] args) {

        // Interface implementation
        Arithmetic a = new Arithmetic();
        System.out.println("Square of 5 = " + a.square(5));

        // Outer and Inner class
        Outer out = new Outer();
        out.display();

        Outer.Inner in = out.new Inner();
        in.display();

        // Point class
        Point p = new Point();
        p.display();

        p.setXY(10, 20);
        p.display();

        // Box and Box3D
        Box b = new Box(5, 4);
        System.out.println("Area = " + b.area());

        Box3D b3 = new Box3D(5, 4, 3);
        System.out.println("Area of Box3D = " + b3.area());
        System.out.println("Volume of Box3D = " + b3.volume());
    }
}