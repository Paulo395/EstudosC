using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.CategoriaTela
{
    public static class CreateCategoriaTela
    {
        public static void Load()
        {
            Console.Clear();
            Console.WriteLine("Nova Categoria");
            Console.WriteLine("-------------");
            Console.Write("Titulo: ");
            var titulo = Console.ReadLine();

            Console.Write("Descrição: ");
            var descricao = Console.ReadLine();

            Create(new Categoria
            {
                Id = Guid.NewGuid(),
                Titulo = titulo,
                Descricao = descricao
            });
            Console.ReadKey();
            MenuCategoriaTela.Load();
        }

        public static void Create(Categoria Categoria)
        {
            Console.WriteLine(Categoria.Id);
            Console.WriteLine(Categoria.Titulo);
            Console.WriteLine(Categoria.Descricao);

            try
            {
                var repository = new Repository<Categoria>(Database.Connection);
                repository.Create(Categoria);
                Console.WriteLine("Categoria cadastrada com sucesso!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Não foi possível salvar o Categoria");
                Console.WriteLine(ex.Message);
            }
        }
    }
}