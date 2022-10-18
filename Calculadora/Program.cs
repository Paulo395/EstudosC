
internal class Program
{
    private static void Main(string[] args)
    {
        float num1 = 0, num2 = 0;

        while(true){

            Console.WriteLine("\tDigite o simbolo da operação deseja realizar:");
            Console.WriteLine("\tValores atuais: " + num1 + " e " + num2 + "\n");
            Console.WriteLine("+\tAdição\n-\tSubtração\n/\tDivisão\n*\tMultiplicação\n");
            Console.WriteLine("m\tAlterar Valores\n");
            
            float resposta=0;
            int y=0;
            string? option = Console.ReadLine();

            switch(option){
                case "+":
                    resposta = Soma(num1,num2);
                    break;
                case "-":
                    resposta = Subtracao(num1, num2);
                    y++;
                    break;
                case "/":
                    resposta = Divisao(num1, num2);
                    y++;
                    break;
                case "*":
                    resposta = Multiplicacao(num1, num2);
                    y++;
                    break;
                case "m":
                    Console.WriteLine("Digite o primeiro valor: ");
                    num1 = Convert.ToInt32(Console.ReadLine());

                    Console.WriteLine("Digite o segundo valor: ");
                    num2 = Convert.ToInt32(Console.ReadLine());
                    break;
                default:
                    Console.WriteLine("\tComando não reconhecido.");
                    break;
            }

            if(y==1){
                Console.WriteLine("\tA resposta é: " + resposta);
            }

            Console.WriteLine("\tPressione Enter para retornar.");
            Console.ReadLine();
        }

        static float Soma(float option, float y)
        {
            return option + y;
        }
        static float Subtracao(float option, float y)
        {
            return option - y;
        }
        static float Divisao(float option, float y)
        {
            return option / y;
        }
        static float Multiplicacao(float option, float y)
        {
            return option * y;
        }
    }
}

