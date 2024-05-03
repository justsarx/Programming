package Java.Programs;

import java.io.InputStream;
import java.util.Scanner;
import java.nio.charset.StandardCharsets;


public class StreamToStr {
    public static void main(String[] args) {
        InputStream inputStream = System.in; // Replace with your InputStream instance
        try (Scanner scanner = new Scanner(inputStream, StandardCharsets.UTF_8.name())) {
            String text = scanner.useDelimiter("\\A").next();
            System.out.println(text);
        }
    }
}