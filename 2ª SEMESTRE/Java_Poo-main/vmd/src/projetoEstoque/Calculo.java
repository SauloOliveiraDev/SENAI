package projetoEstoque;
import javax.swing.*;
import java.awt.*;

public class Calculo {
	JFrame frame = new JFrame("Resultado");
	String nomeProduto[] = new String[3];
	int tempoReposicao[] = new int[3];
	int quantProduto[] = new int[3];
	int quantEstoque[] = new int[3];
	Float mediaMes[] = new Float[5];
	float somaMes;
	float vmd[] = new float[3];
	Float estoqueMin[] = new Float[3];
	Float estoqueMax[] = new Float[3];
	
	public void appConfig() {
		for(int i = 0; i<3; i++) {
			nomeProduto[i] = JOptionPane.showInputDialog("Digite o "+ (i+ 1)+ "ª nome do produto");			
			for(int j = 0; j<5; j++) {
				mediaMes[j] = Float.parseFloat(JOptionPane.showInputDialog("Digite a média do "+ (j+ 1)+ "ª mês"));
				
				somaMes += mediaMes[j];
			}
			vmd[i] = (somaMes / 5) / 25;
			somaMes = 0;
			tempoReposicao[i] = Integer.parseInt(JOptionPane.showInputDialog("Qual o tempo de reposição(em dias) do produto"));
			quantProduto[i] = Integer.parseInt(JOptionPane.showInputDialog("Digite a quantidade de "+ nomeProduto[i] +" no lote de Reposição"));
			estoqueMin[i] = tempoReposicao[i] * vmd[i];
			estoqueMax[i] = estoqueMin[i] + quantProduto[i];
			quantEstoque[i] = Integer.parseInt(JOptionPane.showInputDialog("Digite a quantidade de "+ nomeProduto[i] +" no estoque atual"));
			
		}
		
		frame.setVisible(true);
		frame.setSize(800, 700);
		
		JTextArea texto = new JTextArea();
		texto.setBounds(1, 1, 800, 700);
		frame.add(texto);
		for(int i = 0; i<3; i++) {
		texto.append("Nome: "+nomeProduto[i]+"\n"+"Venda Media Mensal: "+ vmd[i]+"\n"+"Estoque Minimo: "+estoqueMin[i]+"\n"+"Estoque Maximo: "+estoqueMax[i]+"\n");
		if(quantEstoque[i] > estoqueMin[i]) {
			texto.append("NÃO COMPRAR "+nomeProduto[i]+"\n\n");
		}else {
			texto.append("COMPRAR "+nomeProduto[i]+"\n\n");
		}
		texto.setFont(new Font("Arial", Font.BOLD, 20));
		}
		
		
	}
	
	
}
