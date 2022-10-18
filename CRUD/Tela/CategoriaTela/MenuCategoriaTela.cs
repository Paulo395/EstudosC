using System;

namespace Blog.Tela.CategoriaTela
{
    public static class MenuCategoriaTela
    {
        public static void Load()
        {
            // Console.Clear();
            Console.WriteLine("Gestão de Categorias");
            Console.WriteLine("--------------");
            Console.WriteLine("O que deseja fazer?");
            Console.WriteLine();
            Console.WriteLine("1 - Listar Categorias");
            Console.WriteLine("2 - Cadastrar Categorias");
            Console.WriteLine("3 - Atualizar Categorias");
            Console.WriteLine("4 - Excluir Categorias");
            Console.WriteLine();
            Console.WriteLine();
            var option = short.Parse(Console.ReadLine());

            switch (option)
            {
                case 1:
                    ListCategoriaTela.Load();
                    break;
                case 2:
                    CreateCategoriaTela.Load();
                    break;
                case 3:
                    UpdateCategoriaTela.Load();
                    break;
                case 4:
                    DeleteCategoriaTela.Load();
                    break;
                default: Load(); break;
            }
        }
    }
}