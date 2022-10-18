using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.AutorTela
{
    public static class CreateAutorTela
    {
        public static void Load()
        {
            Console.Clear();
            Console.WriteLine("Novo Autor");
            Console.WriteLine("-------------");
            Console.Write("Nome: ");
            var nome = Console.ReadLine();

            Console.Write("Bio: ");
            var bio = Console.ReadLine();

            Console.Write("Email: ");
            var email = Console.ReadLine();

            Create(new Autor
            {
                Id = Guid.NewGuid(),
                Nome = nome,
                Bio = bio,
                Email = email,
            });
            Console.ReadKey();
            MenuAutorTela.Load();
        }

        public static void Create(Autor Autor)
        {
            Console.WriteLine(Autor.Id);
            Console.WriteLine(Autor.Nome);
            Console.WriteLine(Autor.Bio);
            Console.WriteLine(Autor.Email);

            try
            {
                var repository = new Repository<Autor>(Database.Connection);
                repository.Create(Autor);
                Console.WriteLine("Autor cadastrada com sucesso!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Não foi possível salvar o Autor");
                Console.WriteLine(ex.Message);
            }
        }
    }
}