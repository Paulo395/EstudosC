using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.AlunoCursoTela
{
    public static class UpdateAlunoCursoTela
    {
        public static void Load()
        {
            Console.Clear();
            Console.WriteLine("Atualizando um AlunoCurso");
            Console.WriteLine("-------------");
            Console.Write("Nome: ");
            var progresso = Int16.Parse(Console.ReadLine());

            Update(new AlunoCurso
            {
                Progresso = progresso
            });
            Console.ReadKey();
            MenuAlunoCursoTela.Load();
        }

        public static void Update(AlunoCurso AlunoCurso)
        {
            try
            {
                var repository = new Repository<AlunoCurso>(Database.Connection);
                repository.Update(AlunoCurso);
                Console.WriteLine("AlunoCurso atualizado com sucesso!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Não foi possível atualizar a AlunoCurso");
                Console.WriteLine(ex.Message);
            }
        }
    }
}