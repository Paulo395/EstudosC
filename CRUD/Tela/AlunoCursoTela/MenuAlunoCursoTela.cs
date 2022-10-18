using System;

namespace Blog.Tela.AlunoCursoTela
{
    public static class MenuAlunoCursoTela
    {
        public static void Load()
        {
            // Console.Clear();
            Console.WriteLine("Gestão de AlunoCursos");
            Console.WriteLine("--------------");
            Console.WriteLine("O que deseja fazer?");
            Console.WriteLine();
            Console.WriteLine("1 - Listar AlunoCursos");
            Console.WriteLine("2 - Cadastrar AlunoCursos");
            Console.WriteLine("3 - Atualizar o AlunoCursos");
            Console.WriteLine("4 - Excluir AlunoCursos");
            Console.WriteLine();
            Console.WriteLine();
            var option = short.Parse(Console.ReadLine());

            switch (option)
            {
                case 1:
                    ListAlunoCursoTela.Load();
                    break;
                case 2:
                    CreateAlunoCursoTela.Load();
                    break;
                case 3:
                    UpdateAlunoCursoTela.Load();
                    break;
                case 4:
                    DeleteAlunoCursoTela.Load();
                    break;
                default: Load(); break;
            }
        }
    }
}