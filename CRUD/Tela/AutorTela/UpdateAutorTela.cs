using System;
using Blog.Models;
using Blog.Repositories;

namespace Blog.Tela.AutorTela
{
    public static class UpdateAutorTela
    {
        public static void Load()
        {
            Console.Clear();
            Console.WriteLine("Atualizando um Autor");
            Console.WriteLine("-------------");
            Console.Write("Id: ");
            Guid id = Guid.Parse(Console.ReadLine());

            Console.Write("Nome: ");
            var nome = Console.ReadLine();

            Console.Write("Bio: ");
            var bio = Console.ReadLine();

            Console.Write("Email: ");
            var email = Console.ReadLine();

            Update(new Autor
            {
                Id = id,
                Nome = nome,
                Bio = bio,
                Email = email
            });
            Console.ReadKey();
            MenuAutorTela.Load();
        }

        public static void Update(Autor Autor)
        {
            try
            {
                var repository = new Repository<Autor>(Database.Connection);
                repository.Update(Autor);
                Console.WriteLine("Autor atualizado com sucesso!");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Não foi possível atualizar a Autor");
                Console.WriteLine(ex.Message);
            }
        }
    }
}