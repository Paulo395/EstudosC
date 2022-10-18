using System;

namespace Blog.Tela.CursoTela
{
    public static class MenuCursoTela
    {
        public static void Load()
        {
            Console.WriteLine("Gestão de Cursos");
            Console.WriteLine("--------------");
            Console.WriteLine("O que deseja fazer?");
            Console.WriteLine();
            Console.WriteLine("1 - Listar Cursos");
            Console.WriteLine("2 - Cadastrar Cursos");
            Console.WriteLine("3 - Atualizar Cursos");
            Console.WriteLine("4 - Excluir Cursos");
            Console.WriteLine();
            Console.WriteLine();
            var option = short.Parse(Console.ReadLine());

            switch (option)
            {
                case 1:
                    ListCursoTela.Load();
                    break;
                case 2:
                    CreateCursoTela.Load();
                    break;
                case 3:
                    UpdateCursoTela.Load();
                    break;
                case 4:
                    DeleteCursoTela.Load();
                    break;
                default: Load(); break;
            }
        }
    }
}