/****************************************************************
 * Modify the .java files, the .class files need to be deomcpiled in order to edit
 * Widening Casting(automatic): Type casting is automatically handled by the Java compiler, moving from a smaller variable size to a larger size
 * Narrowing Casting(manual): Casting to a variabel to a smaller size variable, () and data type infront of the value being assigned
 * 
 ***************************************************************/
public class Main {

    public static double calcAreaRect( double length, double width ){

        return length * width;
    }

    public static void newMethod(  ){
        System.out.println( "Hello, I am a method" );
    }
    public static void main(String[] args){
        
        int age = 25;
        
        //Floats 6 -7 digits of percision past the deciaml, double 16 digits of percision past the decimal
        //Always end floats with an f, doubles with a d, and scientific notation with an e
        double width = 14.2d;
        double length = 12.678989d;
        double area = 0.00d;

        final String name = "Josh"; //String has to captialized for somereason, final is just the const keyword
        
        System.out.println( "Hello lInux I am a java program!" );
        System.out.println( "Hello, my name is " + name + " and I am " + age + " years old" ) ; //Casting age to a string is not needed for some reason, why?
        newMethod();
        area = calcAreaRect(length, width);

        System.out.println( "Area of " + width + " " + length + " is equal to " + area );
    }
}
