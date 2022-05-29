/* 
3.3.8 Em uma loja, todos os clientes que comprarem mais de R$
300,00 receberão um desconto proporcional ao valor de sua
compra, de acordo com a tabela abaixo:
Você foi incumbido de fazer um programa que permita que o
cliente entre com o valor dos produtos comprados e mostre o total
da compra, o valor do desconto e o preço a pagar. Pergunte ao
usuário se deseja terminar a digitação dos produtos e também se deseja finalizar o programa.
*/
int main(){
    
    int valor, numProd, total, desconto;
    printf("Digite o numero de produtos que voce comprou:");
    scanf("%i", &numProd);
    
    total = 0;
    int contador = 1;

    while(contador <=  numProd){
        printf("Digite o valor gasto no produto: R$");
        scanf("%i", &valor);
        total = total + valor;
        contador = contador + 1;
    }
    
    if(total <= 500)
        desconto = total * 0.05;
    else if(total >=501 && total <= 1000)
        desconto = total * 0.10;
    else
        desconto = total * 0.12;
        
    printf("Voce gatou um valor total de R$%i \n", total);
    int totalComDesc = total - desconto;
    printf("Tirando os descontos voce pagara : R$%i", totalComDesc);
}