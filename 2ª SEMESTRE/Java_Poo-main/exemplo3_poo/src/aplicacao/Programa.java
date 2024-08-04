package aplicacao;
import java.util.Scanner;
import javax.swing.JOptionPane;
public class Programa {

	public static void main(String[] args) {
		
					// INSERINDO DADOS DOS CLIENTES
		
		Scanner scan = new Scanner(System.in);
		Cliente cliente = new Cliente();
		Produto produto = new Produto();
		
		System.out.println("Digite o nome do cliente: ");
		cliente.cliente = scan.next();
		
		System.out.println("Quantos clientes devem ser inseridos no cadastro?");
		double quantCliente = scan.nextDouble();
		cliente.addCliente(quantCliente);
		
		System.out.println("Quantos clientes cancelaram o cadastro ?");
		quantCliente = scan.nextDouble();
		cliente.subCliente(quantCliente);
		
					// INSERINDO DADOS DOS PRODUTOS DO ESTOQUE
		
		System.out.println("Digite o nome do produto: ");
		produto.produto = scan.next();
		
		System.out.println("Digite o preço do produto: ");
		produto.preco = scan.nextDouble();
		
		System.out.println("Quantos produtos devem ser inseridos ao estoque: ");
		double quantProduto = scan.nextDouble();
		produto.addProduto(quantProduto);
		
		System.out.println("Alguma venda foi realizada? Digite a quantidade de produtos vendidos: ");
		quantProduto = scan.nextDouble();
		produto.subProduto(quantProduto);
		
		System.out.println("Nome do cliente: " + cliente.cliente+"Quantidade de clientes: " + cliente.quantidade+"Nome: "+produto.produto+"Preço: "+produto.preco+"Quantidade: "+produto.quantidade);
		JOptionPane.showConfirmDialog(null, "Nome do cliente: " + cliente.cliente+" Quantidade de clientes: " + cliente.quantidade+" Nome: "+produto.produto+" Preço: "+produto.preco+" Quantidade: "+produto.quantidade);
		
		
		scan.close();
	}

}
