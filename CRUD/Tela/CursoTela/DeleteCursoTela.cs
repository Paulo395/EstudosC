using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.CursoTela
{
    public static class DeleteCursoTela
    {
        public static void Load()
        {
            Console.Clear();
            Console.WriteLine("Excluir um Curso");
            Console.WriteLine("-------------");
            Console.Write("Qual o id do Curso que deseja excluir? ");
            var id = Console.ReadLine();

            Delete(id);
            Console.ReadKey();
            MenuCursoTela.Load();
        }

        public static void Delete(string id)
        {
            try
            {
                var repository = new Repository<Curso>(Database.Connection);
                repository.Delete(id);
                Console.WriteLine("Curso excluído com sucesso!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Não foi possível excluir o Curso");
                Console.WriteLine(ex.Message);
            }
        }
    }
}