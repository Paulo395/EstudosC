using System;

namespace Blog.Tela.AutorTela
{
    public static class MenuAutorTela
    {
        public static void Load()
        {
            Console.WriteLine("Gestão de Autores");
            Console.WriteLine("--------------");
            Console.WriteLine("O que deseja fazer?");
            Console.WriteLine();
            Console.WriteLine("1 - Listar Autores");
            Console.WriteLine("2 - Cadastrar Autores");
            Console.WriteLine("3 - Atualizar Autores");
            Console.WriteLine("4 - Excluir Autores");
            Console.WriteLine();
            Console.WriteLine();
            var option = short.Parse(Console.ReadLine());

            switch (option)
            {
                case 1:
                    ListAutorTela.Load();
                    break;
                case 2:
                    CreateAutorTela.Load();
                    break;
                case 3:
                    UpdateAutorTela.Load();
                    break;
                case 4:
                    DeleteAutorTela.Load();
                    break;
                default: Load(); break;
            }
        }
    }
}