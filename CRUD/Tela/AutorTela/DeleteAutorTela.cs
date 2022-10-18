using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.AutorTela
{
    public static class DeleteAutorTela
    {
        public static void Load()
        {
            Console.Clear();
            Console.WriteLine("Excluir um Autor");
            Console.WriteLine("-------------");
            Console.Write("Qual o id do Autor que deseja excluir? ");
            var id = Console.ReadLine();

            Delete(id);
            Console.ReadKey();
            MenuAutorTela.Load();
        }

        public static void Delete(string id)
        {
            try
            {
                var repository = new Repository<Autor>(Database.Connection);
                repository.Delete(id);
                Console.WriteLine("Autor excluído com sucesso!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Não foi possível excluir o Autor");
                Console.WriteLine(ex.Message);
            }
        }
    }
}