using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.CategoriaTela
{
    public static class DeleteCategoriaTela
    {
        public static void Load()
        {
            Console.Clear();
            Console.WriteLine("Excluir uma Categoria");
            Console.WriteLine("-------------");
            Console.Write("Qual o id da Categoria que deseja excluir? ");
            var id = Console.ReadLine();

            Delete(id);
            Console.ReadKey();
            MenuCategoriaTela.Load();
        }

        public static void Delete(string id)
        {
            try
            {
                var repository = new Repository<Categoria>(Database.Connection);
                repository.Delete(id);
                Console.WriteLine("Categoria excluído com sucesso!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Não foi possível excluir o Categoria");
                Console.WriteLine(ex.Message);
            }
        }
    }
}