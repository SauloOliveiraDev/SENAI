package caixadeTexto;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JLabel;
import javax.swing.JTextArea;
import javax.swing.JTextField;


public class aplicacao {
	
	public static void main(String[] args) {
		JFrame frame = new JFrame("Simple GUI Exemple");
		frame.setSize(400, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setLayout(null);
		
		JTextField textField = new JTextField();
		textField.setBounds(120,20,200,20);
		frame.add(textField);
		
		JTextArea textArea = new JTextArea();
		textArea.setBounds(20,50,300,150);
		frame.add(textArea);
		
		JButton button = new JButton("Clique aqui");
		button.setBounds(150,220,100,30);
		button.addActionListener(new ActionListener() {
				public void actionPerformed(ActionEvent e) {
					String textoDigitado = textField.getText();
					textArea.append(textoDigitado + "\n");
					textField.setText("");
		}}
				);
		
		frame.add(button);
		
		frame.setVisible(true);

	}

}
