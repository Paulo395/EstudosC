using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.CategoriaTela
{
    public static class UpdateCategoriaTela
    {
        public static void Load()
        {
            Console.Clear();
            Console.WriteLine("Atualizando uma Categoria");
            Console.WriteLine("-------------");
            Console.Write("Id: ");
            Guid id = Guid.Parse(Console.ReadLine());

            Console.Write("Titulo: ");
            var titulo = Console.ReadLine();

            Console.Write("Descrição: ");
            var descricao = Console.ReadLine();

            Update(new Categoria
            {
                Id = id,
                Titulo = titulo,
                Descricao = descricao
            });
            Console.ReadKey();
            MenuCategoriaTela.Load();
        }

        public static void Update(Categoria Categoria)
        {
            try
            {
                var repository = new Repository<Categoria>(Database.Connection);
                repository.Update(Categoria);
                Console.WriteLine("Categoria atualizado com sucesso!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Não foi possível atualizar a Categoria");
                Console.WriteLine(ex.Message);
            }
        }
    }
}