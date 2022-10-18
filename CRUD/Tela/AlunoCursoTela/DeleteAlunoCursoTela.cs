using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.AlunoCursoTela
{
    public static class DeleteAlunoCursoTela
    {
        public static void Load()
        {
            Console.Clear();
            Console.WriteLine("Excluir um AlunoCurso");
            Console.WriteLine("-------------");
            Console.Write("Qual o id do AlunoCurso que deseja excluir? ");
            var id = Console.ReadLine();

            Delete(id);
            Console.ReadKey();
            MenuAlunoCursoTela.Load();
        }

        public static void Delete(string id)
        {
            try
            {
                var repository = new Repository<AlunoCurso>(Database.Connection);
                repository.Delete(id);
                Console.WriteLine("AlunoCurso excluído com sucesso!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Não foi possível excluir o AlunoCurso");
                Console.WriteLine(ex.Message);
            }
        }
    }
}