import java.util.Scanner;

public class Calculadora {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double num1,num2;
        int escolha;
        System.out.println("digite um numero: ");
        num1 = sc.nextDouble();
        System.out.println("digite um numero: ");
        num2 = sc.nextDouble();
        System.out.println("digite escolha de calculo 1)soma 2)subtração 3)multiplicação 4)divisão: ");
        escolha = sc.nextInt();
        if (escolha == 1) {
            System.out.println("a soma dos dois numeros e de " + (num1 + num2));
        }
        else if (escolha == 2) {
            System.out.println("a subtração dos dois numeros e de " + (num1 - num2));
        }
        else if (escolha == 3) {
            System.out.println("a multiplicação dos dois numeros e de " + (num1 * num2));
        }
        else if (escolha == 4) {
            System.out.println("a divisão dos dois numeros e de " + (num1 / num2));
        }
        else{
            System.out.println("error");
        }
        sc.close();
    }
}
