package aplicacao;

public class Produto {
	public String produto;
	public double quantidade;
	public double preco;
	
	public void addProduto(double quantProduto) {
		this.quantidade += quantProduto;
	}
	
	public void subProduto(double quantProduto) {
		this.quantidade -= quantProduto;
	}
}
