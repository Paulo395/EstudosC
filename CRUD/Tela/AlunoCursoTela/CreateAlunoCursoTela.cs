using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.AlunoCursoTela
{
    public static class CreateAlunoCursoTela
    {
        public static void Load()
        {
            Console.Clear();
            Console.WriteLine("Novo AlunoCurso");
            Console.WriteLine("-------------");
            Console.Write("Progresso: ");
            var progresso = Int16.Parse(Console.ReadLine());

            Create(new AlunoCurso
            {
                Progresso = progresso
            });
            Console.ReadKey();
            MenuAlunoCursoTela.Load();
        }

        public static void Create(AlunoCurso AlunoCurso)
        {
            Console.WriteLine(AlunoCurso.Progresso);


            try
            {
                var repository = new Repository<AlunoCurso>(Database.Connection);
                repository.Create(AlunoCurso);
                Console.WriteLine("AlunoCurso cadastrada com sucesso!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Não foi possível salvar o AlunoCurso");
                Console.WriteLine(ex.Message);
            }
        }
    }
}