import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class calculator extends Applet implements ActionListener {
    Label l1, l2, l3;
    TextField t1, t2, t3;
    Button b1, b2, b3, b4, b5, b6, b7;

    public void init() {
        setBackground(Color.gray);
        setLayout(new FlowLayout());
        l1 = new Label("First Number");
        l2 = new Label("Second Number");
        l3 = new Label("Result");
        t1 = new TextField(15);
        t2 = new TextField(15);
        t3 = new TextField(15);
        b1 = new Button("+");
        b2 = new Button("-");
        b3 = new Button("*");
        b4 = new Button("/");
        b5 = new Button("%");
        b6 = new Button("RESET");
        b7 = new Button("EXIT");

        // Add components to the applet
        add(l1);
        add(t1);
        add(l2);
        add(t2);
        add(l3);
        add(t3);
        add(b1);
        add(b2);
        add(b3);
        add(b4);
        add(b5);
        add(b6);
        add(b7);

        // Add action listeners
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);
        b6.addActionListener(this);
        b7.addActionListener(this);
    }

    public void actionPerformed(ActionEvent ae) {
        int result;
        int a = Integer.parseInt(t1.getText());
        int b = Integer.parseInt(t2.getText());
        if (ae.getSource() == b1) {
            result = a + b;
            t3.setText(Integer.toString(result));
        } else if (ae.getSource() == b2) {
            result = a - b;
            t3.setText(Integer.toString(result));
        } else if (ae.getSource() == b3) {
            result = a * b;
            t3.setText(Integer.toString(result));
        } else if (ae.getSource() == b4) {
            result = a / b; // Note: Integer division. For floating-point result, cast operands to double.
            t3.setText(Integer.toString(result));
        } else if (ae.getSource() == b5) {
            result = a % b;
            t3.setText(Integer.toString(result));
        } else if (ae.getSource() == b6) {
            t1.setText("");
            t2.setText("");
            t3.setText("");
        } else if (ae.getSource() == b7) {
            // For an applet, you might want to navigate away or reload the page instead.
            // System.exit(0); is not suitable for applets.
        }
    }
}