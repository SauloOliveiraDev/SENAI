package aplicacao;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class aplicacao {
	public static void main(String[] args) {
		JFrame frame = new JFrame("Sistema de Gestão de estoque");
		frame.setSize(300,200);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JButton button = new JButton("Clique para acessar o sistema");
		
		button.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
			JOptionPane.showMessageDialog(frame,"O sistema está em construção");
			}
		}
				);
		
		frame.getContentPane().add(button);
		
		frame.setVisible(true);
		
	}

}
