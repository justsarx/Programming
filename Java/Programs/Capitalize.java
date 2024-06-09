package Java.Programs;

public class Capitalize {
    public static void main(String[] args) {
        String str = "hello world";

        String firstLetter = str.substring(0, 1).toUpperCase();
        String restOfString = str.substring(1);

        String capitalizedString = firstLetter + restOfString;

        System.out.println("Original string: " + str);
        System.out.println("Capitalized string: " + capitalizedString); 
    }
}
