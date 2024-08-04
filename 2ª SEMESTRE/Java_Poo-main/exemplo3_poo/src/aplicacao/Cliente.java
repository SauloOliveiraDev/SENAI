package aplicacao;

public class Cliente {
	public String cliente;
	public double quantidade = 0;
	
	public void addCliente( double quantCliente) {
		this.quantidade += quantCliente;
	}
	
	public void subCliente( double quantCliente) {
		this.quantidade -= quantCliente;
	}
}
